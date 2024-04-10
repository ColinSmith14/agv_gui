/********************************************************************************
** Form generated from reading UI file 'hello_world_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLO_WORLD_SCREEN_H
#define UI_HELLO_WORLD_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloWorldScreen
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *helloLabel;

    void setupUi(QWidget *HelloWorldScreen)
    {
        if (HelloWorldScreen->objectName().isEmpty())
            HelloWorldScreen->setObjectName(QString::fromUtf8("HelloWorldScreen"));
        HelloWorldScreen->resize(540, 210);
        verticalLayoutWidget = new QWidget(HelloWorldScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 30, 361, 141));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        helloLabel = new QLabel(verticalLayoutWidget);
        helloLabel->setObjectName(QString::fromUtf8("helloLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helloLabel->sizePolicy().hasHeightForWidth());
        helloLabel->setSizePolicy(sizePolicy);
        helloLabel->setMinimumSize(QSize(60, 0));
        helloLabel->setLayoutDirection(Qt::LeftToRight);
        helloLabel->setFrameShape(QFrame::Box);
        helloLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(helloLabel);


        retranslateUi(HelloWorldScreen);

        QMetaObject::connectSlotsByName(HelloWorldScreen);
    } // setupUi

    void retranslateUi(QWidget *HelloWorldScreen)
    {
        HelloWorldScreen->setWindowTitle(QApplication::translate("HelloWorldScreen", "Form", nullptr));
        helloLabel->setText(QApplication::translate("HelloWorldScreen", "Hello World!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloWorldScreen: public Ui_HelloWorldScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLO_WORLD_SCREEN_H
