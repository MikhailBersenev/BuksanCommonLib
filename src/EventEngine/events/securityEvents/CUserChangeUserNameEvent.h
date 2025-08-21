#ifndef CUSERCHANGEUSERNAMEEVENT_H
#define CUSERCHANGEUSERNAMEEVENT_H

#include "BuksanCommonLib_global.h"
#include "CSecurityEvent.h"

class BUKSANCOMMONLIB_EXPORT CUserChangeUserNameEvent : public CSecurityEvent
{
public:
    explicit CUserChangeUserNameEvent(QObject *parent = nullptr);
};

#endif // CUSERCHANGEUSERNAMEEVENT_H
