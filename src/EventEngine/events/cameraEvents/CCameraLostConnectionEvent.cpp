#include "EventEngine/events/cameraEvents/CCameraLostConnectionEvent.h"

CCameraLostConnectionEvent::CCameraLostConnectionEvent(QObject *parent)
    : CCameraEvent{parent}
{
    m_nSignature = nSignature::CameraLostConnection;
}
