#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 4 member(s).
namespace AppXDeploymentClientTelemetry {
class SetContentGroupState {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SetContentGroupState@AppXDeploymentClientTelemetry@@QEAA@$$QEAV01@@Z
    SetContentGroupState(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetContentGroupState@AppXDeploymentClientTelemetry@@QEAA@XZ
    ~SetContentGroupState();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetContentGroupState@AppXDeploymentClientTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetContentGroupState@AppXDeploymentClientTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppXDeploymentClientTelemetry
