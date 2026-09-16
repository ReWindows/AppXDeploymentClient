#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 5 member(s).
namespace AppXDeploymentServerTelemetry {
class FileInUse {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FileInUse@AppXDeploymentServerTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileInUse@AppXDeploymentServerTelemetry@@QEAA@XZ
    ~FileInUse();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FileInUse@AppXDeploymentServerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FileInUse@AppXDeploymentServerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppXDeploymentServerTelemetry
