#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 4 member(s).
namespace StateRepository::Entity {
class WorkInProgress {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteCascading@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@_J_KPEBW4Partition@3@@Z
    static long DeleteCascading(WindissectOpaque &, int64_t, uint64_t, int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAll_LongRunningTransaction_RemoveOldRecordsInMachinePartition@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@_N@Z
    static long UpdateAll_LongRunningTransaction_RemoveOldRecordsInMachinePartition(WindissectOpaque &, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCascading@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@_J@Z
    static long UpdateCascading(WindissectOpaque &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCascading@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBD@Z
    static long UpdateCascading(WindissectOpaque &, int64_t, char const *);
};
} // namespace StateRepository::Entity
