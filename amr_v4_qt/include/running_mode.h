#ifndef RUNNING_MODE_H
#define RUNNING_MODE_H

#include <QWidget>
#include <QLabel>
#include <ui_running_mode_screen.h>

class RunningModeScreen : public QWidget {
    Q_OBJECT


public:
    explicit RunningModeScreen(QWidget *parent = nullptr);
    Ui::RunningModeScreen ui;
    
private:
    
};

#endif // RUNNING_MODE_H