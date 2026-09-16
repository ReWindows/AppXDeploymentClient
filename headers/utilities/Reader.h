#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 2 member(s).
namespace StateRepository::DictionarySerialization {
class Reader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@Reader@DictionarySerialization@StateRepository@@QEAAJ_KPEBX@Z
    long Begin(uint64_t, void const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToPair@Reader@DictionarySerialization@StateRepository@@AEAAJI@Z
    long MoveToPair(unsigned int);
};
} // namespace StateRepository::DictionarySerialization
