/*******************************************************
* @brief        在QML中使用C++类和对象
* @author       xiaolei
* @copyright    安晓辉
* @version      V1.0
* @data         2019-11-11
* @note         1、定义可导出的C++类
* @note         2、在main.cpp注册一个QML可用的类型
* @note         3、在QML中导入C++注册的类型
*******************************************************/
#include <QGuiApplication>
#include <QQmlApplicationEngine>
//添加头文件
#include <QtQuick/QQuickView>
#include <colormaker.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    //注册QML类型
    qmlRegisterType<ColorMaker>("an.qt.ColorMaker", 1, 0, "ColorMaker");

//    QQuickView viewer;
//    viewer.setResizeMode(QQuickView::SizeRootObjectToView);
//    viewer.rootContext()->setContextProperty("colorMaker",new ColorMaker);

//    viewer.setSource(QUrl("qrc:///main.qml"));
//    viewer.show();

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
