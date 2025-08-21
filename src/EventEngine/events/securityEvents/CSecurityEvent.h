#ifndef CSECURITYEVENT_H
#define CSECURITYEVENT_H

#include "BuksanCommonLib_global.h"
#include "EventEngine/events/CEvent.h"

class BUKSANCOMMONLIB_EXPORT CSecurityEvent : public CEvent
{
public:
    explicit CSecurityEvent(QObject *parent = nullptr);
};

#endif // CSECURITYEVENT_H
