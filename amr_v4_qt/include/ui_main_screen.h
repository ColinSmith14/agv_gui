/********************************************************************************
** Form generated from reading UI file 'main_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_SCREEN_H
#define UI_MAIN_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "scrolling_label.h"

QT_BEGIN_NAMESPACE

class Ui_MainScreen
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *buttonsLayout;
    QPushButton *homeScreenButton;
    QPushButton *motorScreenButton;
    QPushButton *healthScreenButton;
    QPushButton *runningScreenButton;
    QStackedWidget *mainContent;
    QWidget *page;
    QWidget *page_2;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *wifiTextLabel;
    QLabel *wifiLabel;
    QLabel *dateTimeLabel;
    QVBoxLayout *verticalLayout_3;
    QLabel *BatteryTextLabel;
    QLabel *batteryLabel;
    ScrollingLabel *scrollingLabel;
    QLabel *estopLabel;
    QPushButton *exitButton;
    QPushButton *minimizeButton;

    void setupUi(QWidget *MainScreen)
    {
        if (MainScreen->objectName().isEmpty())
            MainScreen->setObjectName(QString::fromUtf8("MainScreen"));
        MainScreen->resize(1280, 800);
        MainScreen->setMinimumSize(QSize(200, 0));
        verticalLayoutWidget = new QWidget(MainScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 180, 231, 441));
        buttonsLayout = new QVBoxLayout(verticalLayoutWidget);
        buttonsLayout->setSpacing(0);
        buttonsLayout->setObjectName(QString::fromUtf8("buttonsLayout"));
        buttonsLayout->setSizeConstraint(QLayout::SetNoConstraint);
        buttonsLayout->setContentsMargins(0, 0, 0, 0);
        homeScreenButton = new QPushButton(verticalLayoutWidget);
        homeScreenButton->setObjectName(QString::fromUtf8("homeScreenButton"));
        homeScreenButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(homeScreenButton->sizePolicy().hasHeightForWidth());
        homeScreenButton->setSizePolicy(sizePolicy);
        homeScreenButton->setMinimumSize(QSize(100, 40));
        homeScreenButton->setMaximumSize(QSize(240, 80));
        homeScreenButton->setAutoDefault(false);
        homeScreenButton->setFlat(false);

        buttonsLayout->addWidget(homeScreenButton);

        motorScreenButton = new QPushButton(verticalLayoutWidget);
        motorScreenButton->setObjectName(QString::fromUtf8("motorScreenButton"));
        sizePolicy.setHeightForWidth(motorScreenButton->sizePolicy().hasHeightForWidth());
        motorScreenButton->setSizePolicy(sizePolicy);
        motorScreenButton->setMinimumSize(QSize(160, 60));
        motorScreenButton->setMaximumSize(QSize(240, 80));

        buttonsLayout->addWidget(motorScreenButton);

        healthScreenButton = new QPushButton(verticalLayoutWidget);
        healthScreenButton->setObjectName(QString::fromUtf8("healthScreenButton"));
        sizePolicy.setHeightForWidth(healthScreenButton->sizePolicy().hasHeightForWidth());
        healthScreenButton->setSizePolicy(sizePolicy);
        healthScreenButton->setMinimumSize(QSize(160, 60));
        healthScreenButton->setMaximumSize(QSize(240, 80));

        buttonsLayout->addWidget(healthScreenButton);

        runningScreenButton = new QPushButton(verticalLayoutWidget);
        runningScreenButton->setObjectName(QString::fromUtf8("runningScreenButton"));
        sizePolicy.setHeightForWidth(runningScreenButton->sizePolicy().hasHeightForWidth());
        runningScreenButton->setSizePolicy(sizePolicy);
        runningScreenButton->setMinimumSize(QSize(160, 60));
        runningScreenButton->setMaximumSize(QSize(240, 80));

        buttonsLayout->addWidget(runningScreenButton);

        mainContent = new QStackedWidget(MainScreen);
        mainContent->setObjectName(QString::fromUtf8("mainContent"));
        mainContent->setGeometry(QRect(270, 170, 1000, 480));
        mainContent->setFrameShape(QFrame::NoFrame);
        mainContent->setLineWidth(2);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mainContent->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mainContent->addWidget(page_2);
        label = new QLabel(MainScreen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1040, 690, 190, 71));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(MainScreen);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 100, 1271, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        wifiTextLabel = new QLabel(horizontalLayoutWidget);
        wifiTextLabel->setObjectName(QString::fromUtf8("wifiTextLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(wifiTextLabel->sizePolicy().hasHeightForWidth());
        wifiTextLabel->setSizePolicy(sizePolicy2);
        wifiTextLabel->setMaximumSize(QSize(16777215, 16777215));
        wifiTextLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(wifiTextLabel);

        wifiLabel = new QLabel(horizontalLayoutWidget);
        wifiLabel->setObjectName(QString::fromUtf8("wifiLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(wifiLabel->sizePolicy().hasHeightForWidth());
        wifiLabel->setSizePolicy(sizePolicy3);
        wifiLabel->setMaximumSize(QSize(16777215, 16777215));
        wifiLabel->setFrameShape(QFrame::NoFrame);
        wifiLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(wifiLabel);


        horizontalLayout->addLayout(verticalLayout);

        dateTimeLabel = new QLabel(horizontalLayoutWidget);
        dateTimeLabel->setObjectName(QString::fromUtf8("dateTimeLabel"));
        sizePolicy3.setHeightForWidth(dateTimeLabel->sizePolicy().hasHeightForWidth());
        dateTimeLabel->setSizePolicy(sizePolicy3);
        dateTimeLabel->setFrameShape(QFrame::NoFrame);
        dateTimeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(dateTimeLabel);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        BatteryTextLabel = new QLabel(horizontalLayoutWidget);
        BatteryTextLabel->setObjectName(QString::fromUtf8("BatteryTextLabel"));
        sizePolicy2.setHeightForWidth(BatteryTextLabel->sizePolicy().hasHeightForWidth());
        BatteryTextLabel->setSizePolicy(sizePolicy2);
        BatteryTextLabel->setMaximumSize(QSize(16777215, 16777215));
        BatteryTextLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(BatteryTextLabel);

        batteryLabel = new QLabel(horizontalLayoutWidget);
        batteryLabel->setObjectName(QString::fromUtf8("batteryLabel"));
        sizePolicy3.setHeightForWidth(batteryLabel->sizePolicy().hasHeightForWidth());
        batteryLabel->setSizePolicy(sizePolicy3);
        batteryLabel->setMaximumSize(QSize(16777215, 16777215));
        batteryLabel->setFrameShape(QFrame::NoFrame);
        batteryLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(batteryLabel);


        horizontalLayout->addLayout(verticalLayout_3);

        scrollingLabel = new ScrollingLabel(MainScreen);
        scrollingLabel->setObjectName(QString::fromUtf8("scrollingLabel"));
        scrollingLabel->setGeometry(QRect(0, 59, 1271, 41));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(255);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(scrollingLabel->sizePolicy().hasHeightForWidth());
        scrollingLabel->setSizePolicy(sizePolicy4);
        scrollingLabel->setFrameShape(QFrame::Box);
        scrollingLabel->setScaledContents(false);
        scrollingLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scrollingLabel->setIndent(0);
        estopLabel = new QLabel(MainScreen);
        estopLabel->setObjectName(QString::fromUtf8("estopLabel"));
        estopLabel->setGeometry(QRect(880, 690, 140, 70));
        QFont font;
        font.setPointSize(12);
        estopLabel->setFont(font);
        estopLabel->setFrameShape(QFrame::Box);
        estopLabel->setLineWidth(2);
        estopLabel->setAlignment(Qt::AlignCenter);
        exitButton = new QPushButton(MainScreen);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(1230, 20, 41, 31));
        exitButton->setAutoFillBackground(true);
        minimizeButton = new QPushButton(MainScreen);
        minimizeButton->setObjectName(QString::fromUtf8("minimizeButton"));
        minimizeButton->setGeometry(QRect(1180, 20, 41, 31));

        retranslateUi(MainScreen);

        homeScreenButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainScreen);
    } // setupUi

    void retranslateUi(QWidget *MainScreen)
    {
        MainScreen->setWindowTitle(QCoreApplication::translate("MainScreen", "Form", nullptr));
        homeScreenButton->setText(QCoreApplication::translate("MainScreen", "Home", nullptr));
        motorScreenButton->setText(QCoreApplication::translate("MainScreen", "Motors", nullptr));
        healthScreenButton->setText(QCoreApplication::translate("MainScreen", "Health", nullptr));
        runningScreenButton->setText(QCoreApplication::translate("MainScreen", "Running", nullptr));
        label->setText(QCoreApplication::translate("MainScreen", "Fisher Dynamics", nullptr));
        wifiTextLabel->setText(QCoreApplication::translate("MainScreen", "Wifi", nullptr));
        wifiLabel->setText(QCoreApplication::translate("MainScreen", "Wifi", nullptr));
        dateTimeLabel->setText(QCoreApplication::translate("MainScreen", "Date Time", nullptr));
        BatteryTextLabel->setText(QCoreApplication::translate("MainScreen", "Battery", nullptr));
        batteryLabel->setText(QCoreApplication::translate("MainScreen", "Battery Logo Here", nullptr));
        scrollingLabel->setText(QCoreApplication::translate("MainScreen", "Robot Status", nullptr));
        estopLabel->setText(QCoreApplication::translate("MainScreen", "Estop", nullptr));
        exitButton->setText(QCoreApplication::translate("MainScreen", "X", nullptr));
        minimizeButton->setText(QCoreApplication::translate("MainScreen", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainScreen: public Ui_MainScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_SCREEN_H
