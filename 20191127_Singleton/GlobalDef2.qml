pragma Singleton
import QtQuick 2.0

QtObject{
    property string name: "world";
    property int count: 100;

    //常量
    readonly property int value: 100;

    function printText(text){
        console.log("输出2： ",text);
    }
}
