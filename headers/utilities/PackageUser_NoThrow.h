#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 7 member(s).
namespace StateRepository::Cache::Entity {
class PackageUser_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@PackageUser_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_J1AEA_N@Z
    static long ExistsByUserAndPackage(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackageUser_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JAEAVPackageUserIndexIterator_NoThrow@234@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageUser_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long Get(WindissectOpaque &, int64_t, int, WindissectOpaque &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndPackage@PackageUser_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_J1AEA_J@Z
    static long GetByUserAndPackage(WindissectOpaque &, int64_t, int64_t, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndPackage@PackageUser_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_J1W4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long GetByUserAndPackage(WindissectOpaque &, int64_t, int64_t, int, WindissectOpaque &, bool &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextToObject@PackageUser_NoThrow@Entity@Cache@StateRepository@@CAJAEAVContext_NoThrow@34@AEAV1234@W4CacheFlags@1234@_J@Z
    static long ContextToObject(WindissectOpaque &, WindissectOpaque &, int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@PackageUser_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z
    static long Open(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
};
} // namespace StateRepository::Cache::Entity
