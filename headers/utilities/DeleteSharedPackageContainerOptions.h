#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 20 member(s).
namespace Windows::Management::Deployment {
class DeleteSharedPackageContainerOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DeleteSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DeleteSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DeleteSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DeleteSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DeleteSharedPackageContainerOptions@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DeleteSharedPackageContainerOptions@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DeleteSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DeleteSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllUsers@DeleteSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_AllUsers(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceAppShutdown@DeleteSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_ForceAppShutdown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllUsers@DeleteSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_AllUsers(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForceAppShutdown@DeleteSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_ForceAppShutdown(unsigned char);
};
} // namespace Windows::Management::Deployment
