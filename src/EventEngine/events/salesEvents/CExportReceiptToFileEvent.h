#ifndef CEXPORTRECEIPTTOFILEEVENT_H
#define CEXPORTRECEIPTTOFILEEVENT_H

#include "BuksanCommonLib_global.h"
#include "CSalesEvent.h"

class BUKSANCOMMONLIB_EXPORT CExportReceiptToFileEvent : public CSalesEvent
{
public:
    explicit CExportReceiptToFileEvent(QObject *parent = nullptr);
};

#endif // CEXPORTRECEIPTTOFILEEVENT_H
