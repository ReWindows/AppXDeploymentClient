#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 6 member(s).
namespace StateRepository::Entity {
class MrtPackage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@MrtPackage@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayNameReference@MrtPackage@Entity@StateRepository@@QEAAJPEBG@Z
    long SetDisplayNameReference(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLogoReference@MrtPackage@Entity@StateRepository@@QEAAJPEBG@Z
    long SetLogoReference(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPublisherDisplayNameReference@MrtPackage@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPublisherDisplayNameReference(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrtPackage@Entity@StateRepository@@QEAA@XZ
    ~MrtPackage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@MrtPackage@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
};
} // namespace StateRepository::Entity
