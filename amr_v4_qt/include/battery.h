#ifndef BATTERY_H
#define BATTERY_H

#include <QWidget>
#include <QLabel>
#include <ui_battery_screen.h>

class BatteryScreen : public QWidget {
    Q_OBJECT


public:
    explicit BatteryScreen(QWidget *parent = nullptr);
    Ui::batteryWidget ui;
    
private:
    
};

#endif // BATTERY_H