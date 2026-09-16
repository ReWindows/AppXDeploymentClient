#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 11 member(s).
namespace StateRepository::Entity {
class User {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@User@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@User@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@@Z
    static long Get(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserSid@User@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXAEAV123@@Z
    static long GetByUserSid(WindissectOpaque &, void *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddIfNotExist@User@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long GetOrAddIfNotExist(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserSid@User@Entity@StateRepository@@QEAAJPEAX@Z
    long SetUserSid(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@User@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserSid@User@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXAEAV123@AEA_N@Z
    static long TryGetByUserSid(WindissectOpaque &, void *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet_UserIDByUserSid@User@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXPEA_JAEA_N@Z
    static long TryGet_UserIDByUserSid(WindissectOpaque &, void *, int64_t *, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1User@Entity@StateRepository@@QEAA@XZ
    ~User();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@User@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@User@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
