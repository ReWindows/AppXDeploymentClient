#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 10 member(s).
namespace StateRepository {
class Repository {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToCache@Repository@StateRepository@@SAJAEAVDatabase@2@@Z
    static long AddToCache(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettings@Repository@StateRepository@@SAJW4Partition@2@PEAPEAGPEAW4Options@12@@Z
    static long GetSettings(int, unsigned short * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenDatabase@Repository@StateRepository@@SAJPEBGW4Partition@2@W4Options@12@AEAVDatabase@2@@Z
    static long OpenDatabase(unsigned short const *, int, int, WindissectOpaque &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDatabaseOpenFlagsPerOptions@Repository@StateRepository@@CAJW4Options@12@PEAH@Z
    static long AdjustDatabaseOpenFlagsPerOptions(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenDatabaseFromCache@Repository@StateRepository@@CAJPEBDAEAVDatabase@2@@Z
    static long OpenDatabaseFromCache(char const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenDatabaseFromDisk@Repository@StateRepository@@CAJPEBDW4Partition@2@W4Options@12@AEAVDatabase@2@@Z
    static long OpenDatabaseFromDisk(char const *, int, int, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCacheSize@Repository@StateRepository@@CAJW4Options@12@AEAVDatabase@2@@Z
    static long SetCacheSize(int, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileChunkSize@Repository@StateRepository@@CAJAEAVDatabase@2@@Z
    static long SetFileChunkSize(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetJournalSizeLimit@Repository@StateRepository@@CAJAEAVDatabase@2@@Z
    static long SetJournalSizeLimit(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOptions@Repository@StateRepository@@CAJAEAVDatabase@2@W4Options@12@@Z
    static long SetOptions(WindissectOpaque &, int);
};
} // namespace StateRepository
