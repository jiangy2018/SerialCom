/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QPlainTextEdit *RevtEdit;
    QGridLayout *gridLayout;
    QComboBox *SerialCom;
    QLabel *label_2;
    QComboBox *SerialBaud;
    QLabel *label_3;
    QComboBox *SerialData_Bits;
    QLabel *label_4;
    QComboBox *SerialStop_Bits;
    QLabel *label_5;
    QComboBox *Serial_Parity;
    QLabel *label_6;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *SendEdit;
    QPushButton *Button_Open;
    QSpacerItem *horizontalSpacer;
    QPushButton *Button_Close;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Button_Send;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Button_Clear;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 480);
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        RevtEdit = new QPlainTextEdit(Widget);
        RevtEdit->setObjectName(QString::fromUtf8("RevtEdit"));
        RevtEdit->setReadOnly(true);

        gridLayout_3->addWidget(RevtEdit, 0, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SerialCom = new QComboBox(Widget);
        SerialCom->setObjectName(QString::fromUtf8("SerialCom"));

        gridLayout->addWidget(SerialCom, 0, 0, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        SerialBaud = new QComboBox(Widget);
        SerialBaud->addItem(QString());
        SerialBaud->addItem(QString());
        SerialBaud->addItem(QString());
        SerialBaud->setObjectName(QString::fromUtf8("SerialBaud"));

        gridLayout->addWidget(SerialBaud, 1, 0, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        SerialData_Bits = new QComboBox(Widget);
        SerialData_Bits->addItem(QString());
        SerialData_Bits->addItem(QString());
        SerialData_Bits->addItem(QString());
        SerialData_Bits->addItem(QString());
        SerialData_Bits->setObjectName(QString::fromUtf8("SerialData_Bits"));

        gridLayout->addWidget(SerialData_Bits, 2, 0, 1, 1);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        SerialStop_Bits = new QComboBox(Widget);
        SerialStop_Bits->addItem(QString());
        SerialStop_Bits->addItem(QString());
        SerialStop_Bits->addItem(QString());
        SerialStop_Bits->setObjectName(QString::fromUtf8("SerialStop_Bits"));

        gridLayout->addWidget(SerialStop_Bits, 3, 0, 1, 1);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 1, 1, 1);

        Serial_Parity = new QComboBox(Widget);
        Serial_Parity->addItem(QString());
        Serial_Parity->setObjectName(QString::fromUtf8("Serial_Parity"));

        gridLayout->addWidget(Serial_Parity, 4, 0, 1, 1);

        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 30, 171, 41));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(groupBox, 0, 1, 1, 6);

        SendEdit = new QLineEdit(Widget);
        SendEdit->setObjectName(QString::fromUtf8("SendEdit"));

        gridLayout_2->addWidget(SendEdit, 1, 1, 1, 5);

        Button_Open = new QPushButton(Widget);
        Button_Open->setObjectName(QString::fromUtf8("Button_Open"));

        gridLayout_2->addWidget(Button_Open, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 1, 1, 1);

        Button_Close = new QPushButton(Widget);
        Button_Close->setObjectName(QString::fromUtf8("Button_Close"));

        gridLayout_2->addWidget(Button_Close, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        Button_Send = new QPushButton(Widget);
        Button_Send->setObjectName(QString::fromUtf8("Button_Send"));

        gridLayout_2->addWidget(Button_Send, 2, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 5, 1, 1);

        Button_Clear = new QPushButton(Widget);
        Button_Clear->setObjectName(QString::fromUtf8("Button_Clear"));

        gridLayout_2->addWidget(Button_Clear, 2, 6, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);


        retranslateUi(Widget);

        SerialBaud->setCurrentIndex(1);
        SerialData_Bits->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\345\217\267", nullptr));
        SerialBaud->setItemText(0, QCoreApplication::translate("Widget", "4800", nullptr));
        SerialBaud->setItemText(1, QCoreApplication::translate("Widget", "9600", nullptr));
        SerialBaud->setItemText(2, QCoreApplication::translate("Widget", "115200", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        SerialData_Bits->setItemText(0, QCoreApplication::translate("Widget", "5", nullptr));
        SerialData_Bits->setItemText(1, QCoreApplication::translate("Widget", "6", nullptr));
        SerialData_Bits->setItemText(2, QCoreApplication::translate("Widget", "7", nullptr));
        SerialData_Bits->setItemText(3, QCoreApplication::translate("Widget", "8", nullptr));

        label_4->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        SerialStop_Bits->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        SerialStop_Bits->setItemText(1, QCoreApplication::translate("Widget", "1.5", nullptr));
        SerialStop_Bits->setItemText(2, QCoreApplication::translate("Widget", "2", nullptr));

        label_5->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        Serial_Parity->setItemText(0, QCoreApplication::translate("Widget", "none", nullptr));

        label_6->setText(QCoreApplication::translate("Widget", "\346\240\241\351\252\214\346\234\252", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\345\212\251\346\211\213", nullptr));
        Button_Open->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200", nullptr));
        Button_Close->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
        Button_Send->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        Button_Clear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
