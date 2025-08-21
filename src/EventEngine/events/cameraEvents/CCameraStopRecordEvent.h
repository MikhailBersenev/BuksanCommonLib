#ifndef CCAMERASTOPRECORDEVENT_H
#define CCAMERASTOPRECORDEVENT_H

#include "BuksanCommonLib_global.h"
#include "CCameraEvent.h"

class BUKSANCOMMONLIB_EXPORT CCameraStopRecordEvent : public CCameraEvent
{
public:
    explicit CCameraStopRecordEvent(QObject *parent = nullptr);
};

#endif // CCAMERASTOPRECORDEVENT_H
