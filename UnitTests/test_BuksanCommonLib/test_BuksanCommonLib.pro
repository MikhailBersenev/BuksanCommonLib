QT += testlib sql
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_maintest.cpp \
    EventEngine/test_EventEngine.cpp \
    db/test_CDatabaseConnection.cpp


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../build/Desktop_Qt_6_8_3-Debug/release/ -lBuksanCommonLib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../build/Desktop_Qt_6_8_3-Debug/debug/ -lBuksanCommonLib
else:unix: LIBS += -L$$PWD/../../build/Desktop_Qt_6_8_3-Debug/ -lBuksanCommonLib

INCLUDEPATH += $$PWD/../../src
DEPENDPATH += $$PWD/../../src

HEADERS += \
    EventEngine/test_EventEngine.h \
    db/test_CDatabaseConnection.h
