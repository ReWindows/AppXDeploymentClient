#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 5 member(s).
namespace StateRepository::Cache::Entity {
class User_NoThrow {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByToken@User_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEAXAEA_J@Z
    static long GetByToken(WindissectOpaque &, void *, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserSid@User_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEAXW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long GetByUserSid(WindissectOpaque &, void *, int, WindissectOpaque &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserSid@User_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEAXAEA_J@Z
    static long GetByUserSid(WindissectOpaque &, void *, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserSidAsString@User_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long GetByUserSidAsString(WindissectOpaque &, unsigned short const *, int, WindissectOpaque &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserSidAsString@User_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEA_J@Z
    static long GetByUserSidAsString(WindissectOpaque &, unsigned short const *, int64_t &);
};
} // namespace StateRepository::Cache::Entity
