#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 29 member(s).
namespace Windows::Management::Deployment {
class PackageAllUserProvisioningOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageAllUserProvisioningOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageAllUserProvisioningOptions@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageAllUserProvisioningOptions@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageAllUserProvisioningOptions@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageAllUserProvisioningOptions@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageAllUserProvisioningOptions@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageAllUserProvisioningOptions@Deployment@Management@Windows@@QEAA@XZ
    PackageAllUserProvisioningOptions();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageAllUserProvisioningOptions@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageAllUserProvisioningOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PackageAllUserProvisioningOptions@Deployment@Management@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeferAutomaticRegistration@PackageAllUserProvisioningOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_DeferAutomaticRegistration(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OptionalPackageFamilyNames@PackageAllUserProvisioningOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_OptionalPackageFamilyNames(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProjectionOrderPackageFamilyNames@PackageAllUserProvisioningOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_ProjectionOrderPackageFamilyNames(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeferAutomaticRegistration@PackageAllUserProvisioningOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_DeferAutomaticRegistration(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageAllUserProvisioningOptions@Deployment@Management@Windows@@UEAA@XZ
    virtual ~PackageAllUserProvisioningOptions();
};
} // namespace Windows::Management::Deployment
