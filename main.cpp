#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include"generate.h"
int main(int argc, char *argv[])
{
    generateExercise();
    printEquation();
    // QGuiApplication app(argc, argv);

    // QQmlApplicationEngine engine;
    // QObject::connect(
    //     &engine,
    //     &QQmlApplicationEngine::objectCreationFailed,
    //     &app,
    //     []() { QCoreApplication::exit(-1); },
    //     Qt::QueuedConnection);
    // engine.loadFromModule("constructionOfSoftware", "Main");

    return 0;
}
