#include "scrolling_label.h"
#include <QPainter>
#include <QPropertyAnimation>

ScrollingLabel::ScrollingLabel(QWidget *parent) : QLabel(parent){
    
    this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    auto *animation = new QPropertyAnimation(this, "geometry");
    animation->setDuration(15000); // Duration in milliseconds
    animation->setStartValue(QRect(parent->width(), y(), parent->width(), height()));
    animation->setEndValue(QRect(0 - parent->width(), y(), parent->width(), height()));
    animation->setLoopCount(-1); // Loop indefinitely
    animation->start();
}



void ScrollingLabel::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.drawText(rect(), Qt::AlignLeft | Qt::AlignVCenter, text());
}
