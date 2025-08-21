#ifndef CUSERREGISTEREVENT_H
#define CUSERREGISTEREVENT_H

#include "BuksanCommonLib_global.h"
#include "CSecurityEvent.h"

class BUKSANCOMMONLIB_EXPORT CUserRegisterEvent : public CSecurityEvent
{
public:
    explicit CUserRegisterEvent(QObject *parent = nullptr);
};

#endif // CUSERREGISTEREVENT_H
