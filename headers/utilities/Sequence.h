#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 5 member(s).
namespace StateRepository::Entity {
class Sequence {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Sequence@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentValue@Sequence@Entity@StateRepository@@SAJAEAVDatabase@3@W4SequenceId@3@AEA_J@Z
    static long GetCurrentValue(WindissectOpaque &, int, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextValue@Sequence@Entity@StateRepository@@SAJAEAVDatabase@3@W4SequenceId@3@AEA_J@Z
    static long GetNextValue(WindissectOpaque &, int, int64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetCurrentValue@Sequence@Entity@StateRepository@@SAJAEAVDatabase@3@W4SequenceId@3@AEA_JAEA_N@Z
    static long TryGetCurrentValue(WindissectOpaque &, int, int64_t &, bool &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@Sequence@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
};
} // namespace StateRepository::Entity
