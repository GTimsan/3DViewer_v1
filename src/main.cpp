#include <QApplication>

#include "widget.h"

int main(int argc, char *argv[]) {
    QApplication::setOrganizationName("SuperCompany");
    QApplication::setOrganizationDomain("www.SuperCompany.com");
    QApplication::setApplicationName("3dShlyap");

    QApplication a(argc, argv);
    Widget w;

    w.show();
    return a.exec();
}
