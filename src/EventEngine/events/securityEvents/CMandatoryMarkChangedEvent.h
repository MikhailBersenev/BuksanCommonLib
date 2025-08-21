#ifndef CMANDATORYMARKCHANGEDEVENT_H
#define CMANDATORYMARKCHANGEDEVENT_H

#include "BuksanCommonLib_global.h"
#include "CSecurityEvent.h"

class BUKSANCOMMONLIB_EXPORT CMandatoryMarkChangedEvent : public CSecurityEvent
{
public:
    explicit CMandatoryMarkChangedEvent(QObject *parent = nullptr);
};

#endif // CMANDATORYMARKCHANGEDEVENT_H
