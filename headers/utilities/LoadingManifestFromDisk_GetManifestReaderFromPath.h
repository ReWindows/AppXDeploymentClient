#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 4 member(s).
namespace AppXDeploymentServerTelemetry {
class LoadingManifestFromDisk_GetManifestReaderFromPath {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LoadingManifestFromDisk_GetManifestReaderFromPath@AppXDeploymentServerTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LoadingManifestFromDisk_GetManifestReaderFromPath@AppXDeploymentServerTelemetry@@QEAA@XZ
    ~LoadingManifestFromDisk_GetManifestReaderFromPath();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LoadingManifestFromDisk_GetManifestReaderFromPath@AppXDeploymentServerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LoadingManifestFromDisk_GetManifestReaderFromPath@AppXDeploymentServerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppXDeploymentServerTelemetry
