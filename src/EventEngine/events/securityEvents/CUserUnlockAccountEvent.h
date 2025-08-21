#ifndef CUSERUNLOCKACCOUNTEVENT_H
#define CUSERUNLOCKACCOUNTEVENT_H

#include "BuksanCommonLib_global.h"
#include "CSecurityEvent.h"

class BUKSANCOMMONLIB_EXPORT CUserUnlockAccountEvent : public CSecurityEvent
{
public:
    explicit CUserUnlockAccountEvent(QObject *parent = nullptr);
};

#endif // CUSERUNLOCKACCOUNTEVENT_H
