#include "EventEngine/events/cameraEvents/CCameraStopRecordEvent.h"

CCameraStopRecordEvent::CCameraStopRecordEvent(QObject *parent)
    : CCameraEvent{parent}
{
    m_nSignature = nSignature::CameraStopRecord;
}
