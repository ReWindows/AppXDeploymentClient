#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 4 member(s).
namespace StateRepository::Entity {
class HostRuntime {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@HostRuntime@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostId@HostRuntime@Entity@StateRepository@@QEAAJPEBG@Z
    long SetHostId(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostRuntime@Entity@StateRepository@@QEAA@XZ
    ~HostRuntime();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@HostRuntime@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
};
} // namespace StateRepository::Entity
