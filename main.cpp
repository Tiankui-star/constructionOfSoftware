#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include"generate.h"
#include"exercise.h"
#include"ExerciseFileTester.h"
#include"exercisesheet.h"
#include"practice.h"
#include"judgement.h"


int main(int argc, char *argv[])
{
    ExerciseSheet test;
    test.generateBinaryBase();
    //std::cout<<1<<std::endl;
    test.generateSheet();
    // std::cout<<1<<std::endl;
    test.formatDisplay2(5);
    // Judgement test;
    // test.judge();
    // ExerciseFileSter test;
    // test.testReadCSVAddtionExercise();
    // ExerciseSheet test;
    // test.show();
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
