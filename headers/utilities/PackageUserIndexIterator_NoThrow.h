#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 2 member(s).
namespace StateRepository::Cache::Entity {
class PackageUserIndexIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageUserIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@PackageUser_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByUser@PackageUserIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@_J@Z
    long OpenByUser(WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Cache::Entity
