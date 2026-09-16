#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 15 member(s).
namespace StateRepository::Entity {
class DependencyGraph {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@DependencyGraph@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNewOrUpdateShadowAsNecessary@DependencyGraph@Entity@StateRepository@@QEAAJAEAVDatabase@3@@Z
    long AddNewOrUpdateShadowAsNecessary(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteShadowed@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@@Z
    static long DeleteShadowed(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackageAndDependencyType@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4DependencyGraphType@3@AEAVStatement@3@@Z
    static long FindByUserAndDependentPackageAndDependencyType(WindissectOpaque &, int64_t, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackage_SortedByIndex@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndDependentPackage_SortedByIndex(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndSupplierPackage@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndSupplierPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@DependencyGraph@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMarkedForDeletion@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@@Z
    static long RemoveMarkedForDeletion(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShadowIfNecessary@DependencyGraph@Entity@StateRepository@@QEAAJAEAVDatabase@3@@Z
    long ShadowIfNecessary(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShadowIfNecessary@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEA_J@Z
    static long ShadowIfNecessary(WindissectOpaque &, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UndeleteShadow@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J@Z
    static long UndeleteShadow(WindissectOpaque &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@DependencyGraph@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@DependencyGraph@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@DependencyGraph@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
