#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 3 member(s).
namespace StateRepository::Entity {
class PublisherCacheFolder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PublisherCacheFolder@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PublisherCacheFolder@Entity@StateRepository@@QEAA@XZ
    ~PublisherCacheFolder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PublisherCacheFolder@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
};
} // namespace StateRepository::Entity
