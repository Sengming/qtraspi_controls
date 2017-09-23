import QtQuick 2.7
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    MainForm {
        anchors.fill: parent
        mouseArea.onClicked: {
            console.log(qsTr('Clicked on background. Text: "' + textEdit.text + '"'))
        }

       Image {
           id: imageone
           anchors.centerIn: parent
           source:"images/02-1.png"

       }

       Text {
           id: textone
           text: qsTr("HELUUU BUGGLE!!!")
           anchors.top: imageone.bottom
           anchors.topMargin: 50
           anchors.horizontalCenter: parent.horizontalCenter
           color: "Blue"
           font.family: "Helvectica"
           font.pointSize: 50
       }
    }

}
