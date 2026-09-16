#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 11 member(s).
namespace Common {
class String {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaseInsensitiveCompare@String@Common@@SAHPEBGK0K@Z
    static int CaseInsensitiveCompare(unsigned short const *, unsigned long, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaseInsensitiveEndsWith@String@Common@@SAJPEBG0PEAH@Z
    static long CaseInsensitiveEndsWith(unsigned short const *, unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaseInsensitiveEquals@String@Common@@SAHPEBG0@Z
    static int CaseInsensitiveEquals(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaseInsensitiveEquals@String@Common@@SAHPEBGK0K@Z
    static int CaseInsensitiveEquals(unsigned short const *, unsigned long, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaseInsensitiveStartsWith@String@Common@@SAJPEBG0PEAH@Z
    static long CaseInsensitiveStartsWith(unsigned short const *, unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaseInsensitiveStartsWith@String@Common@@SAHPEBGK0K@Z
    static int CaseInsensitiveStartsWith(unsigned short const *, unsigned long, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@String@Common@@SAJAEBUCOMMON_STRING@2@PEAU32@@Z
    static long Clone(WindissectOpaque const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@String@Common@@SAHPEBGK0K@Z
    static int Equals(unsigned short const *, unsigned long, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@String@Common@@SA_NPEBG0@Z
    static bool Equals(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirst@String@Common@@SAHAEBUCOMMON_STRING@2@GPEAK@Z
    static int FindFirst(WindissectOpaque const &, unsigned short, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartsWith@String@Common@@SAHPEBG_K01@Z
    static int StartsWith(unsigned short const *, uint64_t, unsigned short const *, uint64_t);
};
} // namespace Common
