#include <QApplication>
#include <QtQml/QQmlApplicationEngine>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/ui/main.qml")));

    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return QApplication::exec();
}