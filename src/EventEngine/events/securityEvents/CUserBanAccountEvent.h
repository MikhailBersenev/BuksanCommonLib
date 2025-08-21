#ifndef CUSERBANACCOUNTEVENT_H
#define CUSERBANACCOUNTEVENT_H

#include "BuksanCommonLib_global.h"
#include "CSecurityEvent.h"

class BUKSANCOMMONLIB_EXPORT CUserBanAccountEvent : public CSecurityEvent
{
public:
    explicit CUserBanAccountEvent(QObject *parent = nullptr);
};

#endif // CUSERBANACCOUNTEVENT_H
