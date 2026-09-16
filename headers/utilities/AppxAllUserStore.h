#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 4 member(s).
class AppxAllUserStore {
public:
    class _MainPackageInfo;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllUserChildStorePath@AppxAllUserStore@@YAJPEBG_NPEAVStringBuffer@Common@@@Z
    long GetAllUserChildStorePath(unsigned short const *, bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferredRemovalInfoForUserFullPath@AppxAllUserStore@@YAJPEBGPEAVStringBuffer@Common@@@Z
    long GetDeferredRemovalInfoForUserFullPath(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferredRemovalKeyFullPath@AppxAllUserStore@@YAJPEBGPEAVStringBuffer@Common@@@Z
    long GetDeferredRemovalKeyFullPath(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInboxApplicationsFullPath@AppxAllUserStore@@YAJPEAVStringBuffer@Common@@@Z
    long GetInboxApplicationsFullPath(WindissectOpaque *);
};
