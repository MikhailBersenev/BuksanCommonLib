#ifndef CSYSTEMEVENT_H
#define CSYSTEMEVENT_H

#include "BuksanCommonLib_global.h"
#include "EventEngine/events/CEvent.h"

class BUKSANCOMMONLIB_EXPORT CSystemEvent : public CEvent
{
public:
    explicit CSystemEvent(QObject *parent = nullptr);
};

#endif // CSYSTEMEVENT_H
