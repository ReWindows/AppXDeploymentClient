#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 26 member(s).
namespace Windows::Management::Deployment::Internal {
class PackageManagerRepairAclsInternal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageManagerRepairAclsInternal@Internal@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageManagerRepairAclsInternal@Internal@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageManagerRepairAclsInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageManagerRepairAclsInternal@Internal@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageManagerRepairAclsInternal@Internal@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageManagerRepairAclsInternal@Internal@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkLocalExperiencePacksForPriRemerge@PackageManagerRepairAclsInternal@Internal@Deployment@Management@Windows@@UEAAJXZ
    virtual long MarkLocalExperiencePacksForPriRemerge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeSystemResourceFiles@PackageManagerRepairAclsInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAPEAU6@@Z
    virtual long MergeSystemResourceFiles(HSTRING__* const, HSTRING__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageManagerRepairAclsInternal@Internal@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageManagerRepairAclsInternal@Internal@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepairResourcesPriAcls@PackageManagerRepairAclsInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@@Z
    virtual long RepairResourcesPriAcls(HSTRING__* const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetModifiedPackageStatus@PackageManagerRepairAclsInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@@Z
    virtual long SetModifiedPackageStatus(HSTRING__* const);
};
} // namespace Windows::Management::Deployment::Internal
