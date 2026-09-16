#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 90 member(s).
namespace Windows::Management::Deployment {
class AddPackageOptions {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AddPackageOptions@Deployment@Management@Windows@@QEAA@XZ
    AddPackageOptions();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AddPackageOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AddPackageOptions@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AddPackageOptions@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AddPackageOptions@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AddPackageOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AddPackageOptions@Deployment@Management@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowUnsigned@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_AllowUnsigned(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppRestoreRequest@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_AppRestoreRequest(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundTask@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_BackgroundTask(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeferRegistrationWhenPackagesAreInUse@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_DeferRegistrationWhenPackagesAreInUse(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DependencyPackageUris@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long get_DependencyPackageUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeploymentOperationPriority@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAW4DeploymentOperationPriority@Internal@234@@Z
    virtual long get_DeploymentOperationPriority(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeveloperMode@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_DeveloperMode(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisableUninstall@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_DisableUninstall(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpectedDigests@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IMap@PEAVUri@Foundation@Windows@@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_ExpectedDigests(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExternalLocationUri@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long get_ExternalLocationUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceAppShutdown@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_ForceAppShutdown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceTargetAppShutdown@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_ForceTargetAppShutdown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceUpdateFromAnyVersion@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_ForceUpdateFromAnyVersion(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallAllResources@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_InstallAllResources(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LimitToExistingPackages@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_LimitToExistingPackages(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LowPriorityRequest@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_LowPriorityRequest(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NormalPriorityRequest@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_NormalPriorityRequest(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OptionalPackageFamilyNames@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_OptionalPackageFamilyNames(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OptionalPackageUris@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long get_OptionalPackageUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageOperationPriority@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAW4PackageOperationPriority@234@@Z
    virtual long get_PackageOperationPriority(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RegisterAsSystem@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_RegisterAsSystem(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RelatedPackageUris@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long get_RelatedPackageUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequiredContentGroupOnly@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_RequiredContentGroupOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RetainFilesOnFailure@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_RetainFilesOnFailure(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StageInPlace@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_StageInPlace(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StubPackageOption@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAW4StubPackageOption@234@@Z
    virtual long get_StubPackageOption(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetUserContextToken@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEA_K@Z
    virtual long get_TargetUserContextToken(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetVolume@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAUIPackageVolume@234@@Z
    virtual long get_TargetVolume(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValidateDependencies@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_ValidateDependencies(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllowUnsigned@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_AllowUnsigned(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AppRestoreRequest@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_AppRestoreRequest(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BackgroundTask@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_BackgroundTask(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeferRegistrationWhenPackagesAreInUse@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_DeferRegistrationWhenPackagesAreInUse(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeploymentOperationPriority@AddPackageOptions@Deployment@Management@Windows@@UEAAJW4DeploymentOperationPriority@Internal@234@@Z
    virtual long put_DeploymentOperationPriority(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeveloperMode@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_DeveloperMode(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisableUninstall@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_DisableUninstall(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExternalLocationUri@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long put_ExternalLocationUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForceAppShutdown@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_ForceAppShutdown(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForceTargetAppShutdown@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_ForceTargetAppShutdown(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForceUpdateFromAnyVersion@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_ForceUpdateFromAnyVersion(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InstallAllResources@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_InstallAllResources(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LimitToExistingPackages@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_LimitToExistingPackages(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LowPriorityRequest@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_LowPriorityRequest(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NormalPriorityRequest@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_NormalPriorityRequest(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageOperationPriority@AddPackageOptions@Deployment@Management@Windows@@UEAAJW4PackageOperationPriority@234@@Z
    virtual long put_PackageOperationPriority(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RegisterAsSystem@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_RegisterAsSystem(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RequiredContentGroupOnly@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_RequiredContentGroupOnly(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RetainFilesOnFailure@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_RetainFilesOnFailure(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StageInPlace@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_StageInPlace(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StubPackageOption@AddPackageOptions@Deployment@Management@Windows@@UEAAJW4StubPackageOption@234@@Z
    virtual long put_StubPackageOption(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetUserContextToken@AddPackageOptions@Deployment@Management@Windows@@UEAAJ_K@Z
    virtual long put_TargetUserContextToken(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetVolume@AddPackageOptions@Deployment@Management@Windows@@UEAAJPEAUIPackageVolume@234@@Z
    virtual long put_TargetVolume(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValidateDependencies@AddPackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_ValidateDependencies(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddPackageOptions@Deployment@Management@Windows@@UEAA@XZ
    virtual ~AddPackageOptions();
};
} // namespace Windows::Management::Deployment
