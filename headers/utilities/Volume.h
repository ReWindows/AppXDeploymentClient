#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 7 member(s).
namespace Common::Deployment {
class Volume {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@Volume@Deployment@Common@@QEBAJPEAV123@@Z
    long CopyTo(WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Volume@Deployment@Common@@QEAA@XZ
    ~Volume();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMediaId@Volume@Deployment@Common@@AEAAJQEBG@Z
    long SetMediaId(unsigned short const * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMountPoint@Volume@Deployment@Common@@AEAAJPEBG@Z
    long SetMountPoint(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@Volume@Deployment@Common@@AEAAJPEBG@Z
    long SetName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSisPath@Volume@Deployment@Common@@AEAAJPEBG@Z
    long SetSisPath(unsigned short const *);
};
} // namespace Common::Deployment
