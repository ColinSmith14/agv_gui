/********************************************************************************
** Form generated from reading UI file 'home_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_SCREEN_H
#define UI_HOME_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeScreen
{
public:
    QPushButton *modeButton;
    QPushButton *pinButton;
    QLabel *systemLabel;
    QPushButton *motorScreenButton;
    QLabel *estopLabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *systemLayout;
    QHBoxLayout *cameraLayout;
    QLabel *cameraLabel;
    QHBoxLayout *hesaiLayout;
    QLabel *hesaiLabel;
    QHBoxLayout *sickLayout;
    QLabel *sickLabel;
    QLabel *fisherLogo;

    void setupUi(QWidget *HomeScreen)
    {
        if (HomeScreen->objectName().isEmpty())
            HomeScreen->setObjectName(QString::fromUtf8("HomeScreen"));
        HomeScreen->resize(1280, 580);
        modeButton = new QPushButton(HomeScreen);
        modeButton->setObjectName(QString::fromUtf8("modeButton"));
        modeButton->setGeometry(QRect(280, 110, 291, 100));
        modeButton->setMinimumSize(QSize(240, 100));
        QFont font;
        font.setPointSize(30);
        modeButton->setFont(font);
        pinButton = new QPushButton(HomeScreen);
        pinButton->setObjectName(QString::fromUtf8("pinButton"));
        pinButton->setGeometry(QRect(280, 230, 291, 100));
        pinButton->setMinimumSize(QSize(240, 100));
        pinButton->setBaseSize(QSize(240, 100));
        pinButton->setFont(font);
        systemLabel = new QLabel(HomeScreen);
        systemLabel->setObjectName(QString::fromUtf8("systemLabel"));
        systemLabel->setGeometry(QRect(870, 10, 340, 60));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(systemLabel->sizePolicy().hasHeightForWidth());
        systemLabel->setSizePolicy(sizePolicy);
        systemLabel->setMinimumSize(QSize(300, 60));
        systemLabel->setMaximumSize(QSize(10000, 40));
        QFont font1;
        font1.setPointSize(35);
        systemLabel->setFont(font1);
        systemLabel->setAlignment(Qt::AlignCenter);
        systemLabel->setMargin(0);
        systemLabel->setIndent(0);
        motorScreenButton = new QPushButton(HomeScreen);
        motorScreenButton->setObjectName(QString::fromUtf8("motorScreenButton"));
        motorScreenButton->setGeometry(QRect(20, 460, 281, 100));
        sizePolicy.setHeightForWidth(motorScreenButton->sizePolicy().hasHeightForWidth());
        motorScreenButton->setSizePolicy(sizePolicy);
        motorScreenButton->setMinimumSize(QSize(200, 50));
        motorScreenButton->setMaximumSize(QSize(300, 100));
        motorScreenButton->setFont(font);
        estopLabel = new QLabel(HomeScreen);
        estopLabel->setObjectName(QString::fromUtf8("estopLabel"));
        estopLabel->setGeometry(QRect(410, 470, 220, 100));
        QFont font2;
        font2.setPointSize(50);
        estopLabel->setFont(font2);
        estopLabel->setFrameShape(QFrame::Box);
        estopLabel->setLineWidth(2);
        estopLabel->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_2 = new QWidget(HomeScreen);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(870, 70, 341, 381));
        systemLayout = new QVBoxLayout(verticalLayoutWidget_2);
        systemLayout->setSpacing(0);
        systemLayout->setObjectName(QString::fromUtf8("systemLayout"));
        systemLayout->setSizeConstraint(QLayout::SetNoConstraint);
        systemLayout->setContentsMargins(0, 0, 0, 0);
        cameraLayout = new QHBoxLayout();
        cameraLayout->setObjectName(QString::fromUtf8("cameraLayout"));
        cameraLayout->setSizeConstraint(QLayout::SetNoConstraint);
        cameraLabel = new QLabel(verticalLayoutWidget_2);
        cameraLabel->setObjectName(QString::fromUtf8("cameraLabel"));
        sizePolicy.setHeightForWidth(cameraLabel->sizePolicy().hasHeightForWidth());
        cameraLabel->setSizePolicy(sizePolicy);
        cameraLabel->setMinimumSize(QSize(240, 80));
        cameraLabel->setMaximumSize(QSize(120, 40));
        cameraLabel->setFont(font);
        cameraLabel->setLayoutDirection(Qt::LeftToRight);
        cameraLabel->setFrameShape(QFrame::Box);
        cameraLabel->setFrameShadow(QFrame::Plain);
        cameraLabel->setLineWidth(3);
        cameraLabel->setAlignment(Qt::AlignCenter);
        cameraLabel->setMargin(0);
        cameraLabel->setIndent(0);

        cameraLayout->addWidget(cameraLabel);


        systemLayout->addLayout(cameraLayout);

        hesaiLayout = new QHBoxLayout();
        hesaiLayout->setObjectName(QString::fromUtf8("hesaiLayout"));
        hesaiLabel = new QLabel(verticalLayoutWidget_2);
        hesaiLabel->setObjectName(QString::fromUtf8("hesaiLabel"));
        sizePolicy.setHeightForWidth(hesaiLabel->sizePolicy().hasHeightForWidth());
        hesaiLabel->setSizePolicy(sizePolicy);
        hesaiLabel->setMinimumSize(QSize(240, 80));
        hesaiLabel->setMaximumSize(QSize(120, 40));
        hesaiLabel->setFont(font);
        hesaiLabel->setLayoutDirection(Qt::LeftToRight);
        hesaiLabel->setFrameShape(QFrame::Box);
        hesaiLabel->setFrameShadow(QFrame::Plain);
        hesaiLabel->setLineWidth(3);
        hesaiLabel->setAlignment(Qt::AlignCenter);
        hesaiLabel->setMargin(0);
        hesaiLabel->setIndent(0);

        hesaiLayout->addWidget(hesaiLabel);


        systemLayout->addLayout(hesaiLayout);

        sickLayout = new QHBoxLayout();
        sickLayout->setObjectName(QString::fromUtf8("sickLayout"));
        sickLabel = new QLabel(verticalLayoutWidget_2);
        sickLabel->setObjectName(QString::fromUtf8("sickLabel"));
        sizePolicy.setHeightForWidth(sickLabel->sizePolicy().hasHeightForWidth());
        sickLabel->setSizePolicy(sizePolicy);
        sickLabel->setMinimumSize(QSize(240, 80));
        sickLabel->setMaximumSize(QSize(120, 40));
        sickLabel->setFont(font);
        sickLabel->setFrameShape(QFrame::Box);
        sickLabel->setFrameShadow(QFrame::Plain);
        sickLabel->setLineWidth(3);
        sickLabel->setAlignment(Qt::AlignCenter);
        sickLabel->setMargin(0);
        sickLabel->setIndent(0);

        sickLayout->addWidget(sickLabel);


        systemLayout->addLayout(sickLayout);

        fisherLogo = new QLabel(HomeScreen);
        fisherLogo->setObjectName(QString::fromUtf8("fisherLogo"));
        fisherLogo->setGeometry(QRect(800, 470, 420, 100));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fisherLogo->sizePolicy().hasHeightForWidth());
        fisherLogo->setSizePolicy(sizePolicy1);
        fisherLogo->setFrameShape(QFrame::NoFrame);
        fisherLogo->setPixmap(QPixmap(QString::fromUtf8("../../../.designer/assets/fisher_logo.png")));
        fisherLogo->setScaledContents(true);
        fisherLogo->setAlignment(Qt::AlignCenter);

        retranslateUi(HomeScreen);

        QMetaObject::connectSlotsByName(HomeScreen);
    } // setupUi

    void retranslateUi(QWidget *HomeScreen)
    {
        HomeScreen->setWindowTitle(QCoreApplication::translate("HomeScreen", "Form", nullptr));
        modeButton->setText(QCoreApplication::translate("HomeScreen", "Mode: Auto/Manual", nullptr));
        pinButton->setText(QCoreApplication::translate("HomeScreen", "Pin: Up/Down", nullptr));
        systemLabel->setText(QCoreApplication::translate("HomeScreen", "System Status", nullptr));
        motorScreenButton->setText(QCoreApplication::translate("HomeScreen", "Motor Screen", nullptr));
        estopLabel->setText(QCoreApplication::translate("HomeScreen", "Estop", nullptr));
        cameraLabel->setText(QCoreApplication::translate("HomeScreen", "Camera ", nullptr));
        hesaiLabel->setText(QCoreApplication::translate("HomeScreen", "Hesai Lidar", nullptr));
        sickLabel->setText(QCoreApplication::translate("HomeScreen", "Sick Lidar", nullptr));
        fisherLogo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomeScreen: public Ui_HomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_SCREEN_H
