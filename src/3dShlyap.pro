QT       += core gui
QT += openglwidgets #Для винды
#QT += gifimage
#QT += opengl # Для линукса
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
include(QtGifImage-master/src/gifimage/qtgifimage.pri)
#include(3rdparty/qtgifimage/src/gifimage/qtgifimage.pri)
SOURCES += \
    main.cpp \
    parser.c \
    widget.cpp

HEADERS += \
    widget.h \
    parser.h

FORMS += \
    widget.ui

LIBS += -lopengl32 -lglu32 #Для винды

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
