#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 7 member(s).
namespace StateRepository::Cache {
class Context_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToCache@Context_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z
    long AddToCache(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateData@Context_NoThrow@Cache@StateRepository@@QEAAJHAEA_J@Z
    long EnumerateData(int, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGAEAI@Z
    long GetField(unsigned short const *, unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGAEA_K@Z
    long GetField(unsigned short const *, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@Context_NoThrow@Cache@StateRepository@@QEAAJAEA_N@Z
    long IsEmpty(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@Context_NoThrow@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@23@PEBGW4SRCacheFlags@@AEA_N@Z
    long Open(WindissectOpaque &, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSubContext@Context_NoThrow@Cache@StateRepository@@QEAAJAEAV123@PEBGW4SRCacheFlags@@AEA_N@Z
    long OpenSubContext(WindissectOpaque &, unsigned short const *, int, bool &);
};
} // namespace StateRepository::Cache
