#include "widget.h"


Widget::Widget(QWidget *parent): QWidget(parent)
{
    resize(400, 300);
    label_ = new QLabel{tr("widget"), this};
    label_->setGeometry(200, 150, 200, 40);
}

