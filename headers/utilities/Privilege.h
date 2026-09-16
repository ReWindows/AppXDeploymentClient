#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 5 member(s).
namespace Common::Deployment {
class Privilege {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enable@Privilege@Deployment@Common@@QEAAJXZ
    long Enable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Privilege@Deployment@Common@@QEAAJJ@Z
    long Initialize(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@Privilege@Deployment@Common@@QEAAJXZ
    long Revert();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Privilege@Deployment@Common@@QEAA@XZ
    ~Privilege();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivilege@Privilege@Deployment@Common@@AEAAJPEAXAEBU_LUID@@_N@Z
    long SetPrivilege(void *, _LUID const &, bool);
};
} // namespace Common::Deployment
