#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 20 member(s).
namespace Windows::Management::Deployment {
class SharedPackageContainerMember {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SharedPackageContainerMember@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SharedPackageContainerMember@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SharedPackageContainerMember@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SharedPackageContainerMember@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SharedPackageContainerMember@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SharedPackageContainerMember@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SharedPackageContainerMember@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SharedPackageContainerMember@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SharedPackageContainerMember@Deployment@Management@Windows@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedPackageContainerMember@Deployment@Management@Windows@@QEAA@XZ
    SharedPackageContainerMember();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@SharedPackageContainerMember@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedPackageContainerMember@Deployment@Management@Windows@@UEAA@XZ
    virtual ~SharedPackageContainerMember();
};
} // namespace Windows::Management::Deployment
