#ifndef CUSERAUTHEVENT_H
#define CUSERAUTHEVENT_H

#include "BuksanCommonLib_global.h"
#include "CSecurityEvent.h"

class BUKSANCOMMONLIB_EXPORT CUserAuthEvent : public CSecurityEvent
{
public:
    explicit CUserAuthEvent(QObject *parent = nullptr);
};

#endif // CUSERAUTHEVENT_H
