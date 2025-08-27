#include "CCamera.h"
#include <QDebug>
bool CCamera::fContinuousMove(float pan, float tilt, float zoom)
{
    Q_UNUSED(pan)
    Q_UNUSED(tilt)
    Q_UNUSED(zoom)

    qDebug() << "fContinuousMove is not supported";
    return false;
}

bool CCamera::fRelativeMove(float pan, float tilt, float zoom)
{
    Q_UNUSED(pan)
    Q_UNUSED(tilt)
    Q_UNUSED(zoom)

    qDebug() << "not supported";
    return false;
}

CCamera::CCamera(QObject *parent)
    : CSecLabeledObject{parent}
{}
