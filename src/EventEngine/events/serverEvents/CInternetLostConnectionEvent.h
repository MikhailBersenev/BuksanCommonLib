#ifndef CINTERNETLOSTCONNECTIONEVENT_H
#define CINTERNETLOSTCONNECTIONEVENT_H

#include "BuksanCommonLib_global.h"
#include "CServerEvent.h"

class BUKSANCOMMONLIB_EXPORT CInternetLostConnectionEvent : public CServerEvent
{
public:
    explicit CInternetLostConnectionEvent(QObject *parent = nullptr);
};

#endif // CINTERNETLOSTCONNECTIONEVENT_H
