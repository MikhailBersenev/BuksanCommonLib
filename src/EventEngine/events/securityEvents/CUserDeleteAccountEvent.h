#ifndef CUSERDELETEACCOUNTEVENT_H
#define CUSERDELETEACCOUNTEVENT_H

#include "BuksanCommonLib_global.h"
#include "CSecurityEvent.h"

class BUKSANCOMMONLIB_EXPORT CUserDeleteAccountEvent : public CSecurityEvent
{
public:
    explicit CUserDeleteAccountEvent(QObject *parent = nullptr);
};

#endif // CUSERDELETEACCOUNTEVENT_H
