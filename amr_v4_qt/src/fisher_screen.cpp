#include "fisher_screen.h"
#include <QVBoxLayout>
#include <QPixmap>

FisherScreen::FisherScreen(QWidget *parent) : QWidget(parent) {
    // Create a label to hold the logo
    QLabel* logoLabel = new QLabel(this);
    QPixmap logoPixmap("amr_v4_qt/assets/fisher_logo.png"); // Adjust the path to your logo image

    // Check if the pixmap loaded successfully
    if (!logoPixmap.isNull()) {
        logoLabel->setPixmap(logoPixmap);
        logoLabel->setAlignment(Qt::AlignBottom); // Center the logo
        // Optionally, resize the logo if necessary
        logoLabel->setScaledContents(true);
        logoLabel->setFixedSize(100, 40);
        logoLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    }

    // Set up the layout
    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(logoLabel, 0, Qt::AlignCenter);

    setLayout(layout);
}
