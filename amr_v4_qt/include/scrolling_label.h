// ScrollingLabel.h
#ifndef SCROLLINGLABEL_H
#define SCROLLINGLABEL_H

#include <QLabel>
#include <QTimer>
#include <QString>

class ScrollingLabel : public QLabel {
    Q_OBJECT

public:
    explicit ScrollingLabel(QWidget *parent = nullptr);


protected:
    void paintEvent(QPaintEvent *event) override;

};

#endif // SCROLLINGLABEL_H
