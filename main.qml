import QtQuick 2.12//之前是2.15
import QtQuick.Window 2.12//之前是2.15
import QtQuick.Controls 2.5//之前是2.5

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Google OAuth Test")

    Button{
        text: qsTr("Start Authentication")
        anchors.centerIn: parent
        onClicked: {
            GoogleAuth.click()
        }
    }
}
