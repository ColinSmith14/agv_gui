/********************************************************************************
** Form generated from reading UI file 'running_mode_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNNING_MODE_SCREEN_H
#define UI_RUNNING_MODE_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RunningModeScreen
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *manualabel;
    QLabel *manualActive;
    QHBoxLayout *horizontalLayout_2;
    QLabel *autoLabel;
    QLabel *autoActive;

    void setupUi(QWidget *RunningModeScreen)
    {
        if (RunningModeScreen->objectName().isEmpty())
            RunningModeScreen->setObjectName(QString::fromUtf8("RunningModeScreen"));
        RunningModeScreen->resize(1000, 600);
        verticalLayoutWidget = new QWidget(RunningModeScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 981, 581));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        manualabel = new QLabel(verticalLayoutWidget);
        manualabel->setObjectName(QString::fromUtf8("manualabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(manualabel->sizePolicy().hasHeightForWidth());
        manualabel->setSizePolicy(sizePolicy);
        manualabel->setMinimumSize(QSize(255, 90));
        manualabel->setMaximumSize(QSize(255, 90));
        manualabel->setBaseSize(QSize(255, 90));
        manualabel->setLayoutDirection(Qt::LeftToRight);
        manualabel->setFrameShape(QFrame::Box);
        manualabel->setLineWidth(3);
        manualabel->setAlignment(Qt::AlignCenter);
        manualabel->setWordWrap(false);
        manualabel->setMargin(0);
        manualabel->setIndent(0);

        horizontalLayout->addWidget(manualabel);

        manualActive = new QLabel(verticalLayoutWidget);
        manualActive->setObjectName(QString::fromUtf8("manualActive"));
        sizePolicy.setHeightForWidth(manualActive->sizePolicy().hasHeightForWidth());
        manualActive->setSizePolicy(sizePolicy);
        manualActive->setMinimumSize(QSize(255, 90));
        manualActive->setMaximumSize(QSize(255, 90));
        manualActive->setBaseSize(QSize(255, 90));
        manualActive->setLayoutDirection(Qt::LeftToRight);
        manualActive->setFrameShape(QFrame::Box);
        manualActive->setLineWidth(3);
        manualActive->setAlignment(Qt::AlignCenter);
        manualActive->setWordWrap(false);
        manualActive->setMargin(0);
        manualActive->setIndent(0);

        horizontalLayout->addWidget(manualActive);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        autoLabel = new QLabel(verticalLayoutWidget);
        autoLabel->setObjectName(QString::fromUtf8("autoLabel"));
        sizePolicy.setHeightForWidth(autoLabel->sizePolicy().hasHeightForWidth());
        autoLabel->setSizePolicy(sizePolicy);
        autoLabel->setMinimumSize(QSize(255, 90));
        autoLabel->setMaximumSize(QSize(255, 90));
        autoLabel->setBaseSize(QSize(255, 90));
        autoLabel->setLayoutDirection(Qt::LeftToRight);
        autoLabel->setFrameShape(QFrame::Box);
        autoLabel->setLineWidth(3);
        autoLabel->setScaledContents(false);
        autoLabel->setAlignment(Qt::AlignCenter);
        autoLabel->setWordWrap(false);
        autoLabel->setMargin(0);
        autoLabel->setIndent(0);

        horizontalLayout_2->addWidget(autoLabel);

        autoActive = new QLabel(verticalLayoutWidget);
        autoActive->setObjectName(QString::fromUtf8("autoActive"));
        sizePolicy.setHeightForWidth(autoActive->sizePolicy().hasHeightForWidth());
        autoActive->setSizePolicy(sizePolicy);
        autoActive->setMinimumSize(QSize(255, 90));
        autoActive->setMaximumSize(QSize(255, 90));
        autoActive->setBaseSize(QSize(255, 90));
        autoActive->setLayoutDirection(Qt::LeftToRight);
        autoActive->setFrameShape(QFrame::Box);
        autoActive->setLineWidth(3);
        autoActive->setAlignment(Qt::AlignCenter);
        autoActive->setWordWrap(false);
        autoActive->setMargin(0);
        autoActive->setIndent(0);

        horizontalLayout_2->addWidget(autoActive);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(RunningModeScreen);

        QMetaObject::connectSlotsByName(RunningModeScreen);
    } // setupUi

    void retranslateUi(QWidget *RunningModeScreen)
    {
        RunningModeScreen->setWindowTitle(QCoreApplication::translate("RunningModeScreen", "Form", nullptr));
        manualabel->setText(QCoreApplication::translate("RunningModeScreen", "Manual Mode", nullptr));
        manualActive->setText(QCoreApplication::translate("RunningModeScreen", "Disabled", nullptr));
        autoLabel->setText(QCoreApplication::translate("RunningModeScreen", "Auto Mode", nullptr));
        autoActive->setText(QCoreApplication::translate("RunningModeScreen", "Enabled", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RunningModeScreen: public Ui_RunningModeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNNING_MODE_SCREEN_H
