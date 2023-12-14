#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QFrame>
#include <QDebug>
#include <QScreen>
#include <QObject>
#include <memory>
#include <csignal>
#include "rclcpp/rclcpp.hpp"
#include "include/charge_node.hpp"
#include "include/battery_node.hpp"
#include "include/healthPopUp.hpp"

// Add the necessary ROS 2 includes for your MinimalSubscriber here
// #include "minimal_subscriber.hpp"

class MainGui : public QMainWindow
{
  Q_OBJECT

public:
  MainGui(std::shared_ptr<ChargeSub> charge_sub_,
          std::shared_ptr<BatterySub> battery_sub_,
          QWidget *parent = nullptr)
      : QMainWindow(parent),
        charge_sub_(charge_sub_),
        battery_sub_(battery_sub_)

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



      // adding frames to layout
      topRowLayout->addWidget(topLeftFrame);
      topRowLayout->addWidget(topRightFrame);
      bottomRowLayout->addWidget(bottomLeftFrame);
      bottomRowLayout->addWidget(bottomRightFrame);

      // barrery errors (top left)
      battery = new QLabel("12.9v");

      topLeftLayout->addWidget(battery);


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
      connect(battery_sub_.get(), &BatterySub::changedBattery, this, &MainGui::updateBattery);


      this->setStyleSheet("background: #717171;");



  }


  void updateBattery(const QString &data)
  {
    battery->setText(QString("Charge: %1").arg(data));
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
  std::shared_ptr<BatterySub> battery_sub_;

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
  QLabel* battery;
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

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    rclcpp::init(argc, argv);

    auto chargeNode = std::make_shared<ChargeSub>();
    auto batteryNode = std::make_shared<BatterySub>();
    auto mainGui = std::make_shared<MainGui>(chargeNode, batteryNode);

    app.processEvents();
    mainGui->setFixedSize(1280, 400);
    mainGui->setWindowState(Qt::WindowFullScreen);
    mainGui->show();

    rclcpp::executors::MultiThreadedExecutor exec;
    exec.add_node(chargeNode);
    exec.add_node(batteryNode);
    while (rclcpp::ok()) {
        exec.spin_some();
        app.processEvents();
    }

    signal(SIGINT, siginthandler);

    exec.remove_node(chargeNode);
    exec.remove_node(batteryNode);
    rclcpp::shutdown();

    return app.exec();
}



#include "main_gui.moc"
