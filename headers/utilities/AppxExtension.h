#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 12 member(s).
namespace StateRepository::Entity {
class AppxExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@AppxExtension@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@AppxExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndCategoryAndKeyString@AppxExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAVStatement@3@@Z
    static long FindByUserAndCategoryAndKeyString(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackage@AppxExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageAndCategory@AppxExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEAVStatement@3@@Z
    static long FindByUserAndPackageAndCategory(WindissectOpaque &, int64_t, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageAndCategoryAndKeyString@AppxExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBG2AEAVStatement@3@@Z
    static long FindByUserAndPackageAndCategoryAndKeyString(WindissectOpaque &, int64_t, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCategory@AppxExtension@Entity@StateRepository@@QEAAJPEBG@Z
    long SetCategory(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRegistrationInformation@AppxExtension@Entity@StateRepository@@QEAAJPEBG@Z
    long SetRegistrationInformation(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageAndCategoryAndKeyStringAndRegistrationInformation@AppxExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBG22AEAV123@AEA_N@Z
    static long TryGetByUserAndPackageAndCategoryAndKeyStringAndRegistrationInformation(WindissectOpaque &, int64_t, int64_t, unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppxExtension@Entity@StateRepository@@QEAA@XZ
    ~AppxExtension();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@AppxExtension@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@AppxExtension@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
