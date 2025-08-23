#ifndef CSECURITYGROUP_H
#define CSECURITYGROUP_H

#include "CSecLabeledObject.h"
#include "BuksanCommonLib_global.h"
class BUKSANCOMMONLIB_EXPORT CSecurityGroup : public CSecLabeledObject
{
public:
    explicit CSecurityGroup(QObject *parent = nullptr);
};

#endif // CSECURITYGROUP_H
