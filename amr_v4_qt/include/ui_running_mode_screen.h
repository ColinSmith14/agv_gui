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
    QHBoxLayout *horizontalLayout;
    QLabel *modeLabel;
    QLabel *modeBox;
    QPushButton *modeButton;

    void setupUi(QWidget *RunningModeScreen)
    {
        if (RunningModeScreen->objectName().isEmpty())
            RunningModeScreen->setObjectName(QString::fromUtf8("RunningModeScreen"));
        RunningModeScreen->resize(1000, 600);
        verticalLayoutWidget = new QWidget(RunningModeScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 981, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        modeLabel = new QLabel(verticalLayoutWidget);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
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
        modeButton->setGeometry(QRect(428, 414, 151, 51));

        retranslateUi(RunningModeScreen);

        QMetaObject::connectSlotsByName(RunningModeScreen);
    } // setupUi

    void retranslateUi(QWidget *RunningModeScreen)
    {
        RunningModeScreen->setWindowTitle(QCoreApplication::translate("RunningModeScreen", "Form", nullptr));
        modeLabel->setText(QCoreApplication::translate("RunningModeScreen", "Mode", nullptr));
        modeBox->setText(QCoreApplication::translate("RunningModeScreen", "Auto", nullptr));
        modeButton->setText(QCoreApplication::translate("RunningModeScreen", "Switch Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RunningModeScreen: public Ui_RunningModeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNNING_MODE_SCREEN_H
