import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("QML按钮样式")

    Rectangle{
        width:640;
        height:480;
        color:"#c0c0c0";

        Text{
            id:colorText;
            text:"犯我强汉者，虽远必诛";
            anchors.horizontalCenter: parent.horizontalCenter;
            anchors.top:parent.top;
            anchors.topMargin: 200;
            font.pixelSize: 50
            font.family: "微软雅黑";
        }

        Button{
            id:colorPicker;
            text:"Red";
            x:10;
            y:440
            width:50;
            height:30;
            style:ButtonStyle{
                background:Rectangle{
                    implicitWidth:70;
                    implicitHeight:30;
                    color:"red";
                    radius: 5;
                    border.width: 2;
                    border.color: "green";
                }
                label:Text{
                    renderType: Text.NativeRendering
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignHCenter
                    font.family: "Helvetica"
                    font.pointSize: 12
                    color: "white"
                    text: control.text
                }
            }
        }

        Connections{
            target:colorPicker; //发信号的对象
            onClicked:{
                colorText.color="red";
            }
        }
    }
}
