#ifndef CUSERLOGOUTACCOUNTEVENT_H
#define CUSERLOGOUTACCOUNTEVENT_H

#include "BuksanCommonLib_global.h"
#include "CSecurityEvent.h"

class BUKSANCOMMONLIB_EXPORT CUserLogoutAccountEvent : public CSecurityEvent
{
public:
    explicit CUserLogoutAccountEvent(QObject *parent = nullptr);
};

#endif // CUSERLOGOUTACCOUNTEVENT_H
