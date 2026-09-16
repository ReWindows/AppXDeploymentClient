#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 15 member(s).
namespace StateRepository::Entity {
class WowDependencyGraph {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@WowDependencyGraph@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNewOrUpdateShadowAsNecessary@WowDependencyGraph@Entity@StateRepository@@QEAAJAEAVDatabase@3@@Z
    long AddNewOrUpdateShadowAsNecessary(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@WowDependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteShadowed@WowDependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@@Z
    static long DeleteShadowed(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackage@WowDependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndDependentPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackageAndDependencyType@WowDependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4DependencyGraphType@3@AEAVStatement@3@@Z
    static long FindByUserAndDependentPackageAndDependencyType(WindissectOpaque &, int64_t, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndSupplierPackage@WowDependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndSupplierPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@WowDependencyGraph@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMarkedForDeletion@WowDependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@@Z
    static long RemoveMarkedForDeletion(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShadowIfNecessary@WowDependencyGraph@Entity@StateRepository@@QEAAJAEAVDatabase@3@@Z
    long ShadowIfNecessary(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShadowIfNecessary@WowDependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEA_J@Z
    static long ShadowIfNecessary(WindissectOpaque &, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UndeleteShadow@WowDependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J@Z
    static long UndeleteShadow(WindissectOpaque &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@WowDependencyGraph@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@WowDependencyGraph@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@WowDependencyGraph@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
