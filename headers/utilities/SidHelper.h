#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 4 member(s).
namespace Common {
class SidHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertSidToString@SidHelper@Common@@SAJQEAXPEAVStringBuffer@2@@Z
    static long ConvertSidToString(void * const, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentUserSid@SidHelper@Common@@SAJPEAPEAX@Z
    static long GetCurrentUserSid(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentUserSidString@SidHelper@Common@@SAJPEAVStringBuffer@2@@Z
    static long GetCurrentUserSidString(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserSidFromToken@SidHelper@Common@@SAJPEAXPEAPEAX@Z
    static long GetUserSidFromToken(void *, void * *);
};
} // namespace Common
