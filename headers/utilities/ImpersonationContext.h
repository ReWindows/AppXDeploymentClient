#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 5 member(s).
namespace Common {
class ImpersonationContext {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveToken@ImpersonationContext@Common@@SAJPEAPEAX@Z
    static long GetEffectiveToken(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadImpersonationToken@ImpersonationContext@Common@@SAJPEAPEAX@Z
    static long GetThreadImpersonationToken(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Impersonate@ImpersonationContext@Common@@QEAAJPEAX@Z
    long Impersonate(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@ImpersonationContext@Common@@QEAAXXZ
    void Revert();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImpersonationContext@Common@@QEAA@XZ
    ~ImpersonationContext();
};
} // namespace Common
