#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 5 member(s).
class OutdatedPackagesFinder {
public:
    class BasicPackageInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRegisteredPackageInfo@OutdatedPackagesFinder@@QEAAJAEBVPackage_NoThrow@Entity@Cache@StateRepository@@_NAEA_N@Z
    long AddRegisteredPackageInfo(WindissectOpaque const &, bool, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutdatedPackages@OutdatedPackagesFinder@@QEAAJAEAV?$Array@PEBGV?$ContainerOperations@PEBGPEBG@Common@@VNoKey@2@V?$ContainerOperations@VNoKey@Common@@PEBG@2@V?$ArrayOperations@PEBGVNoKey@Common@@@2@@Common@@@Z
    long GetOutdatedPackages(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutdatedPackagesForUser@OutdatedPackagesFinder@@SAJPEBGAEAV?$Array@VStringBuffer@Common@@V?$ContainerOperations@VStringBuffer@Common@@V12@@2@VNoKey@2@V?$ContainerOperations@VNoKey@Common@@VStringBuffer@2@@2@V?$ArrayOperations@VStringBuffer@Common@@VNoKey@2@@2@@Common@@@Z
    static long GetOutdatedPackagesForUser(unsigned short const *, WindissectOpaque &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageInfoToArray@OutdatedPackagesFinder@@AEAAJAEBVPackage_NoThrow@Entity@Cache@StateRepository@@PEAV?$Array@UBasicPackageInfo@OutdatedPackagesFinder@@V?$ContainerOperations@UBasicPackageInfo@OutdatedPackagesFinder@@U12@@Common@@VNoKey@4@V?$ContainerOperations@VNoKey@Common@@UBasicPackageInfo@OutdatedPackagesFinder@@@4@V?$ArrayOperations@UBasicPackageInfo@OutdatedPackagesFinder@@VNoKey@Common@@@4@@Common@@@Z
    long AddPackageInfoToArray(WindissectOpaque const &, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMostRecentlyStagedPackage@OutdatedPackagesFinder@@AEAAJPEBGAEA_N@Z
    long GetIsMostRecentlyStagedPackage(unsigned short const *, bool &);
};
