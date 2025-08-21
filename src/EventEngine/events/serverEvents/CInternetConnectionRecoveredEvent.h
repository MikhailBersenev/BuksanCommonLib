#ifndef CINTERNETCONNECTIONRECOVEREDEVENT_H
#define CINTERNETCONNECTIONRECOVEREDEVENT_H

#include "BuksanCommonLib_global.h"
#include "CServerEvent.h"

class BUKSANCOMMONLIB_EXPORT CInternetConnectionRecoveredEvent : public CServerEvent
{
public:
    explicit CInternetConnectionRecoveredEvent(QObject *parent = nullptr);
};

#endif // CINTERNETCONNECTIONRECOVEREDEVENT_H
