#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 22 member(s).
namespace Windows::Management::Deployment {
class FindSharedPackageContainerOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FindSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FindSharedPackageContainerOptions@Deployment@Management@Windows@@QEAA@XZ
    FindSharedPackageContainerOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@FindSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@FindSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@FindSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@FindSharedPackageContainerOptions@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@FindSharedPackageContainerOptions@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FindSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FindSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@FindSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@FindSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Name@FindSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Name(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageFamilyName@FindSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PackageFamilyName(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindSharedPackageContainerOptions@Deployment@Management@Windows@@UEAA@XZ
    virtual ~FindSharedPackageContainerOptions();
};
} // namespace Windows::Management::Deployment
