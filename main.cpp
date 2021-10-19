#include "MyValidator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MyWidget wgt;
    wgt.setFixedSize(320,100);
    wgt.show();

    return app.exec();
}
