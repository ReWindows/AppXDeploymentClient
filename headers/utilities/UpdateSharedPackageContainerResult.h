#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 17 member(s).
namespace Windows::Management::Deployment {
class UpdateSharedPackageContainerResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UpdateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UpdateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UpdateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UpdateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UpdateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UpdateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UpdateSharedPackageContainerResult@Deployment@Management@Windows@@QEAA@XZ
    UpdateSharedPackageContainerResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedError@UpdateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAJ@Z
    virtual long get_ExtendedError(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@UpdateSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAW4SharedPackageContainerOperationStatus@234@@Z
    virtual long get_Status(int *);
};
} // namespace Windows::Management::Deployment
