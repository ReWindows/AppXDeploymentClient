#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 7 member(s).
namespace Common {
class StringBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendChar@StringBuilder@Common@@QEAAJG@Z
    long AppendChar(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendString@StringBuilder@Common@@QEAAJPEBG@Z
    long AppendString(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendString@StringBuilder@Common@@QEAAJPEBUCOMMON_STRING@2@@Z
    long AppendString(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendUInt32@StringBuilder@Common@@QEAAJK@Z
    long AppendUInt32(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendUInt64Hex@StringBuilder@Common@@QEAAJ_K@Z
    long AppendUInt64Hex(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@StringBuilder@Common@@QEAAJKK@Z
    long Delete(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChars@StringBuilder@Common@@QEAAJKPEBGK@Z
    long InsertChars(unsigned long, unsigned short const *, unsigned long);
};
} // namespace Common
