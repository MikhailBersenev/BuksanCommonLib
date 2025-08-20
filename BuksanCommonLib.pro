QT -= gui
QT += sql

TEMPLATE = lib
DEFINES += BUKSANCOMMONLIB_LIBRARY

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    EventEngine/CEventEngine.cpp \
    EventEngine/events/CEvent.cpp \
    EventEngine/CSQLEventEngine.cpp \
    cbuksancommonlib.cpp \
    db/CDatabaseConnection.cpp \
    db/CDatabaseConnectionPSQL.cpp

HEADERS += \
    BuksanCommonLib_global.h \
    EventEngine/CEventEngine.h \
    EventEngine/events/CEvent.h \
    EventEngine/CSQLEventEngine.h \
    cbuksancommonlib.h \
    db/CDatabaseConnection.h \
    db/CDatabaseConnectionPSQL.h

# Default rules for deployment.
unix {
    target.path = $$OUT_PWD/install/lib
}

# Копирование заголовочных файлов в include директорию
copy_headers.commands = $$system(mkdir -p $$OUT_PWD/include/db && cp BuksanCommonLib_global.h $$OUT_PWD/include/ && cp cbuksancommonlib.h $$OUT_PWD/include/ && cp db/CDatabaseConnection.h $$OUT_PWD/include/db/ && cp db/CDatabaseConnectionPSQL.h $$OUT_PWD/include/db/)
QMAKE_EXTRA_TARGETS += copy_headers
POST_TARGETDEPS += copy_headers

!isEmpty(target.path): INSTALLS += target
