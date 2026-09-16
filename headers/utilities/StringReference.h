#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 5 member(s).
namespace Windows::Internal {
class StringReference {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLpcwstr@StringReference@Internal@Windows@@QEBAJPEAPEBG@Z
    long GetLpcwstr(unsigned short const * *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z
    void _ConstructorHelper(unsigned short const *);
};
} // namespace Windows::Internal
