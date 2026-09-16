#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 62 member(s).
namespace Windows::Management::Deployment {
class PackageVolume {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageVolume@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackageByPackageFullName@PackageVolume@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackageByPackageFullName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackageByUserSecurityIdPackageFullName@PackageVolume@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackageByUserSecurityIdPackageFullName(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackages@PackageVolume@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByNamePublisher@PackageVolume@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByNamePublisher(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByNamePublisherWithPackagesTypes@PackageVolume@Deployment@Management@Windows@@UEAAJW4PackageTypes@234@PEAUHSTRING__@@1PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByNamePublisherWithPackagesTypes(int, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByPackageFamilyName@PackageVolume@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByPackageFamilyName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByPackageFamilyNameWithPackageTypes@PackageVolume@Deployment@Management@Windows@@UEAAJW4PackageTypes@234@PEAUHSTRING__@@PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByPackageFamilyNameWithPackageTypes(int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByUserSecurityId@PackageVolume@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByUserSecurityId(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByUserSecurityIdNamePublisher@PackageVolume@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByUserSecurityIdNamePublisher(HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByUserSecurityIdNamePublisherWithPackageTypes@PackageVolume@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4PackageTypes@234@00PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(HSTRING__*, int, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByUserSecurityIdPackageFamilyName@PackageVolume@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByUserSecurityIdPackageFamilyName(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes@PackageVolume@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4PackageTypes@234@0PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(HSTRING__*, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesByUserSecurityIdWithPackageTypes@PackageVolume@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@W4PackageTypes@234@PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesByUserSecurityIdWithPackageTypes(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesWithPackageTypes@PackageVolume@Deployment@Management@Windows@@UEAAJW4PackageTypes@234@PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long FindPackagesWithPackageTypes(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAvailableSpaceAsync@PackageVolume@Deployment@Management@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_K@Foundation@4@@Z
    virtual long GetAvailableSpaceAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageVolume@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageVolume@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageVolume@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageVolume@Deployment@Management@Windows@@UEAAJI@Z
    virtual long Initialize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageVolume@Deployment@Management@Windows@@UEAAJIW4VolumeFlags@2Common@@PEBG111E@Z
    virtual long Initialize(unsigned int, int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned char);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageVolume@Deployment@Management@Windows@@QEAA@XZ
    PackageVolume();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageVolume@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageVolume@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAppxInstallSupported@PackageVolume@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_IsAppxInstallSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFullTrustPackageSupported@PackageVolume@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_IsFullTrustPackageSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOffline@PackageVolume@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_IsOffline(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSystemVolume@PackageVolume@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_IsSystemVolume(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MediaId@PackageVolume@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MediaId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MountPoint@PackageVolume@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MountPoint(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@PackageVolume@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageStorePath@PackageVolume@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageStorePath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsHardLinks@PackageVolume@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsHardLinks(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageVolume@Deployment@Management@Windows@@UEAA@XZ
    virtual ~PackageVolume();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFromInternalStringToHString@PackageVolume@Deployment@Management@Windows@@AEAAJPEAVString@Internal@4@PEAPEAUHSTRING__@@@Z
    long CopyFromInternalStringToHString(::Windows::Internal::String *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackagesImpl@PackageVolume@Deployment@Management@Windows@@AEAAJPEAUHSTRING__@@0000W4RpcPackageType@@PEAPEAU?$IVector@PEAVPackage@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    long FindPackagesImpl(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, WindissectOpaque * *);
};
} // namespace Windows::Management::Deployment
