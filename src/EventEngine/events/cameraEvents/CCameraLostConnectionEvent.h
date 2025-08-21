#ifndef CCAMERALOSTCONNECTIONEVENT_H
#define CCAMERALOSTCONNECTIONEVENT_H

#include "BuksanCommonLib_global.h"
#include "CCameraEvent.h"

class BUKSANCOMMONLIB_EXPORT CCameraLostConnectionEvent : public CCameraEvent
{
public:
    explicit CCameraLostConnectionEvent(QObject *parent = nullptr);
};

#endif // CCAMERALOSTCONNECTIONEVENT_H
