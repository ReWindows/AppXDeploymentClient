#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 3 member(s).
namespace Common::Deployment {
class DebugCallStack {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallStackOfCurrentThread@DebugCallStack@Deployment@Common@@SAJPEAVStringBuffer@3@@Z
    static long GetCallStackOfCurrentThread(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStackAsString@DebugCallStack@Deployment@Common@@QEAAJAEAVStringBuffer@3@@Z
    long GetStackAsString(WindissectOpaque &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateModuleCallback@DebugCallStack@Deployment@Common@@CAHPEBG_KKPEAX@Z
    static int EnumerateModuleCallback(unsigned short const *, uint64_t, unsigned long, void *);
};
} // namespace Common::Deployment
