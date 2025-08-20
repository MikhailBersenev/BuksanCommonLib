#ifndef CEVENTSENDER_H
#define CEVENTSENDER_H

#include <QObject>

#include "CEventEngine.h"

class CEventSender : public QObject
{
    Q_OBJECT
public:
    explicit CEventSender(QObject *parent = nullptr,  QList<CEventEngine*> *vEngines = nullptr);
    bool fSendEvent(CEvent* pEvent);
private:
    QList<CEventEngine*> *m_vEngines;
signals:
};

#endif // CEVENTSENDER_H
