#include "CCameraRecordStartEvent.h"

CCameraRecordStartEvent::CCameraRecordStartEvent(QObject *parent)
    : CCameraEvent{parent}
{
    m_nSignature = nSignature::CameraStartRecord;
}

void CCameraRecordStartEvent::fSetDevice(QString strDevice)
{
    m_strFullLog += " ID 6 " + strDevice;
}
