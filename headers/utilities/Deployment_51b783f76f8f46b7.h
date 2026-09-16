#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 42 member(s).
namespace Common {
class Deployment {
public:
    class AccessHelpers;
    class AppInstallerUpdateHelper;
    class Configuration;
    class ContentGroupHelpers;
    class DebugCallStack;
    class DeferredRemovalHelper;
    class EndOfLifeSet;
    class FixedSizePackageId;
    class MRTHelper;
    class PackageID;
    class PreInitializeMRTHelper;
    class Privilege;
    class RemovalPackageInfo;
    class SessionInfo;
    class UupUriHelper;
    class Volume;
    class VolumeManager;
    class WNFHelpers;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustAppDataSizeIfUserMutableDirectoryExists@Deployment@Common@@YAJPEBGIPEA_K00@Z
    long AdjustAppDataSizeIfUserMutableDirectoryExists(unsigned short const *, unsigned int, uint64_t *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildAIComponentsList@Deployment@Common@@YAJXZ
    long BuildAIComponentsList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateUserMutableDirectorySizeVisitor@Deployment@Common@@YAJPEAXPEBGPEBU_WIN32_FIND_DATAW@@@Z
    long CalculateUserMutableDirectorySizeVisitor(void *, unsigned short const *, _WIN32_FIND_DATAW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFileLastWriteTimeHashMapVisitor@Deployment@Common@@YAJPEAXPEBGPEBU_WIN32_FIND_DATAW@@@Z
    long CreateFileLastWriteTimeHashMapVisitor(void *, unsigned short const *, _WIN32_FIND_DATAW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeMsixStreamDataSourceUri@Deployment@Common@@YAJPEBGAEAVStringBuffer@2@1@Z
    long DecodeMsixStreamDataSourceUri(unsigned short const *, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindStorageDeviceInfo@Deployment@Common@@YAJPEBG0PEAU_STORAGE_DEVICE_INFO@@PEAW4_STORAGE_DEVICE_TYPE@@PEAK@Z
    long FindStorageDeviceInfo(unsigned short const *, unsigned short const *, _STORAGE_DEVICE_INFO *, int *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindStorageDeviceInfoByMountPoint@Deployment@Common@@YAJPEBGPEAU_STORAGE_DEVICE_INFO@@@Z
    long FindStorageDeviceInfoByMountPoint(unsigned short const *, _STORAGE_DEVICE_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindStorageDeviceInfoByType@Deployment@Common@@YAJPEBG0W4_STORAGE_DEVICE_TYPE@@PEAU_STORAGE_DEVICE_INFO@@PEA_NPEAK@Z
    long FindStorageDeviceInfoByType(unsigned short const *, unsigned short const *, int, _STORAGE_DEVICE_INFO *, bool *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateProgIdAndAcidForExtension@Deployment@Common@@YAJPEBG00W4RuntimeBehavior@StateRepository@@W4SRTrustLevel@4@00000AEAVStringBuffer@2@3@Z
    long GenerateProgIdAndAcidForExtension(unsigned short const *, unsigned short const *, unsigned short const *, int, int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessMaskForLogging@Deployment@Common@@YAJPEAXPEAKPEAH@Z
    long GetAccessMaskForLogging(void *, unsigned long *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallStackThread@Deployment@Common@@YAKPEAX@Z
    unsigned long GetCallStackThread(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectoryTreeSizeOnDisk@Deployment@Common@@YAJPEBGPEA_J@Z
    long GetDirectoryTreeSizeOnDisk(unsigned short const *, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileSizeOnDisk@Deployment@Common@@YAKPEBG_NPEA_J@Z
    unsigned long GetFileSizeOnDisk(unsigned short const *, bool, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileSizeOnHypotheticalDisk@Deployment@Common@@YAKPEBGIPEA_K@Z
    unsigned long GetFileSizeOnHypotheticalDisk(unsigned short const *, unsigned int, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileVersion@Deployment@Common@@YAJPEBGAEA_K@Z
    long GetFileVersion(unsigned short const *, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManifestReaderFromPath@Deployment@Common@@YAJPEBG0PEAVIValidatedManifestReaderHelper@12@PEAPEAUIAppxManifestReader@@@Z
    long GetManifestReaderFromPath(unsigned short const *, unsigned short const *, WindissectOpaque *, IAppxManifestReader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetadataDirectory@Deployment@Common@@YAJPEBG0_NPEAPEAG@Z
    long GetMetadataDirectory(unsigned short const *, unsigned short const *, bool, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyNameFromFullName@Deployment@Common@@YAJPEBGPEAVStringBuffer@2@@Z
    long GetPackageFamilyNameFromFullName(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageIDFromPackageMoniker@Deployment@Common@@YAJPEBG0PEAVPackageID@12@@Z
    long GetPackageIDFromPackageMoniker(unsigned short const *, unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemovalPackagesList@Deployment@Common@@YAJAEAV?$Array@URemovalPackageInfo@Deployment@Common@@V?$ContainerOperations@URemovalPackageInfo@Deployment@Common@@U123@@3@VNoKey@3@V?$ContainerOperations@VNoKey@Common@@URemovalPackageInfo@Deployment@2@@3@V?$ArrayOperations@URemovalPackageInfo@Deployment@Common@@VNoKey@3@@3@@2@@Z
    long GetRemovalPackagesList(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecurityDescriptorForLogging@Deployment@Common@@YAJPEBGAEAV?$AutoArray@E$1??$AutoArrayDeallocate@E@Common@@YAXPEAE@Z@2@@Z
    long GetSecurityDescriptorForLogging(unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemMetadataDirectory@Deployment@Common@@YAJPEBGPEAPEAG@Z
    long GetSystemMetadataDirectory(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserMutableDirectoryTreeSize@Deployment@Common@@YAJPEBG0IPEA_K1@Z
    long GetUserMutableDirectoryTreeSize(unsigned short const *, unsigned short const *, unsigned int, uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionlessNameFromPackageFullName@Deployment@Common@@YAJPEBGPEAVStringBuffer@2@@Z
    long GetVersionlessNameFromPackageFullName(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullTrust@Deployment@Common@@YAJPEAXAEA_N@Z
    long IsFullTrust(void *, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMemberOfAdministratorsGroup@Deployment@Common@@YAJPEA_N@Z
    long IsMemberOfAdministratorsGroup(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageFullNameBundle@Deployment@Common@@YA_NPEBG@Z
    bool IsPackageFullNameBundle(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemovePackagesPolicyApplicableAndEnabled@Deployment@Common@@YAJPEA_N@Z
    long IsRemovePackagesPolicyApplicableAndEnabled(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStorageApiOk@Deployment@Common@@YA_NXZ
    bool IsStorageApiOk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAccessToPath@Deployment@Common@@YAXPEBG@Z
    void LogAccessToPath(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogFileAttributeData@Deployment@Common@@YAXJPEBG@Z
    void LogFileAttributeData(long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogIfAccessDenied@Deployment@Common@@YAJJPEBG@Z
    long LogIfAccessDenied(long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSecurityDescriptorInfo@Deployment@Common@@YAXPEBGPEAX@Z
    void LogSecurityDescriptorInfo(unsigned short const *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapError@Deployment@Common@@YAJW4DeploymentOperation@12@J@Z
    long MapError(int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrefetchFile@Deployment@Common@@YAJPEBG@Z
    long PrefetchFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecursiveCreateDirectory@Deployment@Common@@YAJPEBG@Z
    long RecursiveCreateDirectory(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScheduledTaskEnabledState@Deployment@Common@@YAJPEBG_N@Z
    long SetScheduledTaskEnabledState(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateRepositoryCache@Deployment@Common@@YAJXZ
    long UpdateStateRepositoryCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateUupProductById@Deployment@Common@@YAJPEBGPEA_N@Z
    long ValidateUupProductById(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WalkDirectorySizeCallback@Deployment@Common@@YAJPEAXPEBGPEBU_WIN32_FIND_DATAW@@@Z
    long WalkDirectorySizeCallback(void *, unsigned short const *, _WIN32_FIND_DATAW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WalkDirectorySizeCustomClusterSizeCallback@Deployment@Common@@YAJPEAXPEBGPEBU_WIN32_FIND_DATAW@@@Z
    long WalkDirectorySizeCustomClusterSizeCallback(void *, unsigned short const *, _WIN32_FIND_DATAW const *);
};
} // namespace Common
