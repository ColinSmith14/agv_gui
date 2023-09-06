#include "include/healhPopUp.hpp"

HealthPopUp::HealthPopUp(const QString lMotor,
                         const QString rMotor,
                         const QString pMotor,
                         const QString t1,
                         const QString t2,
                         const QString t3,
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
  talon_1 = new QLabel(t1, this);
  talon_2 = new QLabel(t2, this);
  talon_3 = new QLabel(t3, this);
  lidar = new QLabel(lid, this);
  camera = new QLabel(cam, this);

  popUpLayout->addWidget(l_motor);
  popUpLayout->addWidget(r_motor);
  popUpLayout->addWidget(pin_motor);
  popUpLayout->addWidget(talon_1);
  popUpLayout->addWidget(talon_2);
  popUpLayout->addWidget(talon_3);
  popUpLayout->addWidget(lidar);
  popUpLayout->addWidget(camera);

  setLayout(popUpLayout);





}
