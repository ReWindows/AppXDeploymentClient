#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 48 member(s).
namespace Windows::Management::Deployment {
class RegisterPackageOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RegisterPackageOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@RegisterPackageOptions@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@RegisterPackageOptions@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RegisterPackageOptions@Deployment@Management@Windows@@QEAA@XZ
    RegisterPackageOptions();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RegisterPackageOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowUnsigned@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_AllowUnsigned(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppDataVolume@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAUIPackageVolume@234@@Z
    virtual long get_AppDataVolume(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeferRegistrationWhenPackagesAreInUse@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_DeferRegistrationWhenPackagesAreInUse(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DependencyPackageUris@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long get_DependencyPackageUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeveloperMode@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_DeveloperMode(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpectedDigests@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IMap@PEAVUri@Foundation@Windows@@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_ExpectedDigests(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExternalLocationUri@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long get_ExternalLocationUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceAppShutdown@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_ForceAppShutdown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceTargetAppShutdown@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_ForceTargetAppShutdown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceUpdateFromAnyVersion@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_ForceUpdateFromAnyVersion(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallAllResources@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_InstallAllResources(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OptionalPackageFamilyNames@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_OptionalPackageFamilyNames(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StageInPlace@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_StageInPlace(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllowUnsigned@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_AllowUnsigned(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AppDataVolume@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAUIPackageVolume@234@@Z
    virtual long put_AppDataVolume(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeferRegistrationWhenPackagesAreInUse@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_DeferRegistrationWhenPackagesAreInUse(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeveloperMode@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_DeveloperMode(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExternalLocationUri@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long put_ExternalLocationUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForceAppShutdown@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_ForceAppShutdown(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForceTargetAppShutdown@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_ForceTargetAppShutdown(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForceUpdateFromAnyVersion@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_ForceUpdateFromAnyVersion(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InstallAllResources@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_InstallAllResources(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StageInPlace@RegisterPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_StageInPlace(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegisterPackageOptions@Deployment@Management@Windows@@UEAA@XZ
    virtual ~RegisterPackageOptions();
};
} // namespace Windows::Management::Deployment
