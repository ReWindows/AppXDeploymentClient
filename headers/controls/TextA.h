#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 3 member(s).
namespace StateRepository {
class TextA {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCapacity@TextA@StateRepository@@QEAAJ_K_N@Z
    long EnsureCapacity(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@TextA@StateRepository@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@TextA@StateRepository@@QEAAJPEBD_K@Z
    long Set(char const *, uint64_t);
};
} // namespace StateRepository
