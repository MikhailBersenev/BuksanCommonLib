#ifndef CCAMERAEVENT_H
#define CCAMERAEVENT_H

#include "BuksanCommonLib_global.h"
#include "EventEngine/events/CEvent.h"

class BUKSANCOMMONLIB_EXPORT CCameraEvent : public CEvent
{
public:
    explicit CCameraEvent(QObject *parent = nullptr);
};

#endif // CCAMERAEVENT_H
