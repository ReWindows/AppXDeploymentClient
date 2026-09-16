#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 2 member(s).
namespace ReliableCleanup {
class CleanupManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPurgeList@CleanupManager@ReliableCleanup@@SAJPEBGW4ResourceScope@@0@Z
    static long AddToPurgeList(unsigned short const *, int, unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToListIfDoesNotExist@CleanupManager@ReliableCleanup@@CAJPEAV?$Array@VStringBuffer@Common@@V?$ContainerOperations@VStringBuffer@Common@@V12@@2@VNoKey@2@V?$ContainerOperations@VNoKey@Common@@VStringBuffer@2@@2@V?$ArrayOperations@VStringBuffer@Common@@VNoKey@2@@2@@Common@@PEBG@Z
    static long AddToListIfDoesNotExist(WindissectOpaque *, unsigned short const *);
};
} // namespace ReliableCleanup
