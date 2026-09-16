#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 6 member(s).
namespace Common::Deployment {
class AppInstallerUpdateHelper {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppInstallerUpdateInfo@AppInstallerUpdateHelper@Deployment@Common@@YAJPEBGPEAW4AppInstallerFlags@StateRepository@Internal@Windows@@PEAU_FILETIME@@PEA_KPEA_N@Z
    long GetAppInstallerUpdateInfo(unsigned short const *, int *, _FILETIME *, uint64_t *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerPackageFamilyName@AppInstallerUpdateHelper@Deployment@Common@@YAJPEAPEAG@Z
    long GetCallerPackageFamilyName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstallerPackageFamilyNameAndAumid@AppInstallerUpdateHelper@Deployment@Common@@YAJPEAPEAG0@Z
    long GetInstallerPackageFamilyNameAndAumid(unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewPackageFullName@AppInstallerUpdateHelper@Deployment@Common@@YAJPEBGPEAPEAG@Z
    long GetNewPackageFullName(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchInstallerToCheckForUpdateAndGetResults@AppInstallerUpdateHelper@Deployment@Common@@YAJKPEBG0PEA_NPEAW4InstallerBlockActivationResult@123@@Z
    long LaunchInstallerToCheckForUpdateAndGetResults(unsigned long, unsigned short const *, unsigned short const *, bool *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchInstallerToUpdateIfNeeded@AppInstallerUpdateHelper@Deployment@Common@@YAJPEBGKPEAU_FILETIME@@PEA_KPEA_NPEAW4InstallerBlockActivationResult@123@@Z
    long LaunchInstallerToUpdateIfNeeded(unsigned short const *, unsigned long, _FILETIME *, uint64_t *, bool *, int *);
};
} // namespace Common::Deployment
