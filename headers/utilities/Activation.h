#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 17 member(s).
namespace StateRepository::Entity {
class Activation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Activation@Entity@StateRepository@@QEAA@XZ
    Activation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Activation@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateActivationKey@Activation@Entity@StateRepository@@QEAAJAEAVHasher@DataType@3@@Z
    long GenerateActivationKey(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateActivationKey@Activation@Entity@StateRepository@@SAJAEAVHasher@DataType@3@W4ActivationFlags@3@PEBG22222AEAVText@3@@Z
    static long GenerateActivationKey(WindissectOpaque &, int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddIfNotExist@Activation@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long GetOrAddIfNotExist(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeBehavior@Activation@Entity@StateRepository@@QEBA?AW4RuntimeBehavior@3@XZ
    int GetRuntimeBehavior() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Activation@Entity@StateRepository@@QEBA?AW4SRTrustLevel@3@XZ
    int GetTrustLevel() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppLifecycleBehavior@Activation@Entity@StateRepository@@QEAAJW4AppLifecycleBehavior@3@@Z
    long SetAppLifecycleBehavior(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsConsoleSubsystem@Activation@Entity@StateRepository@@QEAAJ_N@Z
    long SetIsConsoleSubsystem(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRuntimeBehavior@Activation@Entity@StateRepository@@QEAAJW4RuntimeBehavior@3@@Z
    long SetRuntimeBehavior(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSupportsMultipleInstances@Activation@Entity@StateRepository@@QEAAJ_N@Z
    long SetSupportsMultipleInstances(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrustLevel@Activation@Entity@StateRepository@@QEAAJW4SRTrustLevel@3@@Z
    long SetTrustLevel(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@Activation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByActivationKey@Activation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByActivationKey(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Activation@Entity@StateRepository@@QEAA@XZ
    ~Activation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@Activation@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@Activation@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
