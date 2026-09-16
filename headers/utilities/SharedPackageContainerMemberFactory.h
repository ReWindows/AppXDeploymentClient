#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 4 member(s).
namespace Windows::Management::Deployment {
class SharedPackageContainerMemberFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@SharedPackageContainerMemberFactory@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUISharedPackageContainerMember@234@@Z
    virtual long CreateInstance(HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedPackageContainerMemberFactory@Deployment@Management@Windows@@QEAA@XZ
    SharedPackageContainerMemberFactory();
};
} // namespace Windows::Management::Deployment
