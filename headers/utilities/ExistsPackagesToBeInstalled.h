#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 4 member(s).
namespace AppXDeploymentClientTelemetry {
class ExistsPackagesToBeInstalled {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ExistsPackagesToBeInstalled@AppXDeploymentClientTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExistsPackagesToBeInstalled@AppXDeploymentClientTelemetry@@QEAA@XZ
    ~ExistsPackagesToBeInstalled();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ExistsPackagesToBeInstalled@AppXDeploymentClientTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ExistsPackagesToBeInstalled@AppXDeploymentClientTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppXDeploymentClientTelemetry
