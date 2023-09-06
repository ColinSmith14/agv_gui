#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QFrame>
#include <QDebug>
#include <QObject>
#include <memory>
#include <csignal>
#include "rclcpp/rclcpp.hpp"
#include "include/charge_node.hpp"
#include "include/battery_node_1.hpp"
#include "include/battery_node_2.hpp"
#include "include/battery_node_3.hpp"
#include "include/battery_node_4.hpp"

// Add the necessary ROS 2 includes for your MinimalSubscriber here
// #include "minimal_subscriber.hpp"

class MainGui : public QMainWindow
{
  Q_OBJECT

public:
  MainGui(std::shared_ptr<ChargeSub> charge_sub_,
          std::shared_ptr<BatterySub1> battery_1_sub_,
          std::shared_ptr<BatterySub2> battery_2_sub_,
          std::shared_ptr<BatterySub3> battery_3_sub_,
          std::shared_ptr<BatterySub4> battery_4_sub_,
          QWidget *parent = nullptr)
      : QMainWindow(parent),
        charge_sub_(charge_sub_),
        battery_1_sub_(battery_1_sub_),
        battery_2_sub_(battery_2_sub_),
        battery_3_sub_(battery_3_sub_),
        battery_4_sub_(battery_4_sub_)

  {
      QWidget* centralWidget = new QWidget(this);
      this->setCentralWidget(centralWidget);

      // this main layout will hold all the sub layouts
      mainLayout = new QVBoxLayout(centralWidget);

      // this will hold the top row left/right
      topRowLayout = new QHBoxLayout;
      topLeftLayout = new QVBoxLayout;
      topRightLayout = new QVBoxLayout;

      // this will hold the bottom row left/right
      bottomRowLayout = new QHBoxLayout;
      bottomLeftLayout = new QVBoxLayout;
      bottomRightLayout = new QVBoxLayout;

      // adding a border to each box
      topLeftFrame = createBorderedFrame(topLeftLayout);
      topRightFrame = createBorderedFrame(topRightLayout);
      bottomLeftFrame = createBorderedFrame(bottomLeftLayout);
      bottomRightFrame = createBorderedFrame(bottomRightLayout);


      // adding the layouts to their parents
      topRowLayout->addLayout(topLeftLayout);
      topRowLayout->addLayout(topRightLayout);
      bottomRowLayout->addLayout(bottomLeftLayout);
      bottomRowLayout->addLayout(bottomRightLayout);
      mainLayout->addLayout(topRowLayout);

      mainLayout->addLayout(bottomRowLayout);

      // setting a fixed size for the main gui and each section to keep them even
      this->setFixedSize(1024, 600);

      // adding frames to layout
      topRowLayout->addWidget(topLeftFrame);
      topRowLayout->addWidget(topRightFrame);
      bottomRowLayout->addWidget(bottomLeftFrame);
      bottomRowLayout->addWidget(bottomRightFrame);

      // barrery errors (top left)
      battery1 = new QLabel("Battery 1:");
      battery2 = new QLabel("Battery 2:");
      battery3 = new QLabel("Battery 3:");
      battery4 = new QLabel("Battery 4:");

      topLeftLayout->addWidget(battery1);
      topLeftLayout->addWidget(battery2);
      topLeftLayout->addWidget(battery3);
      topLeftLayout->addWidget(battery4);


      // wifi signal (top right)
      wifiSignal = new QLabel("Strong");

      topRightLayout->addWidget(wifiSignal);

      //system health (bottom left)
      systemHealth = new QPushButton("System Healthy");




      bottomLeftLayout->addWidget(systemHealth);

      //charge active (bottom right)
      chargeActive = new QLabel("Charge DEFAULT");

      bottomRightLayout->addWidget(chargeActive);


      // centering the text for each box
      topLeftLayout->setAlignment(Qt::AlignCenter);
      topRightLayout->setAlignment(Qt::AlignCenter);
      bottomLeftLayout->setAlignment(Qt::AlignCenter);
      bottomRightLayout->setAlignment(Qt::AlignCenter);

      // removing space between borders
      topLeftLayout->setMargin(4);
      topRightLayout->setMargin(4);
      bottomLeftLayout->setMargin(4);
      bottomRightLayout->setMargin(4);
      topRowLayout->setMargin(4);
      bottomRowLayout->setMargin(4);
      mainLayout->setMargin(4);
      topLeftLayout->setSpacing(4);
      topRightLayout->setSpacing(4);
      bottomLeftLayout->setSpacing(4);
      bottomRightLayout->setSpacing(4);
      topRowLayout->setSpacing(4);
      bottomRowLayout->setSpacing(4);
      mainLayout->setSpacing(4);

      connect(charge_sub_.get(), &ChargeSub::changedStatus, this, &MainGui::updateChargeStatus);
      connect(battery_1_sub_.get(), &BatterySub1::changedBattery, this, &MainGui::updateBattery1);
      connect(battery_2_sub_.get(), &BatterySub2::changedBattery, this, &MainGui::updateBattery2);
      connect(battery_3_sub_.get(), &BatterySub3::changedBattery, this, &MainGui::updateBattery3);
      connect(battery_4_sub_.get(), &BatterySub4::changedBattery, this, &MainGui::updateBattery4);



      this->setStyleSheet("background: #717171;");



  }


  void updateBattery1(const QString &data)
  {
    battery1->setText(QString("Battery 1: %1").arg(data));
  }
  void updateBattery2(const QString &data)
  {
    battery2->setText(QString("Battery 2: %1").arg(data));
  }
  void updateBattery3(const QString &data)
  {
    battery3->setText(QString("Battery 3: %1").arg(data));
  }
  void updateBattery4(const QString &data)
  {
    battery4->setText(QString("Battery 4: %1").arg(data));
  }
  void updateChargeStatus(const QString &data)
  {
    if(data == "ON")
    {
      chargeActive->setText(QString("Charge: %1").arg(data));
      bottomRightFrame->setStyleSheet("QFrame{"
                                      "  border-radius: 8px;"
                                      "  border: 4px solid;"
                                      "  background: #00ff13;"
                                      "}"
                                      ""
                                      "QLabel{"
                                      "  border: none;"
                                      "}");
    }

    else if (data == "ERROR")
    {
      chargeActive->setText(QString("Charge: %1").arg(data));
      bottomRightFrame->setStyleSheet("QFrame{"
                                      "  border-radius: 8px;"
                                      "  border: 4px solid;"
                                      "  background: #ff0000;"
                                      "}"
                                      ""
                                      "QLabel{"
                                      "  border: none;"
                                      "}");
    }

    else if (data == "OFF")
    {
      chargeActive->setText(QString("Charge: %1").arg(data));
      bottomRightFrame->setStyleSheet("QFrame{"
                                      "  border-radius: 8px;"
                                      "  border: 4px solid;"
                                      "  background: #ffffff;"
                                      "}"
                                      ""
                                      "QLabel{"
                                      "  border: none;"
                                      "}");
    }

  }



private:

  std::shared_ptr<ChargeSub> charge_sub_;
  std::shared_ptr<BatterySub1> battery_1_sub_;
  std::shared_ptr<BatterySub2> battery_2_sub_;
  std::shared_ptr<BatterySub3> battery_3_sub_;
  std::shared_ptr<BatterySub4> battery_4_sub_;

  QVBoxLayout* mainLayout;
  QHBoxLayout* topRowLayout;
  QVBoxLayout* topLeftLayout;
  QVBoxLayout* topRightLayout;
  QHBoxLayout* bottomRowLayout;
  QVBoxLayout* bottomLeftLayout;
  QVBoxLayout* bottomRightLayout;
  QFrame* topLeftFrame;
  QFrame* topRightFrame;
  QFrame* bottomLeftFrame;
  QFrame* bottomRightFrame;
  QLabel* battery1;
  QLabel* battery2;
  QLabel* battery3;
  QLabel* battery4;
  QLabel* wifiSignal;
  QPushButton* systemHealth;
  QLabel* chargeActive;
  QLabel* temp_right;


  QFrame* createBorderedFrame(QLayout* layout)
  {
      QFrame* frame = new QFrame;
      frame->setLayout(layout);
      frame->setFrameShape(QFrame::Box);
      frame->setLineWidth(2);

      frame->setStyleSheet("QFrame{"
                           "  border-radius: 8px;"
                           "  border: 4px solid;"
                           "  background: #ffffff;"
                           "}"
                           ""
                           "QLabel{"
                           "  border: none;"
                           "}");

      return frame;
  }
};

static void siginthandler(int /*param*/)
{
  QApplication::quit();
}

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  rclcpp::init(argc, argv);

  auto chargeNode = std::make_shared<ChargeSub>();
  auto batteryNode1 = std::make_shared<BatterySub1>();
  auto batteryNode2 = std::make_shared<BatterySub2>();
  auto batteryNode3 = std::make_shared<BatterySub3>();
  auto batteryNode4 = std::make_shared<BatterySub4>();
  auto mainGui = std::make_shared<MainGui>(chargeNode, batteryNode1, batteryNode2, batteryNode3, batteryNode4);


  app.processEvents();
  mainGui->show();

  rclcpp::executors::MultiThreadedExecutor exec;
  exec.add_node(chargeNode);
  exec.add_node(batteryNode1);
  exec.add_node(batteryNode2);
  exec.add_node(batteryNode3);
  exec.add_node(batteryNode4);


  while (rclcpp::ok())
  {
      exec.spin_some();
      app.processEvents();
  }

  signal(SIGINT, siginthandler);

  exec.remove_node(chargeNode);
  exec.remove_node(batteryNode1);
  exec.remove_node(batteryNode2);
  exec.remove_node(batteryNode3);
  exec.remove_node(batteryNode4);
  rclcpp::shutdown();


}


#include "main_gui.moc"
