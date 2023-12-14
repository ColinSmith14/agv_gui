#include "include/healthPopUp.hpp"

HealthPopUp::HealthPopUp(const QString lMotor,
                         const QString rMotor,
                         const QString pMotor,
                         const QString lid,
                         const QString cam,
                         QWidget *parent)
  : QDialog(parent)
{
  setWindowTitle("System Health");
  popUpLayout = new QVBoxLayout;

  l_motor = new QLabel(lMotor, this);
  r_motor = new QLabel(rMotor, this);
  pin_motor = new QLabel(pMotor, this);
  lidar = new QLabel(lid, this);
  camera = new QLabel(cam, this);

  popUpLayout->addWidget(l_motor);
  popUpLayout->addWidget(r_motor);
  popUpLayout->addWidget(pin_motor);
  popUpLayout->addWidget(lidar);
  popUpLayout->addWidget(camera);

  setLayout(popUpLayout);
}
