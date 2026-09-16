#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 164 member(s).
namespace Windows::Management::Deployment {
class PackageManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@W4DeploymentOptions@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long AddPackageAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageByAppInstallerFileAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@W4AddPackageByAppInstallerOptions@234@PEAUIPackageVolume@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long AddPackageByAppInstallerFileAsync(WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageByUriAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAUIAddPackageOptions@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long AddPackageByUriAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageToVolumeAndOptionalPackagesAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@W4DeploymentOptions@234@PEAUIPackageVolume@234@PEAU?$IIterable@PEAUHSTRING__@@@864@1PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long AddPackageToVolumeAndOptionalPackagesAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageToVolumeAndRelatedSetAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@W4DeploymentOptions@234@PEAUIPackageVolume@234@PEAU?$IIterable@PEAUHSTRING__@@@864@11PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long AddPackageToVolumeAndRelatedSetAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageToVolumeAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@W4DeploymentOptions@234@PEAUIPackageVolume@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long AddPackageToVolumeAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageVolumeAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVPackageVolume@Deployment@Management@Windows@@@Foundation@4@@Z
    virtual long AddPackageVolumeAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageManager@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupPackageForUserAsync@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@0PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long CleanupPackageForUserAsync(HSTRING__* const, HSTRING__* const, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPackageStatus@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4PackageStatus@234@@Z
    virtual long ClearPackageStatus(HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeprovisionPackageForAllUsersAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long DeprovisionPackageForAllUsersAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackageByPackageFullName@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAPEAUIPackage@ApplicationModel@4@@Z
    virtual long FindPackageByPackageFullName(HSTRING__* const, ::Windows::ApplicationModel::IPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackageByUserSecurityIdPackageFullName@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@0PEAPEAUIPackage@ApplicationModel@4@@Z
    virtual long FindPackageByUserSecurityIdPackageFullName(HSTRING__* const, HSTRING__* const, ::Windows::ApplicationModel::IPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackageVolumeByName@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIPackageVolume@234@@Z
    virtual long FindPackageVolumeByName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackageVolumes@PackageManager@Deployment@Management@Windows@@UEAAJPEAPEAU?$IIterable@PEAVPackageVolume@Deployment@Management@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackageVolumes(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackages@PackageManager@Deployment@Management@Windows@@UEAAJPEAPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByNamePublisher@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@0PEAPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByNamePublisher(HSTRING__* const, HSTRING__* const, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByNamePublisherWithPackageTypes@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@0W4PackageTypes@234@PEAPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByNamePublisherWithPackageTypes(HSTRING__* const, HSTRING__* const, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByPackageFamilyName@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByPackageFamilyName(HSTRING__* const, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByPackageFamilyNameWithPackageTypes@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@W4PackageTypes@234@PEAPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByPackageFamilyNameWithPackageTypes(HSTRING__* const, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByUserSecurityId@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByUserSecurityId(HSTRING__* const, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByUserSecurityIdNamePublisher@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@00PEAPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByUserSecurityIdNamePublisher(HSTRING__* const, HSTRING__* const, HSTRING__* const, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByUserSecurityIdNamePublisherWithPackageTypes@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@00W4PackageTypes@234@PEAPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(HSTRING__* const, HSTRING__* const, HSTRING__* const, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByUserSecurityIdPackageFamilyName@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@0PEAPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByUserSecurityIdPackageFamilyName(HSTRING__* const, HSTRING__* const, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@0W4PackageTypes@234@PEAPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(HSTRING__* const, HSTRING__* const, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByUserSecurityIdWithPackageTypes@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@W4PackageTypes@234@PEAPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByUserSecurityIdWithPackageTypes(HSTRING__* const, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesWithPackageTypes@PackageManager@Deployment@Management@Windows@@UEAAJW4PackageTypes@234@PEAPEAU?$IIterable@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesWithPackageTypes(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindProvisionedPackages@PackageManager@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindProvisionedPackages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindUsers@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAPEAU?$IIterable@PEAVPackageUserInformation@Deployment@Management@Windows@@@Collections@Foundation@4@@Z
    virtual long FindUsers(HSTRING__* const, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultPackageVolume@PackageManager@Deployment@Management@Windows@@UEAAJPEAPEAUIPackageVolume@234@@Z
    virtual long GetDefaultPackageVolume(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageManager@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageStubPreference@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAW4PackageStubPreference@234@@Z
    virtual long GetPackageStubPreference(HSTRING__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageVolumesAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVPackageVolume@Deployment@Management@Windows@@@Collections@Foundation@Windows@@@Foundation@4@@Z
    virtual long GetPackageVolumesAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageManager@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageManager@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageManager@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageManager@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageRemovalPending@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsPackageRemovalPending(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageRemovalPendingByUri@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAE@Z
    virtual long IsPackageRemovalPendingByUri(WindissectOpaque *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageRemovalPendingByUriForUser@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAUHSTRING__@@PEAE@Z
    virtual long IsPackageRemovalPendingByUriForUser(WindissectOpaque *, HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageRemovalPendingForUser@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long IsPackageRemovalPendingForUser(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MovePackageToVolumeAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4DeploymentOptions@234@PEAUIPackageVolume@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long MovePackageToVolumeAsync(HSTRING__*, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageManager@Deployment@Management@Windows@@QEAA@XZ
    PackageManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvisionPackageForAllUsersAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long ProvisionPackageForAllUsersAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvisionPackageForAllUsersWithOptionsAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAUIPackageAllUserProvisioningOptions@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long ProvisionPackageForAllUsersWithOptionsAsync(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageManager@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@W4DeploymentOptions@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long RegisterPackageAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageByFamilyNameAndOptionalPackagesAsync@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@W4DeploymentOptions@234@PEAUIPackageVolume@234@1PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@84@@Z
    virtual long RegisterPackageByFamilyNameAndOptionalPackagesAsync(HSTRING__* const, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageByFullNameAsync@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@W4DeploymentOptions@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@84@@Z
    virtual long RegisterPackageByFullNameAsync(HSTRING__* const, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageByUriAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAUIRegisterPackageOptions@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long RegisterPackageByUriAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackageWithAppDataVolumeAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@W4DeploymentOptions@234@PEAUIPackageVolume@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long RegisterPackageWithAppDataVolumeAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPackagesByFullNameAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAUIRegisterPackageOptions@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@74@@Z
    virtual long RegisterPackagesByFullNameAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageManager@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePackageAsync@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long RemovePackageAsync(HSTRING__* const, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePackageByUriAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAUIRemovePackageOptions@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long RemovePackageByUriAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePackageVolumeAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIPackageVolume@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long RemovePackageVolumeAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePackageWithOptionsAsync@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@W4RemovalOptions@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long RemovePackageWithOptionsAsync(HSTRING__* const, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAddPackageAndRelatedSetAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@W4DeploymentOptions@234@PEAUIPackageVolume@234@PEAU?$IIterable@PEAUHSTRING__@@@864@11PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long RequestAddPackageAndRelatedSetAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAddPackageAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@W4DeploymentOptions@234@PEAUIPackageVolume@234@PEAU?$IIterable@PEAUHSTRING__@@@864@1PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long RequestAddPackageAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAddPackageByAppInstallerFileAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@W4AddPackageByAppInstallerOptions@234@PEAUIPackageVolume@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long RequestAddPackageByAppInstallerFileAsync(WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultPackageVolume@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIPackageVolume@234@@Z
    virtual long SetDefaultPackageVolume(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageState@PackageManager@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@W4PackageState@234@@Z
    virtual long SetPackageState(HSTRING__* const, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageStatus@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4PackageStatus@234@@Z
    virtual long SetPackageStatus(HSTRING__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageStubPreference@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4PackageStubPreference@234@@Z
    virtual long SetPackageStubPreference(HSTRING__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageVolumeOfflineAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIPackageVolume@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long SetPackageVolumeOfflineAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageVolumeOnlineAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIPackageVolume@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long SetPackageVolumeOnlineAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StagePackageAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long StagePackageAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StagePackageByUriAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAUIStagePackageOptions@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long StagePackageByUriAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StagePackageToVolumeAndOptionalPackagesAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@W4DeploymentOptions@234@PEAUIPackageVolume@234@PEAU?$IIterable@PEAUHSTRING__@@@864@1PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long StagePackageToVolumeAndOptionalPackagesAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StagePackageToVolumeAndRelatedSetAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@W4DeploymentOptions@234@PEAUIPackageVolume@234@PEAU?$IIterable@PEAUHSTRING__@@@864@11PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long StagePackageToVolumeAndRelatedSetAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StagePackageToVolumeAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@W4DeploymentOptions@234@PEAUIPackageVolume@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long StagePackageToVolumeAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StagePackageWithOptionsAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@W4DeploymentOptions@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long StagePackageWithOptionsAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StageUserDataAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long StageUserDataAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StageUserDataWithOptionsAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4DeploymentOptions@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long StageUserDataWithOptionsAsync(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePackageAsync@PackageManager@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@64@W4DeploymentOptions@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@64@@Z
    virtual long UpdatePackageAsync(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DebugSettings@PackageManager@Deployment@Management@Windows@@UEAAJPEAPEAUIPackageManagerDebugSettings@234@@Z
    virtual long get_DebugSettings(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageByAppInstallerFileAsyncImpl@PackageManager@Deployment@Management@Windows@@AEAAJAEBVString@Internal@4@W4DeploymentOptions@2Common@@PEAUIPackageVolume@234@PEAVExpectedDigestsMap@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    long AddPackageByAppInstallerFileAsyncImpl(::Windows::Internal::String const &, int, WindissectOpaque *, ExpectedDigestsMap *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRequestForPackageVolume@PackageManager@Deployment@Management@Windows@@AEAAJW4DeploymentOperation@2Common@@PEAUIPackageVolume@234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    long CreateRequestForPackageVolume(int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackageStatusOperationImpl@PackageManager@Deployment@Management@Windows@@AEAAJW4RpcPackageStatusOperation@@PEBGI@Z
    long PackageStatusOperationImpl(int, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPackageManagementAPIAccessible@PackageManager@Deployment@Management@Windows@@AEAAJXZ
    long VerifyPackageManagementAPIAccessible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPackageManagementAPIAccessibleByPackageFullName@PackageManager@Deployment@Management@Windows@@AEAAJ_N0PEAUHSTRING__@@@Z
    long VerifyPackageManagementAPIAccessibleByPackageFullName(bool, bool, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPackageManagementAPIAccessibleByPackageManifestUri@PackageManager@Deployment@Management@Windows@@AEAAJ_N0PEAUIUriRuntimeClass@Foundation@4@AEAVExpectedDigestsMap@@@Z
    long VerifyPackageManagementAPIAccessibleByPackageManifestUri(bool, bool, WindissectOpaque *, ExpectedDigestsMap &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPackageManagementAPIAccessibleByPackageUri@PackageManager@Deployment@Management@Windows@@AEAAJ_N0PEAUIUriRuntimeClass@Foundation@4@AEAVExpectedDigestsMap@@@Z
    long VerifyPackageManagementAPIAccessibleByPackageUri(bool, bool, WindissectOpaque *, ExpectedDigestsMap &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPackageQueryAPIAccessible@PackageManager@Deployment@Management@Windows@@AEAAJ_N0@Z
    long VerifyPackageQueryAPIAccessible(bool, bool);
};
} // namespace Windows::Management::Deployment
