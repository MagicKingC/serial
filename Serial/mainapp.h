#ifndef MAINAPP_H
#define MAINAPP_H

#include <QWidget>
#include <QSerialPort>

namespace Ui {
class MainApp;
}


class MainApp : public QWidget
{
    Q_OBJECT

private slots:
    void OpenBtnClick(void);//打开串口
    void CloseBtnClick(void);//关闭串口
    void ReadSerial(void);//读串口
    void SendDataSerial(void);//发送数据
    void ClearSendText(void);//清除发送文本
    void ClearShow(void);//清除显示
    void PushData(void);//刷新串口

public:
    explicit MainApp(QWidget *parent = 0);
    ~MainApp();

private:

    QSerialPort *serialport;
    bool openflage=false;
    void InitMainAPP(void);//初始化界面

    Ui::MainApp *ui;
};

#endif // MAINAPP_H
