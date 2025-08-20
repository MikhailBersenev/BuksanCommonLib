#ifndef CEVENTENGINE_H
#define CEVENTENGINE_H

#include <QObject>

#include "events/CEvent.h"

class CEventEngine : public QObject
{
    Q_OBJECT
public:
    virtual bool fSend(CEvent* pEvent) = 0;
protected:
    explicit CEventEngine(QObject *parent = nullptr);


signals:
};

#endif // CEVENTENGINE_H
