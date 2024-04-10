/********************************************************************************
** Form generated from reading UI file 'Test.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Title;
    QTextEdit *editBox;
    QPushButton *submitButton;

    void setupUi(QWidget *Test)
    {
        if (Test->objectName().isEmpty())
            Test->setObjectName(QString::fromUtf8("Test"));
        Test->resize(540, 210);
        verticalLayoutWidget = new QWidget(Test);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 541, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Title = new QLabel(verticalLayoutWidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Title);

        editBox = new QTextEdit(verticalLayoutWidget);
        editBox->setObjectName(QString::fromUtf8("editBox"));

        verticalLayout->addWidget(editBox);

        submitButton = new QPushButton(verticalLayoutWidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));

        verticalLayout->addWidget(submitButton);


        retranslateUi(Test);

        QMetaObject::connectSlotsByName(Test);
    } // setupUi

    void retranslateUi(QWidget *Test)
    {
        Test->setWindowTitle(QApplication::translate("Test", "Form", nullptr));
        Title->setText(QApplication::translate("Test", "Notes", nullptr));
        submitButton->setText(QApplication::translate("Test", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test: public Ui_Test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
