#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 19 member(s).
namespace Windows::Management::Deployment {
class CreateSharedPackageContainerResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CreateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CreateSharedPackageContainerResult@Deployment@Management@Windows@@QEAA@XZ
    CreateSharedPackageContainerResult();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CreateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CreateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CreateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CreateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CreateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Container@CreateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAPEAUISharedPackageContainer@234@@Z
    virtual long get_Container(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedError@CreateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAJ@Z
    virtual long get_ExtendedError(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@CreateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAW4SharedPackageContainerOperationStatus@234@@Z
    virtual long get_Status(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateSharedPackageContainerResult@Deployment@Management@Windows@@UEAA@XZ
    virtual ~CreateSharedPackageContainerResult();
};
} // namespace Windows::Management::Deployment
