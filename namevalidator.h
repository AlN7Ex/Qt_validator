#ifndef NAMEVALIDATOR_H
#define NAMEVALIDATOR_H

#include <QWidget>
#include <QValidator>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QRegExp>

class NameValidator;

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = nullptr);
    ~MyWidget();
private:
     QLabel          * const plbl;
     QLineEdit       * const ptxt;
     QVBoxLayout     * const pvboxlayout;
     NameValidator   * const pNameValidator;
};

class NameValidator : public QValidator
{
    Q_OBJECT

public:
    explicit NameValidator(QObject *parent = nullptr);
    virtual State validate(QString & str, int & pos) const override;
    ~NameValidator();


};
#endif // NAMEVALIDATOR_H
