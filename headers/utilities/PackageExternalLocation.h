#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 6 member(s).
namespace StateRepository::Entity {
class PackageExternalLocation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndPackage@PackageExternalLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4ExecutionFlags@3@@Z
    static long DeleteByUserAndPackage(WindissectOpaque &, int64_t, int64_t, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPath@PackageExternalLocation@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPath(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackage@PackageExternalLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAV123@AEA_N@Z
    static long TryGetByUserAndPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExternalLocation@Entity@StateRepository@@QEAA@XZ
    ~PackageExternalLocation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageExternalLocation@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
