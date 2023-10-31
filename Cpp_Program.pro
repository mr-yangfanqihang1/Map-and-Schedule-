QT += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Answer.cpp \
    Datas.cpp \
    Edge.cpp \
    EdgeManger.cpp \
    Maps.cpp \
    Navigation.cpp \
    Node.cpp \
    NodeManger.cpp \
    Public.cpp \
    main.cpp \
    mainwindow.cpp \
    recsets.cpp

HEADERS += \
    Answer.h \
    Datas.h \
    Edge.h \
    EdgeManger.h \
    Maps.h \
    Navigation.h \
    Node.h \
    NodeManger.h \
    Public.h \
    mainwindow.h \
    rec.h \
    recsets.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/folder/lib/ -lSqlite
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/folder/lib/ -lSqlited
else:unix: LIBS += -L$$PWD/folder/lib/ -lSqlite

INCLUDEPATH += $$PWD/folder/include
DEPENDPATH += $$PWD/folder/include

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/folder/lib/libSqlite.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/folder/lib/libSqlited.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/folder/lib/Sqlite.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/folder/lib/Sqlited.lib
else:unix: PRE_TARGETDEPS += $$PWD/folder/lib/libSqlite.a
