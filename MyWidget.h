#ifndef MYWIDGET_H
#define MYWIDGET_H

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

#endif // MYWIDGET_H
