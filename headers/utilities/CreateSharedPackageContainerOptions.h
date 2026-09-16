#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 23 member(s).
namespace Windows::Management::Deployment {
class CreateSharedPackageContainerOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CreateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CreateSharedPackageContainerOptions@Deployment@Management@Windows@@QEAA@XZ
    CreateSharedPackageContainerOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CreateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CreateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CreateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CreateSharedPackageContainerOptions@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CreateSharedPackageContainerOptions@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CreateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CreateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CreateCollisionOption@CreateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAW4SharedPackageContainerCreationCollisionOptions@234@@Z
    virtual long get_CreateCollisionOption(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceAppShutdown@CreateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_ForceAppShutdown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Members@CreateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVSharedPackageContainerMember@Deployment@Management@Windows@@@Collections@Foundation@4@@Z
    virtual long get_Members(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CreateCollisionOption@CreateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJW4SharedPackageContainerCreationCollisionOptions@234@@Z
    virtual long put_CreateCollisionOption(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForceAppShutdown@CreateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_ForceAppShutdown(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateSharedPackageContainerOptions@Deployment@Management@Windows@@UEAA@XZ
    virtual ~CreateSharedPackageContainerOptions();
};
} // namespace Windows::Management::Deployment
