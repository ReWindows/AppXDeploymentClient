#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 4 member(s).
namespace StateRepository::Entity {
class AppUriHandlerGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@AppUriHandlerGroup@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@AppUriHandlerGroup@Entity@StateRepository@@QEAAJPEBG@Z
    long SetName(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerGroup@Entity@StateRepository@@QEAA@XZ
    ~AppUriHandlerGroup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@AppUriHandlerGroup@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
};
} // namespace StateRepository::Entity
