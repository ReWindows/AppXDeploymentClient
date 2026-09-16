#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 5 member(s).
namespace Windows::Management::Deployment {
class AppInstallerManagerStatics {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppInstallerManagerStatics@Deployment@Management@Windows@@QEAA@XZ
    AppInstallerManagerStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@AppInstallerManagerStatics@Deployment@Management@Windows@@UEAAJPEAPEAUIAppInstallerManager@234@@Z
    virtual long GetDefault(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForSystem@AppInstallerManagerStatics@Deployment@Management@Windows@@UEAAJPEAPEAUIAppInstallerManager@234@@Z
    virtual long GetForSystem(WindissectOpaque * *);
};
} // namespace Windows::Management::Deployment
