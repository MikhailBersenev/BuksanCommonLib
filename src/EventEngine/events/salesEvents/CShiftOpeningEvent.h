#ifndef CSHIFTOPENINGEVENT_H
#define CSHIFTOPENINGEVENT_H

#include "BuksanCommonLib_global.h"
#include "CSalesEvent.h"

class BUKSANCOMMONLIB_EXPORT CShiftOpeningEvent : public CSalesEvent
{
public:
    explicit CShiftOpeningEvent(QObject *parent = nullptr);
};

#endif // CSHIFTOPENINGEVENT_H
