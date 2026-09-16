#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 3 member(s).
namespace Common::Deployment {
class EndOfLifeSet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@EndOfLifeSet@Deployment@Common@@SAXXZ
    static void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageEndOfLife@EndOfLifeSet@Deployment@Common@@SAJPEBGAEA_N@Z
    static long IsPackageEndOfLife(unsigned short const *, bool &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateAppxProvisionXmlLists@EndOfLifeSet@Deployment@Common@@CAJXZ
    static long PopulateAppxProvisionXmlLists();
};
} // namespace Common::Deployment
