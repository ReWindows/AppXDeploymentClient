#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 108 member(s).
namespace Windows::Management::Deployment::Internal {
class PackageManagerInternal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOptionalPackageToVolumeByPackageFullNameAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@00PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long AddOptionalPackageToVolumeByPackageFullNameAsync(HSTRING__*, int, int, WindissectOpaque *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@5@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@75@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@PEAUHSTRING__@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@75@@Z
    virtual long AddPackageAsync(WindissectOpaque *, WindissectOpaque *, int, int, WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageToVolumeAndOptionalPackagesAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@5@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@75@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@PEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@975@1PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@75@@Z
    virtual long AddPackageToVolumeAndOptionalPackagesAsync(WindissectOpaque *, WindissectOpaque *, int, int, WindissectOpaque *, HSTRING__*, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageToVolumeAndOptionalPackagesForUserAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@5@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@75@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@PEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@975@1PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@75@_K@Z
    virtual long AddPackageToVolumeAndOptionalPackagesForUserAsync(WindissectOpaque *, WindissectOpaque *, int, int, WindissectOpaque *, HSTRING__*, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *, uint64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPackageStatusCustomInstallBlockingForUser@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@@Z
    virtual long ClearPackageStatusCustomInstallBlockingForUser(HSTRING__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndPersistAppExecutionAlias@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@0@Z
    virtual long CreateAndPersistAppExecutionAlias(HSTRING__* const, HSTRING__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePackageIsRegistered@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long EnsurePackageIsRegistered(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePackageIsRegisteredByAumid@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long EnsurePackageIsRegisteredByAumid(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePackageIsRegisteredByAumidForUser@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@_K@Z
    virtual long EnsurePackageIsRegisteredByAumidForUser(HSTRING__*, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePackageIsRegisteredByFamilyNameAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long EnsurePackageIsRegisteredByFamilyNameAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePackageIsRegisteredByFamilyNameForUserAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@_KPEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long EnsurePackageIsRegisteredByFamilyNameForUserAsync(HSTRING__*, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePackageIsRegisteredByFamilyNameForUserWithExtendedOptionsAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@_KW4DeploymentOptionsInternal@2345@W4DeploymentOptionsInternal2@2345@W4DeploymentOperationPriority@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long EnsurePackageIsRegisteredByFamilyNameForUserWithExtendedOptionsAsync(HSTRING__*, uint64_t, int, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePackageIsRegisteredByFamilyNameForUserWithOptionsAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@_KW4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long EnsurePackageIsRegisteredByFamilyNameForUserWithOptionsAsync(HSTRING__*, uint64_t, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePackageIsRegisteredByFamilyNameWithExtendedOptionsAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4DeploymentOptionsInternal@2345@W4DeploymentOptionsInternal2@2345@W4DeploymentOperationPriority@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long EnsurePackageIsRegisteredByFamilyNameWithExtendedOptionsAsync(HSTRING__*, int, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePackageIsRegisteredByFamilyNameWithOptionsAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long EnsurePackageIsRegisteredByFamilyNameWithOptionsAsync(HSTRING__*, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePackageIsRegisteredForUser@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@_K@Z
    virtual long EnsurePackageIsRegisteredForUser(HSTRING__*, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackageVolumeByMediaId@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAPEAUIPackageVolume@345@@Z
    virtual long FindPackageVolumeByMediaId(HSTRING__* const, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByPackageFamilyName@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long FindPackagesByPackageFamilyName(HSTRING__* const, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratePreviewTiles@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long GeneratePreviewTiles(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeploymentRequestsFromQueue@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAU?$IIterable@PEAVClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@@Collections@Foundation@5@@Z
    virtual long GetDeploymentRequestsFromQueue(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDiskSpaceFreedOnPackageMove@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IIterable@PEAVDiskUsageInformation@Internal@Deployment@Management@Windows@@@Collections@Foundation@5@@Z
    virtual long GetDiskSpaceFreedOnPackageMove(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDiskSpaceFreedOnPackageRemoval@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IIterable@PEAVDiskUsageInformation@Internal@Deployment@Management@Windows@@@Collections@Foundation@5@@Z
    virtual long GetDiskSpaceFreedOnPackageRemoval(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDiskSpaceRequiredForPackageMove@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAUIPackageVolume@345@PEAPEAUIDiskUsageInformation@2345@@Z
    virtual long GetDiskSpaceRequiredForPackageMove(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDiskUsageForUupProductForLocalService@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEA_K1@Z
    virtual long GetDiskUsageForUupProductForLocalService(HSTRING__*, uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullNameStatusForUser@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@0PEAI@Z
    virtual long GetPackageFullNameStatusForUser(HSTRING__* const, HSTRING__* const, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageManagerInternal@Internal@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageManagerInternal@Internal@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkUplevelProvisionedPausedPackagesAsStaged@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@@Z
    virtual long MarkUplevelProvisionedPausedPackagesAsStaged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveMainPackageWithOptionalPackagesToVolumeAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4DeploymentOptionsInternal@2345@PEAUIPackageVolume@345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long MoveMainPackageWithOptionalPackagesToVolumeAsync(HSTRING__*, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDemandRegisterPackageAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long OnDemandRegisterPackageAsync(HSTRING__*, int, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDemandRegisterPackagesAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@W4DeploymentOptionsInternal@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@85@@Z
    virtual long OnDemandRegisterPackagesAsync(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReIndexPackages@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJ_K@Z
    virtual long ReIndexPackages(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateHungRequests@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJXZ
    virtual long ReevaluateHungRequests();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@5@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@75@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@75@@Z
    virtual long RegisterPackageAsync(WindissectOpaque *, WindissectOpaque *, int, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageByFamilyNameAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@PEAU6@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@95@@Z
    virtual long RegisterPackageByFamilyNameAsync(HSTRING__* const, WindissectOpaque *, int, int, WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageByFamilyNameForUserAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@PEAU6@_KPEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@95@@Z
    virtual long RegisterPackageByFamilyNameForUserAsync(HSTRING__* const, WindissectOpaque *, int, int, WindissectOpaque *, HSTRING__*, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageByFullNameAndOptionalPackagesForUserAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@1W4DeploymentOptionsInternal@2345@W4DeploymentOptionsInternal2@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@_KPEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@95@@Z
    virtual long RegisterPackageByFullNameAndOptionalPackagesForUserAsync(HSTRING__* const, WindissectOpaque *, WindissectOpaque *, int, int, int, WindissectOpaque *, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageByFullNameAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@95@@Z
    virtual long RegisterPackageByFullNameAsync(HSTRING__* const, WindissectOpaque *, int, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageByFullNameForUserAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@W4DeploymentOptionsInternal@2345@_KPEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@95@@Z
    virtual long RegisterPackageByFullNameForUserAsync(HSTRING__* const, WindissectOpaque *, int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageByFullNameWithExtendedOptionsAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@W4DeploymentOptionsInternal@2345@W4DeploymentOptionsInternal2@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@95@@Z
    virtual long RegisterPackageByFullNameWithExtendedOptionsAsync(HSTRING__* const, WindissectOpaque *, int, int, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageFamilyForActivation@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@_KPEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long RegisterPackageFamilyForActivation(HSTRING__* const, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageOnLogonForUserAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@0W4DeploymentOptionsInternal@2345@0PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long RegisterPackageOnLogonForUserAsync(HSTRING__*, HSTRING__*, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageWithAppDataVolumeForUserAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@5@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@75@W4DeploymentOptionsInternal@2345@PEAUIPackageVolume@345@_KPEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@75@@Z
    virtual long RegisterPackageWithAppDataVolumeForUserAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackagesByFamilyNameAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@0W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@PEAUHSTRING__@@4PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@85@@Z
    virtual long RegisterPackagesByFamilyNameAsync(WindissectOpaque *, WindissectOpaque *, int, int, WindissectOpaque *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackagesByFamilyNameForUserAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@0W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@_KPEAUIPackageVolume@345@PEAUHSTRING__@@5PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@85@@Z
    virtual long RegisterPackagesByFamilyNameForUserAsync(WindissectOpaque *, WindissectOpaque *, int, int, uint64_t, WindissectOpaque *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackagesByFamilyNameForUserWithExtendedOptionsAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@0W4DeploymentOptionsInternal@2345@W4DeploymentOptionsInternal2@2345@W4DeploymentOperationPriority@2345@_KPEAUIPackageVolume@345@PEAUHSTRING__@@6PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@85@@Z
    virtual long RegisterPackagesByFamilyNameForUserWithExtendedOptionsAsync(WindissectOpaque *, WindissectOpaque *, int, int, int, uint64_t, WindissectOpaque *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackagesByFamilyNameWithTokenAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@0W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAUITokenHandle@2Handles@85@PEAUIPackageVolume@345@PEAUHSTRING__@@5PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@85@@Z
    virtual long RegisterPackagesByFamilyNameWithTokenAsync(WindissectOpaque *, WindissectOpaque *, int, int, WindissectOpaque *, WindissectOpaque *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackagesWithAppDataVolumeForUserAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@Foundation@5@0W4DeploymentOptionsInternal@2345@PEAUIPackageVolume@345@_KPEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@85@@Z
    virtual long RegisterPackagesWithAppDataVolumeForUserAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, uint64_t, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemediateMutableMsixvcPackagesAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long RemediateMutableMsixvcPackagesAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOptionalPackagesByFullNameAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@85@@Z
    virtual long RemoveOptionalPackagesByFullNameAsync(WindissectOpaque *, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePackageAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long RemovePackageAsync(HSTRING__* const, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePackageByUriForUserSidAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@5@QEAUHSTRING__@@W4DeploymentOptionsInternal@2345@W4DeploymentOptionsInternal2@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@75@@Z
    virtual long RemovePackageByUriForUserSidAsync(WindissectOpaque *, HSTRING__* const, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePackageForUserAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@_KPEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long RemovePackageForUserAsync(HSTRING__* const, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePackageForUserSidAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@0W4DeploymentOptionsInternal@2345@W4DeploymentOptionsInternal2@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long RemovePackageForUserSidAsync(HSTRING__* const, HSTRING__* const, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePackageWithExtendedOptionsAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@W4DeploymentOptionsInternal@2345@W4DeploymentOptionsInternal2@2345@W4DeploymentOperationPriority@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long RemovePackageWithExtendedOptionsAsync(HSTRING__* const, int, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePackageWithOptionsForUserAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@W4DeploymentOptionsInternal@2345@_KPEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long RemovePackageWithOptionsForUserAsync(HSTRING__* const, int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePackagesByFullNameAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@85@@Z
    virtual long RemovePackagesByFullNameAsync(WindissectOpaque *, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepairRegistrationForPackageAndDependenciesAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@W4DeploymentOperationPriority@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long RepairRegistrationForPackageAndDependenciesAsync(HSTRING__* const, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepairUupProductByUriAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@5@@Z
    virtual long RepairUupProductByUriAsync(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAllAppDataAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@85@@Z
    virtual long ResetAllAppDataAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAppDataAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long ResetAppDataAsync(HSTRING__* const, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetPackageAndRepairRegistrationForDependenciesAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@W4DeploymentOperationPriority@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long ResetPackageAndRepairRegistrationForDependenciesAsync(HSTRING__* const, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetPackageOffloadingStatus@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@0@Z
    virtual long ResetPackageOffloadingStatus(HSTRING__* const, HSTRING__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetUupProductByUriAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@5@@Z
    virtual long ResetUupProductByUriAsync(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMutablePackagesOnlineAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIPackageVolume@345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long SetMutablePackagesOnlineAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageOffline@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@@Z
    virtual long SetPackageOffline(HSTRING__* const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageOnline@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@@Z
    virtual long SetPackageOnline(HSTRING__* const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageStatusBlocking@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@@Z
    virtual long SetPackageStatusBlocking(HSTRING__* const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageStatusBlockingForUser@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@@Z
    virtual long SetPackageStatusBlockingForUser(HSTRING__* const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageStatusMachineRegisterOnRepair@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@@Z
    virtual long SetPackageStatusMachineRegisterOnRepair(HSTRING__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupOutdatedPackagesForReRegistration@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@@Z
    virtual long SetupOutdatedPackagesForReRegistration(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupPackagesForReRegistration@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJ_KPEAUHSTRING__@@@Z
    virtual long SetupPackagesForReRegistration(uint64_t, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StagePackageAndOptionalPackagesAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@5@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@75@W4DeploymentOptionsInternal@2345@1PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@75@@Z
    virtual long StagePackageAndOptionalPackagesAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StagePackageAndOptionalPackagesForAppInstallerOperationAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@5@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@75@W4DeploymentOptionsInternal@2345@1PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@75@@Z
    virtual long StagePackageAndOptionalPackagesForAppInstallerOperationAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StagePackageAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@5@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@75@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@PEAUHSTRING__@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@75@@Z
    virtual long StagePackageAsync(WindissectOpaque *, WindissectOpaque *, int, int, WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StagePackageToVolumeAndOptionalPackagesAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@5@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@75@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@PEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@975@5PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@75@@Z
    virtual long StagePackageToVolumeAndOptionalPackagesAsync(WindissectOpaque *, WindissectOpaque *, int, int, WindissectOpaque *, HSTRING__*, WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StagePackageToVolumeAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@5@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@75@W4DeploymentOptionsInternal@2345@W4DeploymentOptionsInternal2@2345@W4DeploymentOperationPriority@2345@PEAUIPackageVolume@345@PEAUHSTRING__@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@75@@Z
    virtual long StagePackageToVolumeAsync(WindissectOpaque *, WindissectOpaque *, int, int, int, WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StageUserDataAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4DeploymentOptionsInternal@2345@W4DeploymentOperationPriority@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@5@@Z
    virtual long StageUserDataAsync(HSTRING__*, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StageUserDataForPackagesAsync@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@W4DeploymentOptionsInternal@2345@W4DeploymentOptionsInternal2@2345@W4DeploymentOperationPriority@2345@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@95@@Z
    virtual long StageUserDataForPackagesAsync(HSTRING__* const, WindissectOpaque *, int, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePackageUsingAppInstallerFile@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long UpdatePackageUsingAppInstallerFile(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePackageUsingAppInstallerFileForUser@PackageManagerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@_K@Z
    virtual long UpdatePackageUsingAppInstallerFileForUser(HSTRING__*, uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackagesByFamilyNameWithImpersonationAsyncImpl@PackageManagerInternal@Internal@Deployment@Management@Windows@@AEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@0W4DeploymentOptionsInternal@2345@W4DeploymentOptionsInternal2@2345@W4DeploymentOperationPriority@2345@_KPEAUITokenHandle@2Handles@85@PEAUIPackageVolume@345@PEAUHSTRING__@@7PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@85@@Z
    long RegisterPackagesByFamilyNameWithImpersonationAsyncImpl(WindissectOpaque *, WindissectOpaque *, int, int, int, uint64_t, WindissectOpaque *, WindissectOpaque *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::Management::Deployment::Internal
