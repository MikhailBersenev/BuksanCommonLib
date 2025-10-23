#ifndef CSHIFTCLOSINGEVENT_H
#define CSHIFTCLOSINGEVENT_H

#include "BuksanCommonLib_global.h"
#include "CSalesEvent.h"

class BUKSANCOMMONLIB_EXPORT CShiftClosingEvent : public CSalesEvent
{
public:
    explicit CShiftClosingEvent(QObject *parent = nullptr);
};

#endif // CSHIFTCLOSINGEVENT_H
