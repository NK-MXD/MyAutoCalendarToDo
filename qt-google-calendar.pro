#-------------------------------------------------
#
# Project created by QtCreator 2012-01-16T17:27:13
#
#-------------------------------------------------

QT       += core gui network
QT += quick networkauth quickcontrols2

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
INCLUDEPATH += C:/Users/xiaoduo/WorkSpace/c-workspace/QtSpace/qt-google-calendar-copy/include/qjson-qt5
#LIBS += "C:/Users/xiaoduo/WorkSpace/c-workspace/QtSpace/qt-google-calendar/lib/libqjson.dll.a"
LIBS += C:/Users/xiaoduo/WorkSpace/c-workspace/QtSpace/qt-google-calendar-copy/debug/lib/libqjson-qt5.dll.a
LIBS += C:/Users/xiaoduo/WorkSpace/c-workspace/QtSpace/qt-google-calendar-copy/debug/lib/libqjson-qt5.dll
#LIBS += C:/Users/xiaoduo/WorkSpace/c-workspace/QtSpace/qt-google-calendar-copy/release/lib/libqjson.dll.a
#LIBS += C:/Users/xiaoduo/WorkSpace/c-workspace/QtSpace/qt-google-calendar-copy/release/lib/libqjson.dll
#linux* {
#LIBS += ../qjson/build/lib/libqjson.so
#}

#win32-g++ {
#    LIBS += ../qjson/build/lib/qjson0.dll
#}

#win32-msvc* {
#    LIBS += ../qjson/build/lib/qjson0.lib
#}

#macx* {
#LIBS += -F../qjson/build/lib -framework qjson
#}


TARGET = google_api_calendar_clent
TEMPLATE = app


SOURCES += main.cpp\
    googleauth.cpp \
        mainwindow.cpp \
    oauth2.cpp \
    form.cpp \
    calendar_data_manager.cpp \
    new_event_dialog.cpp \
    edit_calendar_dialog.cpp

HEADERS  += mainwindow.h \
    googleauth.h \
    oauth2.h \
    form.h \
    calendar_data_manager.h \
    new_event_dialog.h \
    edit_calendar_dialog.h

FORMS    += mainwindow.ui \
    form.ui \
    new_event_dialog.ui \
    edit_calendar_dialog.ui


RESOURCES += qml.qrc \
    qml.qrc
# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    googleauth.h












