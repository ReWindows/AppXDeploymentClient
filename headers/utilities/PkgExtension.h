#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 6 member(s).
namespace StateRepository::Entity {
class PkgExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PkgExtension@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayName@PkgExtension@Entity@StateRepository@@QEAAJPEBG@Z
    long SetDisplayName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetId@PkgExtension@Entity@StateRepository@@QEAAJPEBG@Z
    long SetId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@PkgExtension@Entity@StateRepository@@QEAAJPEBG@Z
    long SetName(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PkgExtension@Entity@StateRepository@@QEAA@XZ
    ~PkgExtension();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PkgExtension@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
};
} // namespace StateRepository::Entity
