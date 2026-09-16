#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 10 member(s).
namespace StateRepository::Entity {
class PackageLocation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackageLocation@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackage@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@@Z
    static long GetByPackage(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInstalledLocation@PackageLocation@Entity@StateRepository@@QEAAJPEBG@Z
    long SetInstalledLocation(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackage@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGetByPackage(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@PackageLocation@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_LongRunningTransaction_RemoveOldRecords@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@_N@Z
    static long Update_LongRunningTransaction_RemoveOldRecords(WindissectOpaque &, int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageLocation@Entity@StateRepository@@QEAA@XZ
    ~PackageLocation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PackageLocation@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageLocation@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
