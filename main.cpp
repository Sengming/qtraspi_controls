#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>
#include <wiringPi.h>
#include <wiringPiSPI.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    qDebug().noquote() << "Setting up RPI2!";
    if (engine.rootObjects().isEmpty())
        return -1;

    // Testing WiringPi
    wiringPiSetup() ;
    pinMode (0, OUTPUT) ;
    for (;;)
    {
      digitalWrite (0, HIGH) ; delay (500) ;
      digitalWrite (0,  LOW) ; delay (500) ;
    }

    return app.exec();
}
