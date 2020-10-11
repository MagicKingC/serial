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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainApp
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
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
    QHBoxLayout *horizontalLayout;
    QPushButton *OpenBtn;
    QPushButton *CloseBtn;
    QPushButton *RefreshBtn;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox_2;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QCheckBox *checkBox_3;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *ShowtextEdit;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *SendtEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *SendBtn;
    QPushButton *ClearBtn;
    QPushButton *ClearShowBtn;
    QLabel *label_6;

    void setupUi(QWidget *MainApp)
    {
        if (MainApp->objectName().isEmpty())
            MainApp->setObjectName(QString::fromUtf8("MainApp"));
        MainApp->resize(1119, 730);
        gridLayout = new QGridLayout(MainApp);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(MainApp);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(230, 16777215));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        SerialNumcbBox = new QComboBox(groupBox);
        SerialNumcbBox->setObjectName(QString::fromUtf8("SerialNumcbBox"));
        SerialNumcbBox->setMinimumSize(QSize(80, 20));

        formLayout->setWidget(0, QFormLayout::FieldRole, SerialNumcbBox);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        BaudRatecbBox = new QComboBox(groupBox);
        BaudRatecbBox->setObjectName(QString::fromUtf8("BaudRatecbBox"));
        BaudRatecbBox->setMinimumSize(QSize(80, 20));

        formLayout->setWidget(1, QFormLayout::FieldRole, BaudRatecbBox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        StopBitcbBox = new QComboBox(groupBox);
        StopBitcbBox->setObjectName(QString::fromUtf8("StopBitcbBox"));
        StopBitcbBox->setMinimumSize(QSize(80, 20));

        formLayout->setWidget(2, QFormLayout::FieldRole, StopBitcbBox);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        DataBitcbBox = new QComboBox(groupBox);
        DataBitcbBox->setObjectName(QString::fromUtf8("DataBitcbBox"));
        DataBitcbBox->setMinimumSize(QSize(80, 20));

        formLayout->setWidget(3, QFormLayout::FieldRole, DataBitcbBox);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        CheckcbBox = new QComboBox(groupBox);
        CheckcbBox->setObjectName(QString::fromUtf8("CheckcbBox"));
        CheckcbBox->setMinimumSize(QSize(80, 20));

        formLayout->setWidget(4, QFormLayout::FieldRole, CheckcbBox);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        OpenBtn = new QPushButton(groupBox);
        OpenBtn->setObjectName(QString::fromUtf8("OpenBtn"));
        OpenBtn->setMinimumSize(QSize(50, 30));
        OpenBtn->setMaximumSize(QSize(50, 30));

        horizontalLayout->addWidget(OpenBtn);

        CloseBtn = new QPushButton(groupBox);
        CloseBtn->setObjectName(QString::fromUtf8("CloseBtn"));
        CloseBtn->setMinimumSize(QSize(50, 30));
        CloseBtn->setMaximumSize(QSize(50, 30));

        horizontalLayout->addWidget(CloseBtn);

        RefreshBtn = new QPushButton(groupBox);
        RefreshBtn->setObjectName(QString::fromUtf8("RefreshBtn"));
        RefreshBtn->setMinimumSize(QSize(50, 30));
        RefreshBtn->setMaximumSize(QSize(50, 30));

        horizontalLayout->addWidget(RefreshBtn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MainApp);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, radioButton);

        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, radioButton_2);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, checkBox);

        horizontalSpacer_2 = new QSpacerItem(104, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(1, QFormLayout::FieldRole, horizontalSpacer_2);

        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, checkBox_2);

        horizontalSpacer_3 = new QSpacerItem(104, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(2, QFormLayout::FieldRole, horizontalSpacer_3);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(MainApp);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(230, 16777215));
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_3);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, radioButton_4);

        checkBox_3 = new QCheckBox(groupBox_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, checkBox_3);

        horizontalSpacer_4 = new QSpacerItem(82, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_3->setItem(1, QFormLayout::FieldRole, horizontalSpacer_4);

        checkBox_4 = new QCheckBox(groupBox_3);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, checkBox_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_4->addWidget(spinBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        formLayout_3->setLayout(2, QFormLayout::FieldRole, horizontalLayout_4);


        verticalLayout_4->addWidget(groupBox_3);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ShowtextEdit = new QTextEdit(MainApp);
        ShowtextEdit->setObjectName(QString::fromUtf8("ShowtextEdit"));
        ShowtextEdit->setReadOnly(true);

        verticalLayout_3->addWidget(ShowtextEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        SendtEdit = new QTextEdit(MainApp);
        SendtEdit->setObjectName(QString::fromUtf8("SendtEdit"));

        verticalLayout_2->addWidget(SendtEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        SendBtn = new QPushButton(MainApp);
        SendBtn->setObjectName(QString::fromUtf8("SendBtn"));
        SendBtn->setMinimumSize(QSize(80, 40));
        SendBtn->setMaximumSize(QSize(80, 40));

        horizontalLayout_3->addWidget(SendBtn);

        ClearBtn = new QPushButton(MainApp);
        ClearBtn->setObjectName(QString::fromUtf8("ClearBtn"));
        ClearBtn->setMinimumSize(QSize(80, 40));
        ClearBtn->setMaximumSize(QSize(80, 40));

        horizontalLayout_3->addWidget(ClearBtn);

        ClearShowBtn = new QPushButton(MainApp);
        ClearShowBtn->setObjectName(QString::fromUtf8("ClearShowBtn"));
        ClearShowBtn->setMinimumSize(QSize(80, 40));
        ClearShowBtn->setMaximumSize(QSize(80, 40));

        horizontalLayout_3->addWidget(ClearShowBtn);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3->setStretch(0, 10);
        verticalLayout_3->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout_3, 1, 1, 1, 1);

        label_6 = new QLabel(MainApp);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(20);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 0, 1, 2);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 10);

        retranslateUi(MainApp);

        QMetaObject::connectSlotsByName(MainApp);
    } // setupUi

    void retranslateUi(QWidget *MainApp)
    {
        MainApp->setWindowTitle(QCoreApplication::translate("MainApp", "MainApp", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainApp", "\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("MainApp", "\344\270\262\345\217\243\345\217\267\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainApp", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainApp", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainApp", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainApp", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        OpenBtn->setText(QCoreApplication::translate("MainApp", "\346\211\223\345\274\200", nullptr));
        CloseBtn->setText(QCoreApplication::translate("MainApp", "\345\205\263\351\227\255", nullptr));
        RefreshBtn->setText(QCoreApplication::translate("MainApp", "\345\210\267\346\226\260", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainApp", "\346\216\245\346\224\266\350\256\276\347\275\256", nullptr));
        radioButton->setText(QCoreApplication::translate("MainApp", "ASCLL\346\230\276\347\244\272", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainApp", "16\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        checkBox->setText(QCoreApplication::translate("MainApp", "\346\230\276\347\244\272\345\217\221\351\200\201", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainApp", "\346\230\276\347\244\272\346\227\266\351\227\264", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainApp", "\345\217\221\351\200\201\350\256\276\347\275\256", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainApp", "ASCLL\345\217\221\351\200\201", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainApp", "16\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainApp", "\346\234\253\345\260\276\346\267\273\345\212\240\345\233\236\350\275\246\346\215\242\350\241\214", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainApp", "\351\207\215\345\244\215\345\217\221\351\200\201", nullptr));
        label_7->setText(QCoreApplication::translate("MainApp", "\346\227\266\351\227\264\357\274\232", nullptr));
        SendBtn->setText(QCoreApplication::translate("MainApp", "\345\217\221\351\200\201", nullptr));
        ClearBtn->setText(QCoreApplication::translate("MainApp", "\346\270\205\351\231\244", nullptr));
        ClearShowBtn->setText(QCoreApplication::translate("MainApp", "\346\270\205\351\231\244\346\230\276\347\244\272", nullptr));
        label_6->setText(QCoreApplication::translate("MainApp", "\350\207\252\345\210\266\344\270\262\345\217\243\345\267\245\345\205\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainApp: public Ui_MainApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAPP_H
