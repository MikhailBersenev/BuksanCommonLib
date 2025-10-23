#ifndef CNEWITEMINRECEIPTEVENT_H
#define CNEWITEMINRECEIPTEVENT_H

#include "BuksanCommonLib_global.h"
#include "CSalesEvent.h"

class BUKSANCOMMONLIB_EXPORT CNewItemInReceiptEvent : public CSalesEvent
{
public:
    explicit CNewItemInReceiptEvent(QObject *parent = nullptr);
};

#endif // CNEWITEMINRECEIPTEVENT_H
