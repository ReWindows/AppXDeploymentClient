#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 38 member(s).
namespace Windows::Management::Deployment {
class RemovePackageOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RemovePackageOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RemovePackageOptions@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RemovePackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RemovePackageOptions@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@RemovePackageOptions@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@RemovePackageOptions@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RemovePackageOptions@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RemovePackageOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RemovePackageOptions@Deployment@Management@Windows@@QEAA@XZ
    RemovePackageOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RemovePackageOptions@Deployment@Management@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeferRemovalWhenPackagesAreInUse@RemovePackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_DeferRemovalWhenPackagesAreInUse(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreserveApplicationData@RemovePackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_PreserveApplicationData(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreserveRoamableApplicationData@RemovePackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_PreserveRoamableApplicationData(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoveForAllUsers@RemovePackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_RemoveForAllUsers(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeferRemovalWhenPackagesAreInUse@RemovePackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_DeferRemovalWhenPackagesAreInUse(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreserveApplicationData@RemovePackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_PreserveApplicationData(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreserveRoamableApplicationData@RemovePackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_PreserveRoamableApplicationData(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RemoveForAllUsers@RemovePackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_RemoveForAllUsers(unsigned char);
};
} // namespace Windows::Management::Deployment
