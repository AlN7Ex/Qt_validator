#include "namevalidator.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent),
      plbl              (new QLabel("&Name (The digits will not be accepted!):", this)),
      ptxt              (new QLineEdit(this)),
      pvboxlayout       (new QVBoxLayout(this)),
      pNameValidator    (new NameValidator(ptxt))
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

NameValidator::NameValidator(QObject *parent)
    : QValidator(parent)
{
}

QValidator::State NameValidator::validate(QString &str, int &pos) const
{
    QRegExp rxp = QRegExp("[0-9]");
    if (str.contains(rxp))
    {
        return Invalid;
    }
    return Acceptable;
}

NameValidator::~NameValidator()
{
}
