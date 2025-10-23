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
    EventEngine/CEventSender.cpp \
    EventEngine/events/CEvent.cpp \
    EventEngine/CSQLEventEngine.cpp \
    EventEngine/events/salesEvents/CSalesEvent.cpp \
    EventEngine/events/salesEvents/CNewItemInReceiptEvent.cpp \
    EventEngine/events/salesEvents/CExportReceiptToFileEvent.cpp \
    EventEngine/events/salesEvents/CShiftOpeningEvent.cpp \
    EventEngine/events/salesEvents/CShiftClosingEvent.cpp \
    EventEngine/events/systemEvents/CSystemEvent.cpp \
    EventEngine/events/securityEvents/CSecurityEvent.cpp \
    EventEngine/events/securityEvents/CUserAuthEvent.cpp \
    EventEngine/events/securityEvents/CUserRegisterEvent.cpp \
    EventEngine/events/securityEvents/CUserChangePasswordEvent.cpp \
    EventEngine/events/securityEvents/CUserBanAccountEvent.cpp \
    EventEngine/events/securityEvents/CUserDeleteAccountEvent.cpp \
    EventEngine/events/securityEvents/CUserChangeUserNameEvent.cpp \
    EventEngine/events/securityEvents/CUserLogoutAccountEvent.cpp \
    EventEngine/events/securityEvents/CMandatoryMarkChangedEvent.cpp \
    EventEngine/events/securityEvents/CUserUnlockAccountEvent.cpp \
    EventEngine/events/serverEvents/CServerEvent.cpp \
    EventEngine/events/serverEvents/CServerConnectEvent.cpp \
    EventEngine/events/serverEvents/CInternetLostConnectionEvent.cpp \
    EventEngine/events/serverEvents/CInternetConnectionRecoveredEvent.cpp \
    MRBAC/auth/CUser.cpp \
    MRBAC/objects/CSecLabeledObject.cpp \
    MRBAC/objects/CSecurityGroup.cpp \
    cbuksancommonlib.cpp \
    core/CCamera.cpp \
    core/CMediaFile.cpp \
    db/CDatabaseConnection.cpp \
    db/CDatabaseConnectionPSQL.cpp \
    utils/CStringUtils.cpp

HEADERS += \
    BuksanCommonLib_global.h \
    EventEngine/CEventEngine.h \
    EventEngine/CEventSender.h \
    EventEngine/events/CEvent.h \
    EventEngine/CSQLEventEngine.h \
    EventEngine/events/salesEvents/CSalesEvent.h \
    EventEngine/events/salesEvents/CNewItemInReceiptEvent.h \
    EventEngine/events/salesEvents/CExportReceiptToFileEvent.h \
    EventEngine/events/salesEvents/CShiftOpeningEvent.h \
    EventEngine/events/salesEvents/CShiftClosingEvent.h \
    EventEngine/events/systemEvents/CSystemEvent.h \
    EventEngine/events/securityEvents/CSecurityEvent.h \
    EventEngine/events/securityEvents/CUserAuthEvent.h \
    EventEngine/events/securityEvents/CUserRegisterEvent.h \
    EventEngine/events/securityEvents/CUserChangePasswordEvent.h \
    EventEngine/events/securityEvents/CUserBanAccountEvent.h \
    EventEngine/events/securityEvents/CUserDeleteAccountEvent.h \
    EventEngine/events/securityEvents/CUserChangeUserNameEvent.h \
    EventEngine/events/securityEvents/CUserLogoutAccountEvent.h \
    EventEngine/events/securityEvents/CMandatoryMarkChangedEvent.h \
    EventEngine/events/securityEvents/CUserUnlockAccountEvent.h \
    EventEngine/events/serverEvents/CServerEvent.h \
    EventEngine/events/serverEvents/CServerConnectEvent.h \
    EventEngine/events/serverEvents/CInternetLostConnectionEvent.h \
    EventEngine/events/serverEvents/CInternetConnectionRecoveredEvent.h \
    MRBAC/auth/CUser.h \
    MRBAC/objects/CSecLabeledObject.h \
    MRBAC/objects/CSecurityGroup.h \
    cbuksancommonlib.h \
    core/CCamera.h \
    core/CMediaFile.h \
    db/CDatabaseConnection.h \
    db/CDatabaseConnectionPSQL.h \
    utils/CStringUtils.h

# Default rules for deployment.
unix {
    target.path = $$OUT_PWD/install/lib
}

