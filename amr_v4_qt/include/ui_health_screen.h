/********************************************************************************
** Form generated from reading UI file 'health_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEALTH_SCREEN_H
#define UI_HEALTH_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HealthScreen
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *headerLayout;
    QLabel *systemLabel;
    QLabel *statusLabel;
    QHBoxLayout *cameraLayout;
    QLabel *cameraLabel;
    QLabel *cameraStatus;
    QHBoxLayout *lidar1Layout;
    QLabel *lidar1Label;
    QLabel *lidar1Status;
    QHBoxLayout *lidar2Layout;
    QLabel *lidar2Label;
    QLabel *lidar2Status;
    QPushButton *scanButton;
    QLabel *loadingLabel;

    void setupUi(QWidget *HealthScreen)
    {
        if (HealthScreen->objectName().isEmpty())
            HealthScreen->setObjectName(QString::fromUtf8("HealthScreen"));
        HealthScreen->setEnabled(true);
        HealthScreen->resize(1000, 500);
        verticalLayoutWidget = new QWidget(HealthScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 50, 981, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        headerLayout = new QHBoxLayout();
        headerLayout->setObjectName(QString::fromUtf8("headerLayout"));
        systemLabel = new QLabel(verticalLayoutWidget);
        systemLabel->setObjectName(QString::fromUtf8("systemLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(systemLabel->sizePolicy().hasHeightForWidth());
        systemLabel->setSizePolicy(sizePolicy);
        systemLabel->setMinimumSize(QSize(180, 20));
        systemLabel->setMaximumSize(QSize(120, 40));
        systemLabel->setAlignment(Qt::AlignCenter);
        systemLabel->setMargin(0);
        systemLabel->setIndent(0);

        headerLayout->addWidget(systemLabel);

        statusLabel = new QLabel(verticalLayoutWidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        sizePolicy.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy);
        statusLabel->setMinimumSize(QSize(180, 20));
        statusLabel->setMaximumSize(QSize(120, 40));
        statusLabel->setAlignment(Qt::AlignCenter);
        statusLabel->setMargin(0);
        statusLabel->setIndent(0);

        headerLayout->addWidget(statusLabel);


        verticalLayout->addLayout(headerLayout);

        cameraLayout = new QHBoxLayout();
        cameraLayout->setObjectName(QString::fromUtf8("cameraLayout"));
        cameraLabel = new QLabel(verticalLayoutWidget);
        cameraLabel->setObjectName(QString::fromUtf8("cameraLabel"));
        sizePolicy.setHeightForWidth(cameraLabel->sizePolicy().hasHeightForWidth());
        cameraLabel->setSizePolicy(sizePolicy);
        cameraLabel->setMinimumSize(QSize(180, 20));
        cameraLabel->setMaximumSize(QSize(120, 40));
        cameraLabel->setLayoutDirection(Qt::LeftToRight);
        cameraLabel->setFrameShape(QFrame::Box);
        cameraLabel->setFrameShadow(QFrame::Plain);
        cameraLabel->setLineWidth(3);
        cameraLabel->setAlignment(Qt::AlignCenter);
        cameraLabel->setMargin(0);
        cameraLabel->setIndent(0);

        cameraLayout->addWidget(cameraLabel);

        cameraStatus = new QLabel(verticalLayoutWidget);
        cameraStatus->setObjectName(QString::fromUtf8("cameraStatus"));
        sizePolicy.setHeightForWidth(cameraStatus->sizePolicy().hasHeightForWidth());
        cameraStatus->setSizePolicy(sizePolicy);
        cameraStatus->setMinimumSize(QSize(180, 20));
        cameraStatus->setMaximumSize(QSize(120, 40));
        cameraStatus->setFrameShape(QFrame::Box);
        cameraStatus->setFrameShadow(QFrame::Plain);
        cameraStatus->setLineWidth(3);
        cameraStatus->setAlignment(Qt::AlignCenter);
        cameraStatus->setMargin(0);
        cameraStatus->setIndent(0);

        cameraLayout->addWidget(cameraStatus);


        verticalLayout->addLayout(cameraLayout);

        lidar1Layout = new QHBoxLayout();
        lidar1Layout->setObjectName(QString::fromUtf8("lidar1Layout"));
        lidar1Label = new QLabel(verticalLayoutWidget);
        lidar1Label->setObjectName(QString::fromUtf8("lidar1Label"));
        sizePolicy.setHeightForWidth(lidar1Label->sizePolicy().hasHeightForWidth());
        lidar1Label->setSizePolicy(sizePolicy);
        lidar1Label->setMinimumSize(QSize(180, 20));
        lidar1Label->setMaximumSize(QSize(120, 40));
        lidar1Label->setLayoutDirection(Qt::LeftToRight);
        lidar1Label->setFrameShape(QFrame::Box);
        lidar1Label->setFrameShadow(QFrame::Plain);
        lidar1Label->setLineWidth(3);
        lidar1Label->setAlignment(Qt::AlignCenter);
        lidar1Label->setMargin(0);
        lidar1Label->setIndent(0);

        lidar1Layout->addWidget(lidar1Label);

        lidar1Status = new QLabel(verticalLayoutWidget);
        lidar1Status->setObjectName(QString::fromUtf8("lidar1Status"));
        sizePolicy.setHeightForWidth(lidar1Status->sizePolicy().hasHeightForWidth());
        lidar1Status->setSizePolicy(sizePolicy);
        lidar1Status->setMinimumSize(QSize(180, 20));
        lidar1Status->setMaximumSize(QSize(120, 40));
        lidar1Status->setFrameShape(QFrame::Box);
        lidar1Status->setFrameShadow(QFrame::Plain);
        lidar1Status->setLineWidth(3);
        lidar1Status->setAlignment(Qt::AlignCenter);
        lidar1Status->setMargin(0);
        lidar1Status->setIndent(0);

        lidar1Layout->addWidget(lidar1Status);


        verticalLayout->addLayout(lidar1Layout);

        lidar2Layout = new QHBoxLayout();
        lidar2Layout->setObjectName(QString::fromUtf8("lidar2Layout"));
        lidar2Label = new QLabel(verticalLayoutWidget);
        lidar2Label->setObjectName(QString::fromUtf8("lidar2Label"));
        sizePolicy.setHeightForWidth(lidar2Label->sizePolicy().hasHeightForWidth());
        lidar2Label->setSizePolicy(sizePolicy);
        lidar2Label->setMinimumSize(QSize(180, 20));
        lidar2Label->setMaximumSize(QSize(120, 40));
        lidar2Label->setFrameShape(QFrame::Box);
        lidar2Label->setFrameShadow(QFrame::Plain);
        lidar2Label->setLineWidth(3);
        lidar2Label->setAlignment(Qt::AlignCenter);
        lidar2Label->setMargin(0);
        lidar2Label->setIndent(0);

        lidar2Layout->addWidget(lidar2Label);

        lidar2Status = new QLabel(verticalLayoutWidget);
        lidar2Status->setObjectName(QString::fromUtf8("lidar2Status"));
        sizePolicy.setHeightForWidth(lidar2Status->sizePolicy().hasHeightForWidth());
        lidar2Status->setSizePolicy(sizePolicy);
        lidar2Status->setMinimumSize(QSize(180, 20));
        lidar2Status->setMaximumSize(QSize(120, 40));
        lidar2Status->setFrameShape(QFrame::Box);
        lidar2Status->setFrameShadow(QFrame::Plain);
        lidar2Status->setLineWidth(3);
        lidar2Status->setAlignment(Qt::AlignCenter);
        lidar2Status->setMargin(0);
        lidar2Status->setIndent(0);

        lidar2Layout->addWidget(lidar2Status);


        verticalLayout->addLayout(lidar2Layout);

        scanButton = new QPushButton(HealthScreen);
        scanButton->setObjectName(QString::fromUtf8("scanButton"));
        scanButton->setGeometry(QRect(428, 384, 141, 41));
        loadingLabel = new QLabel(HealthScreen);
        loadingLabel->setObjectName(QString::fromUtf8("loadingLabel"));
        loadingLabel->setEnabled(true);
        loadingLabel->setGeometry(QRect(590, 380, 51, 51));
        loadingLabel->setScaledContents(true);

        retranslateUi(HealthScreen);

        QMetaObject::connectSlotsByName(HealthScreen);
    } // setupUi

    void retranslateUi(QWidget *HealthScreen)
    {
        HealthScreen->setWindowTitle(QCoreApplication::translate("HealthScreen", "Form", nullptr));
        systemLabel->setText(QCoreApplication::translate("HealthScreen", "System", nullptr));
        statusLabel->setText(QCoreApplication::translate("HealthScreen", "Status", nullptr));
        cameraLabel->setText(QCoreApplication::translate("HealthScreen", "Camera ", nullptr));
        cameraStatus->setText(QCoreApplication::translate("HealthScreen", "Active", nullptr));
        lidar1Label->setText(QCoreApplication::translate("HealthScreen", "Hesai Lidar", nullptr));
        lidar1Status->setText(QCoreApplication::translate("HealthScreen", "Active", nullptr));
        lidar2Label->setText(QCoreApplication::translate("HealthScreen", "Sick Lidar", nullptr));
        lidar2Status->setText(QCoreApplication::translate("HealthScreen", "Active", nullptr));
        scanButton->setText(QCoreApplication::translate("HealthScreen", "Run Scan", nullptr));
        loadingLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HealthScreen: public Ui_HealthScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEALTH_SCREEN_H
