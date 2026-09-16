#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 3 member(s).
namespace Common {
class AutoNoImpersonateDuringScope {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropImpersonation@AutoNoImpersonateDuringScope@Common@@QEAAJXZ
    long DropImpersonation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoNoImpersonateDuringScope@Common@@QEAA@XZ
    ~AutoNoImpersonateDuringScope();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeThreadToken@AutoNoImpersonateDuringScope@Common@@AEAAJPEAX@Z
    long ChangeThreadToken(void *);
};
} // namespace Common
