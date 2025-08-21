#ifndef CSERVEREVENT_H
#define CSERVEREVENT_H

#include "BuksanCommonLib_global.h"
#include "EventEngine/events/CEvent.h"

class BUKSANCOMMONLIB_EXPORT CServerEvent : public CEvent
{
public:
    explicit CServerEvent(QObject *parent = nullptr);
};

#endif // CSERVEREVENT_H
