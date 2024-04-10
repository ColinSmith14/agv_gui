/********************************************************************************
** Form generated from reading UI file 'motor_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTOR_SCREEN_H
#define UI_MOTOR_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MotorScreen
{
public:
    QFrame *leftMotorFrame;
    QLabel *leftMotorLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *leftMotorCurrentLabel;
    QLabel *leftMotorCurrent;
    QHBoxLayout *horizontalLayout_3;
    QLabel *leftMotorErrorLabel;
    QLabel *leftMotorError;
    QFrame *rightMotorFrame;
    QLabel *rightMotorLabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *rightMotorCurrentLabel;
    QLabel *rightMotorCurrent;
    QHBoxLayout *horizontalLayout_5;
    QLabel *rightMotorErrorLabel;
    QLabel *rightMotorError;
    QFrame *pinFrame;
    QLabel *pinLabel;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *pinMotorCurrentLabel;
    QLabel *pinMotorCurrent;
    QHBoxLayout *horizontalLayout_9;
    QLabel *pinMotorErrorLabel;
    QLabel *pinMotorError;

    void setupUi(QWidget *MotorScreen)
    {
        if (MotorScreen->objectName().isEmpty())
            MotorScreen->setObjectName(QString::fromUtf8("MotorScreen"));
        MotorScreen->resize(540, 210);
        leftMotorFrame = new QFrame(MotorScreen);
        leftMotorFrame->setObjectName(QString::fromUtf8("leftMotorFrame"));
        leftMotorFrame->setGeometry(QRect(60, 10, 200, 90));
        leftMotorFrame->setFrameShape(QFrame::StyledPanel);
        leftMotorFrame->setFrameShadow(QFrame::Raised);
        leftMotorFrame->setLineWidth(4);
        leftMotorLabel = new QLabel(leftMotorFrame);
        leftMotorLabel->setObjectName(QString::fromUtf8("leftMotorLabel"));
        leftMotorLabel->setGeometry(QRect(9, 9, 181, 16));
        leftMotorLabel->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(leftMotorFrame);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 31, 181, 44));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        leftMotorCurrentLabel = new QLabel(verticalLayoutWidget);
        leftMotorCurrentLabel->setObjectName(QString::fromUtf8("leftMotorCurrentLabel"));
        QFont font;
        font.setPointSize(10);
        leftMotorCurrentLabel->setFont(font);
        leftMotorCurrentLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(leftMotorCurrentLabel);

        leftMotorCurrent = new QLabel(verticalLayoutWidget);
        leftMotorCurrent->setObjectName(QString::fromUtf8("leftMotorCurrent"));
        leftMotorCurrent->setFont(font);
        leftMotorCurrent->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(leftMotorCurrent);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        leftMotorErrorLabel = new QLabel(verticalLayoutWidget);
        leftMotorErrorLabel->setObjectName(QString::fromUtf8("leftMotorErrorLabel"));
        leftMotorErrorLabel->setFont(font);
        leftMotorErrorLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(leftMotorErrorLabel);

        leftMotorError = new QLabel(verticalLayoutWidget);
        leftMotorError->setObjectName(QString::fromUtf8("leftMotorError"));
        leftMotorError->setFont(font);
        leftMotorError->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(leftMotorError);


        verticalLayout->addLayout(horizontalLayout_3);

        rightMotorFrame = new QFrame(MotorScreen);
        rightMotorFrame->setObjectName(QString::fromUtf8("rightMotorFrame"));
        rightMotorFrame->setGeometry(QRect(280, 10, 200, 90));
        rightMotorFrame->setFrameShape(QFrame::StyledPanel);
        rightMotorFrame->setFrameShadow(QFrame::Raised);
        rightMotorLabel = new QLabel(rightMotorFrame);
        rightMotorLabel->setObjectName(QString::fromUtf8("rightMotorLabel"));
        rightMotorLabel->setGeometry(QRect(9, 9, 181, 16));
        rightMotorLabel->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_2 = new QWidget(rightMotorFrame);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 30, 181, 44));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        rightMotorCurrentLabel = new QLabel(verticalLayoutWidget_2);
        rightMotorCurrentLabel->setObjectName(QString::fromUtf8("rightMotorCurrentLabel"));
        rightMotorCurrentLabel->setFont(font);
        rightMotorCurrentLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(rightMotorCurrentLabel);

        rightMotorCurrent = new QLabel(verticalLayoutWidget_2);
        rightMotorCurrent->setObjectName(QString::fromUtf8("rightMotorCurrent"));
        rightMotorCurrent->setFont(font);
        rightMotorCurrent->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(rightMotorCurrent);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        rightMotorErrorLabel = new QLabel(verticalLayoutWidget_2);
        rightMotorErrorLabel->setObjectName(QString::fromUtf8("rightMotorErrorLabel"));
        rightMotorErrorLabel->setFont(font);
        rightMotorErrorLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(rightMotorErrorLabel);

        rightMotorError = new QLabel(verticalLayoutWidget_2);
        rightMotorError->setObjectName(QString::fromUtf8("rightMotorError"));
        rightMotorError->setFont(font);
        rightMotorError->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(rightMotorError);


        verticalLayout_2->addLayout(horizontalLayout_5);

        pinFrame = new QFrame(MotorScreen);
        pinFrame->setObjectName(QString::fromUtf8("pinFrame"));
        pinFrame->setGeometry(QRect(170, 110, 200, 90));
        pinFrame->setFrameShape(QFrame::StyledPanel);
        pinFrame->setFrameShadow(QFrame::Raised);
        pinLabel = new QLabel(pinFrame);
        pinLabel->setObjectName(QString::fromUtf8("pinLabel"));
        pinLabel->setGeometry(QRect(9, 9, 181, 16));
        pinLabel->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_4 = new QWidget(pinFrame);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 30, 181, 44));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pinMotorCurrentLabel = new QLabel(verticalLayoutWidget_4);
        pinMotorCurrentLabel->setObjectName(QString::fromUtf8("pinMotorCurrentLabel"));
        pinMotorCurrentLabel->setFont(font);
        pinMotorCurrentLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(pinMotorCurrentLabel);

        pinMotorCurrent = new QLabel(verticalLayoutWidget_4);
        pinMotorCurrent->setObjectName(QString::fromUtf8("pinMotorCurrent"));
        pinMotorCurrent->setFont(font);
        pinMotorCurrent->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(pinMotorCurrent);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pinMotorErrorLabel = new QLabel(verticalLayoutWidget_4);
        pinMotorErrorLabel->setObjectName(QString::fromUtf8("pinMotorErrorLabel"));
        pinMotorErrorLabel->setFont(font);
        pinMotorErrorLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(pinMotorErrorLabel);

        pinMotorError = new QLabel(verticalLayoutWidget_4);
        pinMotorError->setObjectName(QString::fromUtf8("pinMotorError"));
        pinMotorError->setFont(font);
        pinMotorError->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(pinMotorError);


        verticalLayout_4->addLayout(horizontalLayout_9);


        retranslateUi(MotorScreen);

        QMetaObject::connectSlotsByName(MotorScreen);
    } // setupUi

    void retranslateUi(QWidget *MotorScreen)
    {
        MotorScreen->setWindowTitle(QApplication::translate("MotorScreen", "Form", nullptr));
        leftMotorLabel->setText(QApplication::translate("MotorScreen", "Left Motor", nullptr));
        leftMotorCurrentLabel->setText(QApplication::translate("MotorScreen", "Current:", nullptr));
        leftMotorCurrent->setText(QApplication::translate("MotorScreen", "0", nullptr));
        leftMotorErrorLabel->setText(QApplication::translate("MotorScreen", "Error:", nullptr));
        leftMotorError->setText(QApplication::translate("MotorScreen", "None", nullptr));
        rightMotorLabel->setText(QApplication::translate("MotorScreen", "Right Motor", nullptr));
        rightMotorCurrentLabel->setText(QApplication::translate("MotorScreen", "Current:", nullptr));
        rightMotorCurrent->setText(QApplication::translate("MotorScreen", "0", nullptr));
        rightMotorErrorLabel->setText(QApplication::translate("MotorScreen", "Error:", nullptr));
        rightMotorError->setText(QApplication::translate("MotorScreen", "None", nullptr));
        pinLabel->setText(QApplication::translate("MotorScreen", "Pin", nullptr));
        pinMotorCurrentLabel->setText(QApplication::translate("MotorScreen", "Current:", nullptr));
        pinMotorCurrent->setText(QApplication::translate("MotorScreen", "0", nullptr));
        pinMotorErrorLabel->setText(QApplication::translate("MotorScreen", "Error:", nullptr));
        pinMotorError->setText(QApplication::translate("MotorScreen", "None", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MotorScreen: public Ui_MotorScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTOR_SCREEN_H
