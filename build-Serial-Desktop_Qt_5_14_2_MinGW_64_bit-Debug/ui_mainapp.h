/********************************************************************************
** Form generated from reading UI file 'mainapp.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINAPP_H
#define UI_MAINAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainApp
{
public:
    QGridLayout *gridLayout_4;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QPushButton *OpenBtn;
    QTextEdit *SendtEdit;
    QPushButton *SendBtn;
    QPushButton *CloseBtn;
    QPushButton *ClearBtn;
    QPushButton *ClearShowBtn;
    QPushButton *RefreshBtn;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *SerialNumcbBox;
    QLabel *label_5;
    QComboBox *BaudRatecbBox;
    QLabel *label_2;
    QComboBox *StopBitcbBox;
    QLabel *label_3;
    QComboBox *DataBitcbBox;
    QLabel *label_4;
    QComboBox *CheckcbBox;
    QTextEdit *ShowtextEdit;
    QFrame *line;

    void setupUi(QWidget *MainApp)
    {
        if (MainApp->objectName().isEmpty())
            MainApp->setObjectName(QString::fromUtf8("MainApp"));
        MainApp->resize(921, 525);
        gridLayout_4 = new QGridLayout(MainApp);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(3);
        gridLayout_4->setContentsMargins(6, 0, 6, 0);
        widget = new QWidget(MainApp);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(6);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(6, 0, 6, 6);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(20);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 1, 1, 1);

        OpenBtn = new QPushButton(widget);
        OpenBtn->setObjectName(QString::fromUtf8("OpenBtn"));
        OpenBtn->setMinimumSize(QSize(80, 40));
        OpenBtn->setMaximumSize(QSize(80, 40));

        gridLayout->addWidget(OpenBtn, 1, 0, 1, 1);

        SendtEdit = new QTextEdit(widget);
        SendtEdit->setObjectName(QString::fromUtf8("SendtEdit"));

        gridLayout->addWidget(SendtEdit, 1, 1, 2, 1);

        SendBtn = new QPushButton(widget);
        SendBtn->setObjectName(QString::fromUtf8("SendBtn"));
        SendBtn->setMinimumSize(QSize(80, 40));
        SendBtn->setMaximumSize(QSize(80, 40));

        gridLayout->addWidget(SendBtn, 1, 2, 1, 1);

        CloseBtn = new QPushButton(widget);
        CloseBtn->setObjectName(QString::fromUtf8("CloseBtn"));
        CloseBtn->setMinimumSize(QSize(80, 40));
        CloseBtn->setMaximumSize(QSize(80, 40));

        gridLayout->addWidget(CloseBtn, 2, 0, 1, 1);

        ClearBtn = new QPushButton(widget);
        ClearBtn->setObjectName(QString::fromUtf8("ClearBtn"));
        ClearBtn->setMinimumSize(QSize(80, 40));
        ClearBtn->setMaximumSize(QSize(80, 40));

        gridLayout->addWidget(ClearBtn, 2, 2, 1, 1);

        ClearShowBtn = new QPushButton(widget);
        ClearShowBtn->setObjectName(QString::fromUtf8("ClearShowBtn"));

        gridLayout->addWidget(ClearShowBtn, 0, 2, 1, 1);

        RefreshBtn = new QPushButton(widget);
        RefreshBtn->setObjectName(QString::fromUtf8("RefreshBtn"));

        gridLayout->addWidget(RefreshBtn, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        SerialNumcbBox = new QComboBox(widget);
        SerialNumcbBox->setObjectName(QString::fromUtf8("SerialNumcbBox"));
        SerialNumcbBox->setMinimumSize(QSize(80, 20));

        gridLayout_2->addWidget(SerialNumcbBox, 0, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        BaudRatecbBox = new QComboBox(widget);
        BaudRatecbBox->setObjectName(QString::fromUtf8("BaudRatecbBox"));
        BaudRatecbBox->setMinimumSize(QSize(80, 20));

        gridLayout_2->addWidget(BaudRatecbBox, 1, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        StopBitcbBox = new QComboBox(widget);
        StopBitcbBox->setObjectName(QString::fromUtf8("StopBitcbBox"));
        StopBitcbBox->setMinimumSize(QSize(80, 20));

        gridLayout_2->addWidget(StopBitcbBox, 2, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        DataBitcbBox = new QComboBox(widget);
        DataBitcbBox->setObjectName(QString::fromUtf8("DataBitcbBox"));
        DataBitcbBox->setMinimumSize(QSize(80, 20));

        gridLayout_2->addWidget(DataBitcbBox, 3, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        CheckcbBox = new QComboBox(widget);
        CheckcbBox->setObjectName(QString::fromUtf8("CheckcbBox"));
        CheckcbBox->setMinimumSize(QSize(80, 20));

        gridLayout_2->addWidget(CheckcbBox, 4, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);

        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 3);

        gridLayout_4->addWidget(widget, 3, 0, 1, 1);

        ShowtextEdit = new QTextEdit(MainApp);
        ShowtextEdit->setObjectName(QString::fromUtf8("ShowtextEdit"));
        ShowtextEdit->setReadOnly(true);

        gridLayout_4->addWidget(ShowtextEdit, 0, 0, 1, 1);

        line = new QFrame(MainApp);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 2, 0, 1, 1);

        line->raise();
        ShowtextEdit->raise();
        widget->raise();

        retranslateUi(MainApp);

        QMetaObject::connectSlotsByName(MainApp);
    } // setupUi

    void retranslateUi(QWidget *MainApp)
    {
        MainApp->setWindowTitle(QCoreApplication::translate("MainApp", "MainApp", nullptr));
        label_6->setText(QCoreApplication::translate("MainApp", "\350\207\252\345\210\266\344\270\262\345\217\243\345\267\245\345\205\267", nullptr));
        OpenBtn->setText(QCoreApplication::translate("MainApp", "\346\211\223\345\274\200", nullptr));
        SendBtn->setText(QCoreApplication::translate("MainApp", "\345\217\221\351\200\201", nullptr));
        CloseBtn->setText(QCoreApplication::translate("MainApp", "\345\205\263\351\227\255", nullptr));
        ClearBtn->setText(QCoreApplication::translate("MainApp", "\346\270\205\351\231\244", nullptr));
        ClearShowBtn->setText(QCoreApplication::translate("MainApp", "\346\270\205\351\231\244\346\230\276\347\244\272", nullptr));
        RefreshBtn->setText(QCoreApplication::translate("MainApp", "\345\210\267\346\226\260", nullptr));
        label->setText(QCoreApplication::translate("MainApp", "\344\270\262\345\217\243\345\217\267\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainApp", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainApp", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainApp", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainApp", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainApp: public Ui_MainApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAPP_H
