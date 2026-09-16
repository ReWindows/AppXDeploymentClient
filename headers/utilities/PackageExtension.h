#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 13 member(s).
namespace StateRepository::Entity {
class PackageExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackageExtension@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateActivationIfNecessary@PackageExtension@Entity@StateRepository@@QEAAJAEAVDatabase@3@AEA_JPEAVActivation@23@W4ExecutionFlags@3@@Z
    long GenerateActivationIfNecessary(WindissectOpaque &, int64_t &, WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeBehavior@PackageExtension@Entity@StateRepository@@QEBA?AW4RuntimeBehavior@3@XZ
    int GetRuntimeBehavior() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageExtension@Entity@StateRepository@@QEBA?AW4SRTrustLevel@3@XZ
    int GetTrustLevel() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageExtension@Entity@StateRepository@@QEAA@XZ
    PackageExtension();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppLifecycleBehavior@PackageExtension@Entity@StateRepository@@QEAAJW4AppLifecycleBehavior@3@@Z
    long SetAppLifecycleBehavior(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCategory@PackageExtension@Entity@StateRepository@@QEAAJPEBG@Z
    long SetCategory(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompatMode@PackageExtension@Entity@StateRepository@@QEAAJW4CompatMode@3@@Z
    long SetCompatMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRuntimeBehavior@PackageExtension@Entity@StateRepository@@QEAAJW4RuntimeBehavior@3@@Z
    long SetRuntimeBehavior(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScope@PackageExtension@Entity@StateRepository@@QEAAJW4Scope@3@@Z
    long SetScope(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrustLevel@PackageExtension@Entity@StateRepository@@QEAAJW4SRTrustLevel@3@@Z
    long SetTrustLevel(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExtension@Entity@StateRepository@@QEAA@XZ
    ~PackageExtension();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PackageExtension@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
};
} // namespace StateRepository::Entity
