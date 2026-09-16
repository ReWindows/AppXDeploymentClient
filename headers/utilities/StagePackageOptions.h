#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 56 member(s).
namespace Windows::Management::Deployment {
class StagePackageOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StagePackageOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@StagePackageOptions@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@StagePackageOptions@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StagePackageOptions@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StagePackageOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@StagePackageOptions@Deployment@Management@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StagePackageOptions@Deployment@Management@Windows@@QEAA@XZ
    StagePackageOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowUnsigned@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_AllowUnsigned(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DependencyPackageUris@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long get_DependencyPackageUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeveloperMode@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_DeveloperMode(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpectedDigests@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IMap@PEAVUri@Foundation@Windows@@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_ExpectedDigests(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExternalLocationUri@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long get_ExternalLocationUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceUpdateFromAnyVersion@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_ForceUpdateFromAnyVersion(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallAllResources@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_InstallAllResources(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OptionalPackageFamilyNames@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_OptionalPackageFamilyNames(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OptionalPackageUris@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long get_OptionalPackageUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageOperationPriority@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAW4PackageOperationPriority@234@@Z
    virtual long get_PackageOperationPriority(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RelatedPackageUris@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long get_RelatedPackageUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequiredContentGroupOnly@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_RequiredContentGroupOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StageInPlace@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_StageInPlace(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StubPackageOption@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAW4StubPackageOption@234@@Z
    virtual long get_StubPackageOption(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetVolume@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAPEAUIPackageVolume@234@@Z
    virtual long get_TargetVolume(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllowUnsigned@StagePackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_AllowUnsigned(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeveloperMode@StagePackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_DeveloperMode(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExternalLocationUri@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long put_ExternalLocationUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForceUpdateFromAnyVersion@StagePackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_ForceUpdateFromAnyVersion(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InstallAllResources@StagePackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_InstallAllResources(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageOperationPriority@StagePackageOptions@Deployment@Management@Windows@@UEAAJW4PackageOperationPriority@234@@Z
    virtual long put_PackageOperationPriority(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RequiredContentGroupOnly@StagePackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_RequiredContentGroupOnly(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StageInPlace@StagePackageOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_StageInPlace(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StubPackageOption@StagePackageOptions@Deployment@Management@Windows@@UEAAJW4StubPackageOption@234@@Z
    virtual long put_StubPackageOption(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetVolume@StagePackageOptions@Deployment@Management@Windows@@UEAAJPEAUIPackageVolume@234@@Z
    virtual long put_TargetVolume(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StagePackageOptions@Deployment@Management@Windows@@UEAA@XZ
    virtual ~StagePackageOptions();
};
} // namespace Windows::Management::Deployment
