#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 2 member(s).
namespace Common::Deployment {
class PackageID {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageID@Deployment@Common@@QEAAJPEBGPEBUPACKAGE_VERSION@@0W4SRProcessorArchitecture@StateRepository@@00@Z
    long Initialize(unsigned short const *, PACKAGE_VERSION const *, unsigned short const *, int, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageID@Deployment@Common@@QEAA@XZ
    ~PackageID();
};
} // namespace Common::Deployment
