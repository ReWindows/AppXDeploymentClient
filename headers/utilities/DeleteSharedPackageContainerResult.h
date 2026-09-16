#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 17 member(s).
namespace Windows::Management::Deployment {
class DeleteSharedPackageContainerResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DeleteSharedPackageContainerResult@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DeleteSharedPackageContainerResult@Deployment@Management@Windows@@QEAA@XZ
    DeleteSharedPackageContainerResult();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DeleteSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DeleteSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DeleteSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DeleteSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DeleteSharedPackageContainerResult@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedError@DeleteSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAJ@Z
    virtual long get_ExtendedError(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@DeleteSharedPackageContainerResult@Deployment@Management@Windows@@UEAAJPEAW4SharedPackageContainerOperationStatus@234@@Z
    virtual long get_Status(int *);
};
} // namespace Windows::Management::Deployment
