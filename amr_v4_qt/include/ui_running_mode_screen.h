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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RunningModeScreen
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontaLayout;
    QLabel *pinLabel;
    QLabel *pinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *modeLabel;
    QLabel *modeBox;
    QPushButton *modeButton;
    QPushButton *pinButton;

    void setupUi(QWidget *RunningModeScreen)
    {
        if (RunningModeScreen->objectName().isEmpty())
            RunningModeScreen->setObjectName(QString::fromUtf8("RunningModeScreen"));
        RunningModeScreen->resize(1126, 657);
        verticalLayoutWidget = new QWidget(RunningModeScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 1044, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontaLayout = new QHBoxLayout();
        horizontaLayout->setObjectName(QString::fromUtf8("horizontaLayout"));
        pinLabel = new QLabel(verticalLayoutWidget);
        pinLabel->setObjectName(QString::fromUtf8("pinLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pinLabel->sizePolicy().hasHeightForWidth());
        pinLabel->setSizePolicy(sizePolicy);
        pinLabel->setMinimumSize(QSize(255, 90));
        pinLabel->setMaximumSize(QSize(255, 90));
        pinLabel->setBaseSize(QSize(255, 90));
        pinLabel->setLayoutDirection(Qt::LeftToRight);
        pinLabel->setFrameShape(QFrame::Box);
        pinLabel->setLineWidth(3);
        pinLabel->setAlignment(Qt::AlignCenter);
        pinLabel->setWordWrap(false);
        pinLabel->setMargin(0);
        pinLabel->setIndent(0);

        horizontaLayout->addWidget(pinLabel);

        pinBox = new QLabel(verticalLayoutWidget);
        pinBox->setObjectName(QString::fromUtf8("pinBox"));
        sizePolicy.setHeightForWidth(pinBox->sizePolicy().hasHeightForWidth());
        pinBox->setSizePolicy(sizePolicy);
        pinBox->setMinimumSize(QSize(255, 90));
        pinBox->setMaximumSize(QSize(255, 90));
        pinBox->setBaseSize(QSize(255, 90));
        pinBox->setLayoutDirection(Qt::LeftToRight);
        pinBox->setFrameShape(QFrame::Box);
        pinBox->setLineWidth(3);
        pinBox->setAlignment(Qt::AlignCenter);
        pinBox->setWordWrap(false);
        pinBox->setMargin(0);
        pinBox->setIndent(0);

        horizontaLayout->addWidget(pinBox);


        verticalLayout->addLayout(horizontaLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        modeLabel = new QLabel(verticalLayoutWidget);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));
        sizePolicy.setHeightForWidth(modeLabel->sizePolicy().hasHeightForWidth());
        modeLabel->setSizePolicy(sizePolicy);
        modeLabel->setMinimumSize(QSize(255, 90));
        modeLabel->setMaximumSize(QSize(255, 90));
        modeLabel->setBaseSize(QSize(255, 90));
        modeLabel->setLayoutDirection(Qt::LeftToRight);
        modeLabel->setFrameShape(QFrame::Box);
        modeLabel->setLineWidth(3);
        modeLabel->setAlignment(Qt::AlignCenter);
        modeLabel->setWordWrap(false);
        modeLabel->setMargin(0);
        modeLabel->setIndent(0);

        horizontalLayout->addWidget(modeLabel);

        modeBox = new QLabel(verticalLayoutWidget);
        modeBox->setObjectName(QString::fromUtf8("modeBox"));
        sizePolicy.setHeightForWidth(modeBox->sizePolicy().hasHeightForWidth());
        modeBox->setSizePolicy(sizePolicy);
        modeBox->setMinimumSize(QSize(255, 90));
        modeBox->setMaximumSize(QSize(255, 90));
        modeBox->setBaseSize(QSize(255, 90));
        modeBox->setLayoutDirection(Qt::LeftToRight);
        modeBox->setFrameShape(QFrame::Box);
        modeBox->setLineWidth(3);
        modeBox->setAlignment(Qt::AlignCenter);
        modeBox->setWordWrap(false);
        modeBox->setMargin(0);
        modeBox->setIndent(0);

        horizontalLayout->addWidget(modeBox);


        verticalLayout->addLayout(horizontalLayout);

        modeButton = new QPushButton(RunningModeScreen);
        modeButton->setObjectName(QString::fromUtf8("modeButton"));
        modeButton->setGeometry(QRect(458, 314, 151, 51));
        pinButton = new QPushButton(RunningModeScreen);
        pinButton->setObjectName(QString::fromUtf8("pinButton"));
        pinButton->setGeometry(QRect(460, 380, 151, 51));

        retranslateUi(RunningModeScreen);

        QMetaObject::connectSlotsByName(RunningModeScreen);
    } // setupUi

    void retranslateUi(QWidget *RunningModeScreen)
    {
        RunningModeScreen->setWindowTitle(QCoreApplication::translate("RunningModeScreen", "Form", nullptr));
        pinLabel->setText(QCoreApplication::translate("RunningModeScreen", "Pin", nullptr));
        pinBox->setText(QCoreApplication::translate("RunningModeScreen", "Active", nullptr));
        modeLabel->setText(QCoreApplication::translate("RunningModeScreen", "Mode", nullptr));
        modeBox->setText(QCoreApplication::translate("RunningModeScreen", "Auto", nullptr));
        modeButton->setText(QCoreApplication::translate("RunningModeScreen", "Switch Mode", nullptr));
        pinButton->setText(QCoreApplication::translate("RunningModeScreen", "Toggle Pin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RunningModeScreen: public Ui_RunningModeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNNING_MODE_SCREEN_H
