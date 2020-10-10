#include "mainapp.h"
#include "ui_mainapp.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QMessageBox>
#include <QTextCodec>
#include <QDebug>
#include <QStatusBar>


MainApp::MainApp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainApp)
{
    ui->setupUi(this);
    InitMainAPP();
    ui->RefreshBtn->clicked();
    //设置状态栏
    QStatusBar *statusBr =  new QStatusBar(this);
    layout()->addWidget(statusBr);
    QLabel *fileType = new QLabel(this);
    fileType->setText("Normal text file");
    statusBr->addWidget(fileType);


}

MainApp::~MainApp()
{
    delete ui;
}


//function
void MainApp::InitMainAPP(void){
    //初始化串口对象
    serialport = new QSerialPort(this);

    //绑定槽
    connect(ui->OpenBtn,SIGNAL(clicked()),this,SLOT(OpenBtnClick()));
    connect(ui->CloseBtn,SIGNAL(clicked()),this,SLOT(CloseBtnClick()));
    connect(serialport,SIGNAL(readyRead()),this,SLOT(ReadSerial()));
    connect(ui->SendBtn,SIGNAL(clicked()),this,SLOT(SendDataSerial()));
    connect(ui->ClearBtn,SIGNAL(clicked()),this,SLOT(ClearSendText()));
    connect(ui->ClearShowBtn,SIGNAL(clicked()),this,SLOT(ClearShow()));
    connect(ui->RefreshBtn,SIGNAL(clicked()),this,SLOT(PushData()));

}

//slots
//打开串口
void MainApp::OpenBtnClick(void){

    QSerialPort::BaudRate baudrate;//波特率
    QSerialPort::StopBits stopbits;//停止位
    QSerialPort::DataBits databits;//数据位
    QSerialPort::Parity   checkbit;//校验位

    QString baudrates = ui->BaudRatecbBox->currentText();
    if(baudrates == "115200"){
        baudrate = QSerialPort::Baud115200;
    }else if(baudrates == "9600"){
        baudrate = QSerialPort::Baud9600;
    }else if(baudrates == "4800"){
        baudrate = QSerialPort::Baud4800;
    }

    QString stopbits_s = ui->StopBitcbBox->currentText();
    if(stopbits_s == "1"){
        stopbits = QSerialPort::OneStop;
    }else if(stopbits_s == "1.5"){
        stopbits = QSerialPort::OneAndHalfStop;
    }else if(stopbits_s == "2"){
        stopbits = QSerialPort::TwoStop;
    }

    QString databits_s = ui->DataBitcbBox->currentText();
    if(databits_s == "5"){
        databits = QSerialPort::Data5;
    }else if(databits_s == "6"){
        databits = QSerialPort::Data6;
    }else if(databits_s == "7"){
        databits = QSerialPort::Data7;
    }else if(databits_s == "8"){
        databits = QSerialPort::Data8;
    }

    QString checkbit_s = ui->CheckcbBox->currentText();
    if(checkbit_s == "None"){
        checkbit = QSerialPort::NoParity;
    }

    //设置串口
    serialport->setPortName(ui->SerialNumcbBox->currentText().split("(")[0]);
    serialport->setBaudRate(baudrate);
    serialport->setStopBits(stopbits);
    serialport->setDataBits(databits);
    serialport->setParity(checkbit);
    //打开串口
    openflage = serialport->open(QIODevice::ReadWrite);
    if(openflage == true){
        QMessageBox::information(this,QString("提示"),QString("打开成功"));
    }else{
        QMessageBox::critical(this,QString("提示"),QString("打开失败"));
    }
}

//关闭串口
void MainApp::CloseBtnClick(void){
    openflage = false;
    serialport->close();
}
//串口刷新
void MainApp::PushData(void){
    if(openflage){
        QMessageBox::warning(this,"提示","请关闭串口在进行刷新");
    }else{
        QStringList serialnum_str;
        QStringList baudrate_str;//波特率
        QStringList stopbit_str;//停止位
        QStringList databit_str;//数据位
        QStringList checkbit_str;//校验位

        serialnum_str.clear();
        ui->SerialNumcbBox->clear();
        foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
           serialnum_str<<info.portName()+"("+info.description()+")";

        }

        ui->SerialNumcbBox->addItems(serialnum_str);

        baudrate_str<<"115200"<<"9600"<<"4800";
        stopbit_str<<"1"<<"1.5"<<"2";
        databit_str<<"5"<<"6"<<"7"<<"8";
        checkbit_str<<"None";


        ui->BaudRatecbBox->addItems(baudrate_str);
        ui->StopBitcbBox->addItems(stopbit_str);
        ui->DataBitcbBox->addItems(databit_str);
        ui->CheckcbBox->addItems(checkbit_str);


        ui->BaudRatecbBox->setCurrentText("115200");//设置默认的波特率
        ui->StopBitcbBox->setCurrentText("1");//设置默认的停止位
        ui->DataBitcbBox->setCurrentText("8");//设置默认的数据位
        ui->CheckcbBox->setCurrentText("None");//设置默认的校验位

    }
}

//读串口
void MainApp::ReadSerial(void){
    QString buf;
    QByteArray bytearray = serialport->readAll();
    buf = QTextCodec::codecForName("GB2312")->toUnicode(bytearray);
    ui->ShowtextEdit->append(buf);

}
//串口发送
void MainApp::SendDataSerial(void){
    QString buf;
    if(serialport->isOpen()==true){
        buf = ui->SendtEdit->toPlainText();
        serialport->write(buf.toLocal8Bit().data());
    }else{
        QMessageBox::warning(this,QString("提示"),QString("请打开串口"));
    }

}
//清除发送文本
void MainApp::ClearSendText(void){
    ui->SendtEdit->clear();
}
//清除显示
void MainApp::ClearShow(void){
    ui->ShowtextEdit->clear();
}

