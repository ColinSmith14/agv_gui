/********************************************************************************
** Form generated from reading UI file 'battery_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTERY_SCREEN_H
#define UI_BATTERY_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_batteryWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *percentageLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLabel *voltageLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLabel *currentLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *tempLabel;

    void setupUi(QWidget *batteryWidget)
    {
        if (batteryWidget->objectName().isEmpty())
            batteryWidget->setObjectName(QString::fromUtf8("batteryWidget"));
        batteryWidget->resize(846, 540);
        verticalLayoutWidget = new QWidget(batteryWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 60, 761, 421));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        percentageLabel = new QLabel(verticalLayoutWidget);
        percentageLabel->setObjectName(QString::fromUtf8("percentageLabel"));
        percentageLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(percentageLabel);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_9);

        voltageLabel = new QLabel(verticalLayoutWidget);
        voltageLabel->setObjectName(QString::fromUtf8("voltageLabel"));
        voltageLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(voltageLabel);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_7);

        currentLabel = new QLabel(verticalLayoutWidget);
        currentLabel->setObjectName(QString::fromUtf8("currentLabel"));
        currentLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(currentLabel);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        tempLabel = new QLabel(verticalLayoutWidget);
        tempLabel->setObjectName(QString::fromUtf8("tempLabel"));
        tempLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(tempLabel);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(batteryWidget);

        QMetaObject::connectSlotsByName(batteryWidget);
    } // setupUi

    void retranslateUi(QWidget *batteryWidget)
    {
        batteryWidget->setWindowTitle(QCoreApplication::translate("batteryWidget", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("batteryWidget", "Percentage", nullptr));
        percentageLabel->setText(QCoreApplication::translate("batteryWidget", "null", nullptr));
        label_9->setText(QCoreApplication::translate("batteryWidget", "Voltage", nullptr));
        voltageLabel->setText(QCoreApplication::translate("batteryWidget", "null", nullptr));
        label_7->setText(QCoreApplication::translate("batteryWidget", "Current", nullptr));
        currentLabel->setText(QCoreApplication::translate("batteryWidget", "null", nullptr));
        label_5->setText(QCoreApplication::translate("batteryWidget", "Temperature", nullptr));
        tempLabel->setText(QCoreApplication::translate("batteryWidget", "null", nullptr));
    } // retranslateUi

};

namespace Ui {
    class batteryWidget: public Ui_batteryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTERY_SCREEN_H
