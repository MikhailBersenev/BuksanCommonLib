#include "CEventSender.h"

CEventSender::CEventSender(QObject *parent, QList<CEventEngine*> *vEngines)
    : QObject{parent},
    m_vEngines{vEngines}
{

}

bool CEventSender::fSendEvent(CEvent *pEvent)
{
    bool bRes = false;
    foreach(CEventEngine* pEventEngine, *m_vEngines) {
        bRes = pEventEngine->fSend(pEvent);
    }

    return bRes;
}
