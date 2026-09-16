#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 4 member(s).
namespace StateRepository::Entity {
class Application {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Application@Entity@StateRepository@@QEAA@XZ
    Application();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndPackageRelativeApplicationId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAV123@AEA_N@Z
    static long TryGetByPackageAndPackageRelativeApplicationId(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Application@Entity@StateRepository@@QEAA@XZ
    ~Application();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@Application@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
