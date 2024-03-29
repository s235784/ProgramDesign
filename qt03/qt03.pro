QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin_checkuser.cpp \
    admin_login.cpp \
    admin_main.cpp \
    admin_plan.cpp \
    admin_user_plan.cpp \
    admin_wanted.cpp \
    cmd/file.cpp \
    cmd/util.cpp \
    main.cpp \
    mainwindow.cpp \
    plan_add.cpp \
    user_all_plan.cpp \
    user_com.cpp \
    user_filter.cpp \
    user_main.cpp \
    user_plan.cpp

HEADERS += \
    admin_checkuser.h \
    admin_login.h \
    admin_main.h \
    admin_plan.h \
    admin_user_plan.h \
    admin_wanted.h \
    cmd/commentStruct.h \
    cmd/file.h \
    cmd/planStruct.h \
    cmd/userPlanStruct.h \
    cmd/util.h \
    cmd/wantedPlanStruct.h \
    mainwindow.h \
    plan_add.h \
    user_all_plan.h \
    user_com.h \
    user_filter.h \
    user_main.h \
    user_plan.h

FORMS += \
    admin_checkuser.ui \
    admin_login.ui \
    admin_main.ui \
    admin_plan.ui \
    admin_user_plan.ui \
    admin_wanted.ui \
    mainwindow.ui \
    plan_add.ui \
    user_all_plan.ui \
    user_com.ui \
    user_filter.ui \
    user_main.ui \
    user_plan.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    admin_image.qrc
