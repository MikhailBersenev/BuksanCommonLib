#ifndef CSERVERCONNECTEVENT_H
#define CSERVERCONNECTEVENT_H

#include "BuksanCommonLib_global.h"
#include "CServerEvent.h"

class BUKSANCOMMONLIB_EXPORT CServerConnectEvent : public CServerEvent
{
public:
    explicit CServerConnectEvent(QObject *parent = nullptr);
};

#endif // CSERVERCONNECTEVENT_H
