#include "CCameraEvent.h"

CCameraEvent::CCameraEvent(QObject *parent)
    : CEvent{parent}
{
    m_nSignatureType = nSignatureType::Camera;
}
