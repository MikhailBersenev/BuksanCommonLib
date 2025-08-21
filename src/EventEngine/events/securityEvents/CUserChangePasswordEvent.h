#ifndef CUSERCHANGEPASSWORDEVENT_H
#define CUSERCHANGEPASSWORDEVENT_H

#include "BuksanCommonLib_global.h"
#include "CSecurityEvent.h"

class BUKSANCOMMONLIB_EXPORT CUserChangePasswordEvent : public CSecurityEvent
{
public:
    explicit CUserChangePasswordEvent(QObject *parent = nullptr);
};

#endif // CUSERCHANGEPASSWORDEVENT_H
