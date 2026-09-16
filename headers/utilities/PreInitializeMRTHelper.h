#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 3 member(s).
namespace Common::Deployment {
class PreInitializeMRTHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PreInitializeMRTHelper@Deployment@Common@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreInitialize@PreInitializeMRTHelper@Deployment@Common@@QEAAJPEBG0_N1@Z
    long PreInitialize(unsigned short const *, unsigned short const *, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PreInitializeMRTHelper@Deployment@Common@@QEAA@XZ
    ~PreInitializeMRTHelper();
};
} // namespace Common::Deployment
