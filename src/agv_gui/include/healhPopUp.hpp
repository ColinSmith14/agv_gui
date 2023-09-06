#ifndef HEALHPOPUP_HPP
#define HEALHPOPUP_HPP

#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>

class HealthPopUp : public QDialog{
  Q_OBJECT

public:
  HealthPopUp(const QString &lMotor,
              const QString &rMotor,
              const QString &pMotor,
              const QString &lid,
              const QString &cam,
              ,QWidget *parent = nullptr);

private:
  QVBoxLayout* popUpLayout;
  QLabel* l_motor;
  QLabel* r_motor;
  QLabel* pin_motor;
  QLabel* lidar;
  QLabel* camera;
};

#endif // HEALHPOPUP_HPP
