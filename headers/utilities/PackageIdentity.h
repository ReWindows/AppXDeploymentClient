#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 7 member(s).
namespace StateRepository::Entity {
class PackageIdentity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackageIdentity@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddIfNotExist@PackageIdentity@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long GetOrAddIfNotExist(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageFullName@PackageIdentity@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPackageFullName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageFullName@PackageIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByPackageFullName(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageIdentity@Entity@StateRepository@@QEAA@XZ
    ~PackageIdentity();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PackageIdentity@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageIdentity@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
