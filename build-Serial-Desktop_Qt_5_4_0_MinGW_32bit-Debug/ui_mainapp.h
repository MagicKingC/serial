/********************************************************************************
** Form generated from reading UI file 'mainapp.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINAPP_H
#define UI_MAINAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainApp
{
public:
    QGridLayout *gridLayout_2;
    QTextEdit *ShowtextEdit;
    QFrame *line;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *SerialNumcbBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *BaudRatecbBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *StopBitcbBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *DataBitcbBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *CheckcbBox;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QPushButton *OpenBtn;
    QTextEdit *SendtEdit;
    QPushButton *SendBtn;
    QPushButton *CloseBtn;
    QPushButton *ClearBtn;
    QPushButton *ClearShowBtn;

    void setupUi(QWidget *MainApp)
    {
        if (MainApp->objectName().isEmpty())
            MainApp->setObjectName(QStringLiteral("MainApp"));
        MainApp->resize(921, 525);
        gridLayout_2 = new QGridLayout(MainApp);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        ShowtextEdit = new QTextEdit(MainApp);
        ShowtextEdit->setObjectName(QStringLiteral("ShowtextEdit"));
        ShowtextEdit->setReadOnly(true);

        gridLayout_2->addWidget(ShowtextEdit, 0, 0, 1, 1);

        line = new QFrame(MainApp);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(MainApp);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        SerialNumcbBox = new QComboBox(MainApp);
        SerialNumcbBox->setObjectName(QStringLiteral("SerialNumcbBox"));
        SerialNumcbBox->setMinimumSize(QSize(80, 20));
        SerialNumcbBox->setMaximumSize(QSize(80, 20));

        horizontalLayout->addWidget(SerialNumcbBox);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(MainApp);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        BaudRatecbBox = new QComboBox(MainApp);
        BaudRatecbBox->setObjectName(QStringLiteral("BaudRatecbBox"));
        BaudRatecbBox->setMinimumSize(QSize(80, 20));
        BaudRatecbBox->setMaximumSize(QSize(80, 20));

        horizontalLayout_2->addWidget(BaudRatecbBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(MainApp);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        StopBitcbBox = new QComboBox(MainApp);
        StopBitcbBox->setObjectName(QStringLiteral("StopBitcbBox"));
        StopBitcbBox->setMinimumSize(QSize(80, 20));
        StopBitcbBox->setMaximumSize(QSize(80, 20));

        horizontalLayout_3->addWidget(StopBitcbBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(MainApp);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        DataBitcbBox = new QComboBox(MainApp);
        DataBitcbBox->setObjectName(QStringLiteral("DataBitcbBox"));
        DataBitcbBox->setMinimumSize(QSize(80, 20));
        DataBitcbBox->setMaximumSize(QSize(80, 20));

        horizontalLayout_4->addWidget(DataBitcbBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(MainApp);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        CheckcbBox = new QComboBox(MainApp);
        CheckcbBox->setObjectName(QStringLiteral("CheckcbBox"));
        CheckcbBox->setMinimumSize(QSize(80, 20));
        CheckcbBox->setMaximumSize(QSize(80, 20));

        horizontalLayout_5->addWidget(CheckcbBox);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(MainApp);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setPointSize(20);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 1, 1, 1);

        OpenBtn = new QPushButton(MainApp);
        OpenBtn->setObjectName(QStringLiteral("OpenBtn"));
        OpenBtn->setMinimumSize(QSize(80, 40));
        OpenBtn->setMaximumSize(QSize(80, 40));

        gridLayout->addWidget(OpenBtn, 1, 0, 1, 1);

        SendtEdit = new QTextEdit(MainApp);
        SendtEdit->setObjectName(QStringLiteral("SendtEdit"));

        gridLayout->addWidget(SendtEdit, 1, 1, 2, 1);

        SendBtn = new QPushButton(MainApp);
        SendBtn->setObjectName(QStringLiteral("SendBtn"));
        SendBtn->setMinimumSize(QSize(80, 40));
        SendBtn->setMaximumSize(QSize(80, 40));

        gridLayout->addWidget(SendBtn, 1, 2, 1, 1);

        CloseBtn = new QPushButton(MainApp);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));
        CloseBtn->setMinimumSize(QSize(80, 40));
        CloseBtn->setMaximumSize(QSize(80, 40));

        gridLayout->addWidget(CloseBtn, 2, 0, 1, 1);

        ClearBtn = new QPushButton(MainApp);
        ClearBtn->setObjectName(QStringLiteral("ClearBtn"));
        ClearBtn->setMinimumSize(QSize(80, 40));
        ClearBtn->setMaximumSize(QSize(80, 40));

        gridLayout->addWidget(ClearBtn, 2, 2, 1, 1);

        ClearShowBtn = new QPushButton(MainApp);
        ClearShowBtn->setObjectName(QStringLiteral("ClearShowBtn"));

        gridLayout->addWidget(ClearShowBtn, 0, 0, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);


        gridLayout_2->addLayout(horizontalLayout_6, 2, 0, 1, 1);


        retranslateUi(MainApp);

        QMetaObject::connectSlotsByName(MainApp);
    } // setupUi

    void retranslateUi(QWidget *MainApp)
    {
        MainApp->setWindowTitle(QApplication::translate("MainApp", "MainApp", 0));
        label->setText(QApplication::translate("MainApp", "\344\270\262\345\217\243\345\217\267\357\274\232", 0));
        label_5->setText(QApplication::translate("MainApp", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        label_2->setText(QApplication::translate("MainApp", "\345\201\234\346\255\242\344\275\215\357\274\232", 0));
        label_3->setText(QApplication::translate("MainApp", "\346\225\260\346\215\256\344\275\215\357\274\232", 0));
        label_4->setText(QApplication::translate("MainApp", "\346\240\241\351\252\214\344\275\215\357\274\232", 0));
        label_6->setText(QApplication::translate("MainApp", "\350\207\252\345\210\266\344\270\262\345\217\243\345\267\245\345\205\267", 0));
        OpenBtn->setText(QApplication::translate("MainApp", "\346\211\223\345\274\200", 0));
        SendBtn->setText(QApplication::translate("MainApp", "\345\217\221\351\200\201", 0));
        CloseBtn->setText(QApplication::translate("MainApp", "\345\205\263\351\227\255", 0));
        ClearBtn->setText(QApplication::translate("MainApp", "\346\270\205\351\231\244", 0));
        ClearShowBtn->setText(QApplication::translate("MainApp", "\346\270\205\351\231\244\346\230\276\347\244\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MainApp: public Ui_MainApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAPP_H
