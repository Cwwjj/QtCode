pragma Singleton
import QtQuick 2.0

QtObject{
    id:data;
    property string name: "hello";
    property int count: 0;

    //常量
    readonly property int value: 100;

    function printText(text){
        console.log("输出： ",text);
    }
}
