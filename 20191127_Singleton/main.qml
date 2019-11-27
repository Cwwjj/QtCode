import QtQuick 2.9
import QtQuick.Window 2.2
import "."

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("单例组件")
    Component.onCompleted: {
        console.log("name： ",GlobalDef.name);
        console.log("count： ",GlobalDef.count);
        GlobalDef.printText("首悬东南枝，尸沉黄浦江");

        console.log("name： ",GlobalDef2.name);
        console.log("count： ",GlobalDef2.count);
        GlobalDef2.printText("不成功便成仁");
    }
}
