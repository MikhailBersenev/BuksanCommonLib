#ifndef CEVENTENGINE_H
#define CEVENTENGINE_H

#include <QObject>

#include "events/CEvent.h"
#include "BuksanCommonLib_global.h"
class CEventSender;

class BUKSANCOMMONLIB_EXPORT CEventEngine : public QObject
{
    Q_OBJECT
public:
    virtual bool fSend(CEvent* pEvent) = 0;
    virtual bool fSubscribe(CEventSender* pSender);
    virtual QString fGetNameString()  = 0;
protected:
    explicit CEventEngine(QObject *parent = nullptr);


signals:
};

#endif // CEVENTENGINE_H
