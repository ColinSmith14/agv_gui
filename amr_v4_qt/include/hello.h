#ifndef HELLO_H
#define HELLO_H

#include <QWidget>
#include <QLabel>
#include <ui_hello_world_screen.h>

class HelloWorldScreen : public QWidget {
    Q_OBJECT


public:
    explicit HelloWorldScreen(QWidget *parent = nullptr);
    Ui::HelloWorldScreen ui;

private:

};

#endif // HEALTH_H