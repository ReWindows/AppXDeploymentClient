#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 23 member(s).
namespace Windows::Management::Deployment {
class SharedPackageContainerManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SharedPackageContainerManager@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContainer@SharedPackageContainerManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAUICreateSharedPackageContainerOptions@234@PEAPEAUICreateSharedPackageContainerResult@234@@Z
    virtual long CreateContainer(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteContainer@SharedPackageContainerManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAUIDeleteSharedPackageContainerOptions@234@PEAPEAUIDeleteSharedPackageContainerResult@234@@Z
    virtual long DeleteContainer(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindContainers@SharedPackageContainerManager@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVSharedPackageContainer@Deployment@Management@Windows@@@Collections@Foundation@4@@Z
    virtual long FindContainers(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindContainersWithOptions@SharedPackageContainerManager@Deployment@Management@Windows@@UEAAJPEAUIFindSharedPackageContainerOptions@234@PEAPEAU?$IVector@PEAVSharedPackageContainer@Deployment@Management@Windows@@@Collections@Foundation@4@@Z
    virtual long FindContainersWithOptions(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainer@SharedPackageContainerManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUISharedPackageContainer@234@@Z
    virtual long GetContainer(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SharedPackageContainerManager@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SharedPackageContainerManager@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SharedPackageContainerManager@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SharedPackageContainerManager@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SharedPackageContainerManager@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SharedPackageContainerManager@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SharedPackageContainerManager@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedPackageContainerManager@Deployment@Management@Windows@@QEAA@XZ
    SharedPackageContainerManager();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedPackageContainerManager@Deployment@Management@Windows@@UEAA@XZ
    virtual ~SharedPackageContainerManager();
};
} // namespace Windows::Management::Deployment
