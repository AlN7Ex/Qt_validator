#include "namevalidator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MyWidget wgt;
    wgt.show();


//    QLabel          * plbl              = new QLabel("&Name (The digits will not be accepted!):");
//    QLineEdit       * ptxt              = new QLineEdit;
//    QVBoxLayout     * pvboxlayout       = new QVBoxLayout;
//    NameValidator   * pNameValidator    = new NameValidator(ptxt);

//    ptxt->setValidator(pNameValidator);
//    plbl->setBuddy(ptxt);

//    pvboxlayout->addWidget(plbl);
//    pvboxlayout->addWidget(ptxt);

//    wgt.setLayout(pvboxlayout);
//    wgt.show();


//    delete plbl;
//    delete ptxt;
//    delete pvboxlayout;
//    delete pNameValidator;

    return app.exec();
}
