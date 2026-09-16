#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 7 member(s).
namespace Common {
class PathHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTrailingSlashIfNecessary@PathHelpers@Common@@SAJPEAVStringBufferBuilder@2@@Z
    static long AddTrailingSlashIfNecessary(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendPathSegment@PathHelpers@Common@@SAJPEAVStringBufferBuilder@2@PEBG@Z
    static long AppendPathSegment(WindissectOpaque *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendPathSegment@PathHelpers@Common@@SAJPEAVStringBuffer@2@PEBUCOMMON_STRING@2@@Z
    static long AppendPathSegment(WindissectOpaque *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CombinePaths@PathHelpers@Common@@SAJPEBG0PEAVStringBuffer@2@@Z
    static long CombinePaths(unsigned short const *, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StripExtendedPathPrefixIfNecessary@PathHelpers@Common@@SAJPEAVStringBuffer@2@@Z
    static long StripExtendedPathPrefixIfNecessary(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StripTrailingSlashIfNecessary@PathHelpers@Common@@SAXPEAG@Z
    static void StripTrailingSlashIfNecessary(unsigned short *);
};
} // namespace Common
