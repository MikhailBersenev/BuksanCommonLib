#ifndef CCAMERARECORDSTARTEVENT_H
#define CCAMERARECORDSTARTEVENT_H

#include "BuksanCommonLib_global.h"
#include "CCameraEvent.h"

class BUKSANCOMMONLIB_EXPORT CCameraRecordStartEvent : public CCameraEvent
{
public:
    explicit CCameraRecordStartEvent(QObject *parent = nullptr);
    void fSetDevice(QString strDevice);
};

#endif // CCAMERARECORDSTARTEVENT_H
