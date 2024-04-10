/********************************************************************************
** Form generated from reading UI file 'health_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEALTH_SCREEN_H
#define UI_HEALTH_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
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
    QHBoxLayout *lidarLayout;
    QLabel *lidarLabel;
    QLabel *lidarStatus;
    QHBoxLayout *otherLayout;
    QLabel *otherLabel;
    QLabel *otherStatus;

    void setupUi(QWidget *HealthScreen)
    {
        if (HealthScreen->objectName().isEmpty())
            HealthScreen->setObjectName(QString::fromUtf8("HealthScreen"));
        HealthScreen->resize(540, 210);
        verticalLayoutWidget = new QWidget(HealthScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 521, 191));
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

        lidarLayout = new QHBoxLayout();
        lidarLayout->setObjectName(QString::fromUtf8("lidarLayout"));
        lidarLabel = new QLabel(verticalLayoutWidget);
        lidarLabel->setObjectName(QString::fromUtf8("lidarLabel"));
        sizePolicy.setHeightForWidth(lidarLabel->sizePolicy().hasHeightForWidth());
        lidarLabel->setSizePolicy(sizePolicy);
        lidarLabel->setMinimumSize(QSize(180, 20));
        lidarLabel->setMaximumSize(QSize(120, 40));
        lidarLabel->setLayoutDirection(Qt::LeftToRight);
        lidarLabel->setFrameShape(QFrame::Box);
        lidarLabel->setFrameShadow(QFrame::Plain);
        lidarLabel->setLineWidth(3);
        lidarLabel->setAlignment(Qt::AlignCenter);
        lidarLabel->setMargin(0);
        lidarLabel->setIndent(0);

        lidarLayout->addWidget(lidarLabel);

        lidarStatus = new QLabel(verticalLayoutWidget);
        lidarStatus->setObjectName(QString::fromUtf8("lidarStatus"));
        sizePolicy.setHeightForWidth(lidarStatus->sizePolicy().hasHeightForWidth());
        lidarStatus->setSizePolicy(sizePolicy);
        lidarStatus->setMinimumSize(QSize(180, 20));
        lidarStatus->setMaximumSize(QSize(120, 40));
        lidarStatus->setFrameShape(QFrame::Box);
        lidarStatus->setFrameShadow(QFrame::Plain);
        lidarStatus->setLineWidth(3);
        lidarStatus->setAlignment(Qt::AlignCenter);
        lidarStatus->setMargin(0);
        lidarStatus->setIndent(0);

        lidarLayout->addWidget(lidarStatus);


        verticalLayout->addLayout(lidarLayout);

        otherLayout = new QHBoxLayout();
        otherLayout->setObjectName(QString::fromUtf8("otherLayout"));
        otherLabel = new QLabel(verticalLayoutWidget);
        otherLabel->setObjectName(QString::fromUtf8("otherLabel"));
        sizePolicy.setHeightForWidth(otherLabel->sizePolicy().hasHeightForWidth());
        otherLabel->setSizePolicy(sizePolicy);
        otherLabel->setMinimumSize(QSize(180, 20));
        otherLabel->setMaximumSize(QSize(120, 40));
        otherLabel->setFrameShape(QFrame::Box);
        otherLabel->setFrameShadow(QFrame::Plain);
        otherLabel->setLineWidth(3);
        otherLabel->setAlignment(Qt::AlignCenter);
        otherLabel->setMargin(0);
        otherLabel->setIndent(0);

        otherLayout->addWidget(otherLabel);

        otherStatus = new QLabel(verticalLayoutWidget);
        otherStatus->setObjectName(QString::fromUtf8("otherStatus"));
        sizePolicy.setHeightForWidth(otherStatus->sizePolicy().hasHeightForWidth());
        otherStatus->setSizePolicy(sizePolicy);
        otherStatus->setMinimumSize(QSize(180, 20));
        otherStatus->setMaximumSize(QSize(120, 40));
        otherStatus->setFrameShape(QFrame::Box);
        otherStatus->setFrameShadow(QFrame::Plain);
        otherStatus->setLineWidth(3);
        otherStatus->setAlignment(Qt::AlignCenter);
        otherStatus->setMargin(0);
        otherStatus->setIndent(0);

        otherLayout->addWidget(otherStatus);


        verticalLayout->addLayout(otherLayout);


        retranslateUi(HealthScreen);

        QMetaObject::connectSlotsByName(HealthScreen);
    } // setupUi

    void retranslateUi(QWidget *HealthScreen)
    {
        HealthScreen->setWindowTitle(QApplication::translate("HealthScreen", "Form", nullptr));
        systemLabel->setText(QApplication::translate("HealthScreen", "System", nullptr));
        statusLabel->setText(QApplication::translate("HealthScreen", "Status", nullptr));
        cameraLabel->setText(QApplication::translate("HealthScreen", "Camera ", nullptr));
        cameraStatus->setText(QApplication::translate("HealthScreen", "Active", nullptr));
        lidarLabel->setText(QApplication::translate("HealthScreen", "Lidar ", nullptr));
        lidarStatus->setText(QApplication::translate("HealthScreen", "Active", nullptr));
        otherLabel->setText(QApplication::translate("HealthScreen", "Other ", nullptr));
        otherStatus->setText(QApplication::translate("HealthScreen", "Active", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HealthScreen: public Ui_HealthScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEALTH_SCREEN_H
