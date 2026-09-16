#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 13 member(s).
class PackagesToBeInstalledGetter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackagesToBeInstalledGetter@@QEAAJPEAH@Z
    long Exists(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackagesToBeInstalledGetter@@QEAAJPEAPEAU_MainPackageInfo@AppxAllUserStore@@PEAI@Z
    long Get(WindissectOpaque * *, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackagesToBeInstalledGetter@@QEAA@PEBGH@Z
    PackagesToBeInstalledGetter(unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackagesToBeInstalledGetter@@QEAA@XZ
    ~PackagesToBeInstalledGetter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageToMainPackageInfoArrayForRemoval@PackagesToBeInstalledGetter@@AEAAJPEBG@Z
    long AddPackageToMainPackageInfoArrayForRemoval(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageToMainPackageInfoArrayIfNecessary@PackagesToBeInstalledGetter@@AEAAJPEBGW4PackageType@Cache@StateRepository@@@Z
    long AddPackageToMainPackageInfoArrayIfNecessary(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CombineMainPackageArrays@PackagesToBeInstalledGetter@@AEAAJPEAPEAU_MainPackageInfo@AppxAllUserStore@@PEAI@Z
    long CombineMainPackageArrays(WindissectOpaque * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBestVersionPackageFullNameForRegistration@PackagesToBeInstalledGetter@@AEAAJPEBG0PEAVStringBuffer@Common@@@Z
    long GetBestVersionPackageFullNameForRegistration(unsigned short const *, unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternal@PackagesToBeInstalledGetter@@AEAAJPEAPEAU_MainPackageInfo@AppxAllUserStore@@PEAI@Z
    long GetInternal(WindissectOpaque * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogMainPackagesArray@PackagesToBeInstalledGetter@@AEAAJPEAU_MainPackageInfo@AppxAllUserStore@@I@Z
    long LogMainPackagesArray(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPackageUserForInstallIfNecessary@PackagesToBeInstalledGetter@@AEAAJAEAUProcessPackageUserContext@1@@Z
    long ProcessPackageUserForInstallIfNecessary(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemovePackagesByPolicy@PackagesToBeInstalledGetter@@AEAAJPEBG_N@Z
    long ProcessRemovePackagesByPolicy(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuerySRCacheForAdditionalPackagesToBeInstalledForUser@PackagesToBeInstalledGetter@@AEAAJXZ
    long QuerySRCacheForAdditionalPackagesToBeInstalledForUser();
};
