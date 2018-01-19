/**
 * Radit - Radio Automation
 * -----------------------------------------
 *
 * Radit is a free software project to automate radio stations,
 * compatible with GNU/Linux, Windows, the project is in development.
 *
 * Site: www.radit.org
 *
 * @author Victor Algaba
 **/
#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QTranslator>
#include <QInputDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator T;
    QStringList langs;
    langs << "Catalan" << "Spanish";
    const QString lang = "Catalan";

    if (lang == "Catalan") {
        T.load(":/ca_ES.qm");
    }
    if (lang != "Spanish") {
        a.installTranslator(&T);
    }
    MainWindow w;
    //w.show();
    w.showMaximized();
    return a.exec();
}
