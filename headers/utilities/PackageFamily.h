#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 15 member(s).
namespace StateRepository::Entity {
class PackageFamily {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackageFamily@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@@Z
    static long Get(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddIfNotExist@PackageFamily@Entity@StateRepository@@QEAAJAEAVDatabase@3@PEAXW4ExecutionFlags@3@@Z
    long GetOrAddIfNotExist(WindissectOpaque &, void *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageFamily@Entity@StateRepository@@QEAA@XZ
    PackageFamily();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@PackageFamily@Entity@StateRepository@@QEAAJPEBG@Z
    long SetName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageFamilyName@PackageFamily@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPackageFamilyName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageSID@PackageFamily@Entity@StateRepository@@QEAAJPEAX@Z
    long SetPackageSID(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPublisher@PackageFamily@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPublisher(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPublisherId@PackageFamily@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPublisherId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByNameAndPublisherId@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG1AEAV123@AEA_N@Z
    static long TryGetByNameAndPublisherId(WindissectOpaque &, unsigned short const *, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageFamilyName@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByPackageFamilyName(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageFamily@Entity@StateRepository@@QEAA@XZ
    ~PackageFamily();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PackageFamily@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageFamily@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
