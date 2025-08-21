#ifndef CCAMERASCREENSHOTEVENT_H
#define CCAMERASCREENSHOTEVENT_H

#include "BuksanCommonLib_global.h"
#include "CCameraEvent.h"

class BUKSANCOMMONLIB_EXPORT CCameraScreenshotEvent : public CCameraEvent
{
public:
    explicit CCameraScreenshotEvent(QObject *parent = nullptr);
};

#endif // CCAMERASCREENSHOTEVENT_H
