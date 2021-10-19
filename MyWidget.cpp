#include "MyValidator.h"
#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent),
      plbl              (new QLabel("&Name (The digits will not be accepted!):", this)),
      ptxt              (new QLineEdit(this)),
      pvboxlayout       (new QVBoxLayout(this)),
      pNameValidator    (new NameValidator(this))
{
      ptxt->setValidator(pNameValidator);
      plbl->setBuddy(ptxt);

      pvboxlayout->addWidget(plbl);
      pvboxlayout->addWidget(ptxt);

      setLayout(pvboxlayout);
}

MyWidget::~MyWidget()
{
}
