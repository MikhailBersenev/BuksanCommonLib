#include "EventEngine/events/cameraEvents/CCameraScreenshotEvent.h"

CCameraScreenshotEvent::CCameraScreenshotEvent(QObject *parent)
    : CCameraEvent{parent}
{
    m_nSignature = nSignature::CameraScreenshot;
}
