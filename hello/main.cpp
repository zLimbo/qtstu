#include <QtWidgets/qapplication.h>

#include <QtWidgets/QApplication>

#include "main_window.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow w;
    w.show();

    return app.exec();
}