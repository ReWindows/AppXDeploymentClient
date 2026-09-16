#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 2 member(s).
namespace StateRepository::Entity {
class ApplicationUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddByPackageUser@ApplicationUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long AddByPackageUser(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddByPackageUserIfNotExist@ApplicationUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long AddByPackageUserIfNotExist(WindissectOpaque &, int64_t, int);
};
} // namespace StateRepository::Entity
