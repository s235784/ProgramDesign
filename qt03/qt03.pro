QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin_login.cpp \
    admin_main.cpp \
    admin_mange.cpp \
    confirm.cpp \
    main.cpp \
    mainwindow.cpp \
    user_info.cpp \
    user_login.cpp \
    user_selfchoose.cpp \
    warning.cpp

HEADERS += \
    admin_login.h \
    admin_main.h \
    admin_mange.h \
    confirm.h \
    mainwindow.h \
    user_info.h \
    user_login.h \
    user_selfchoose.h \
    warning.h

FORMS += \
    admin_login.ui \
    admin_main.ui \
    admin_mange.ui \
    confirm.ui \
    mainwindow.ui \
    user_info.ui \
    user_login.ui \
    user_selfchoose.ui \
    warning.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    admin_image.qrc
