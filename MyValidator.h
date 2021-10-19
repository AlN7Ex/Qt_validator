#ifndef MYVALIDATOR_H
#define MYVALIDATOR_H

#include "MyWidget.h"

class NameValidator : public QValidator
{
    Q_OBJECT

public:
    explicit NameValidator(QObject *parent = nullptr);
    virtual State validate(QString & str, int & pos) const override;
    ~NameValidator();


};
#endif // MYVALIDATOR_H
