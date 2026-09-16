#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 20 member(s).
namespace Windows::Management::Deployment {
class UpdateSharedPackageContainerOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UpdateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UpdateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UpdateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UpdateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@UpdateSharedPackageContainerOptions@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@UpdateSharedPackageContainerOptions@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UpdateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UpdateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceAppShutdown@UpdateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_ForceAppShutdown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequirePackagesPresent@UpdateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_RequirePackagesPresent(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForceAppShutdown@UpdateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_ForceAppShutdown(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RequirePackagesPresent@UpdateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_RequirePackagesPresent(unsigned char);
};
} // namespace Windows::Management::Deployment
