#ifndef HEALTH_H
#define HEALTH_H

#include <QWidget>
#include <QLabel>
#include <ui_health_screen.h>

class HealthScreen : public QWidget {
    Q_OBJECT


public:
    explicit HealthScreen(QWidget *parent = nullptr);
    Ui::HealthScreen ui;
    
private:
    
};

#endif // HEALTH_H