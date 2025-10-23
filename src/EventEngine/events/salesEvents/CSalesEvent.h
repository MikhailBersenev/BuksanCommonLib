#ifndef CSALESEVENT_H
#define CSALESEVENT_H

#include "BuksanCommonLib_global.h"
#include "EventEngine/events/CEvent.h"

class BUKSANCOMMONLIB_EXPORT CSalesEvent : public CEvent
{
public:
    explicit CSalesEvent(QObject *parent = nullptr);
};

#endif // CSALESEVENT_H
