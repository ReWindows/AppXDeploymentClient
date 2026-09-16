#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 6 member(s).
namespace Windows::Management::Deployment {
class SharedPackageContainerManagerStatics {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@SharedPackageContainerManagerStatics@Deployment@Management@Windows@@UEAAJPEAPEAUISharedPackageContainerManager@234@@Z
    virtual long GetDefault(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForProvisioning@SharedPackageContainerManagerStatics@Deployment@Management@Windows@@UEAAJPEAPEAUISharedPackageContainerManager@234@@Z
    virtual long GetForProvisioning(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@SharedPackageContainerManagerStatics@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUISharedPackageContainerManager@234@@Z
    virtual long GetForUser(HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedPackageContainerManagerStatics@Deployment@Management@Windows@@QEAA@XZ
    SharedPackageContainerManagerStatics();
};
} // namespace Windows::Management::Deployment
