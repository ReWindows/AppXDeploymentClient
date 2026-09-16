#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 2 member(s).
namespace Common::Deployment {
class UupUriHelper {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUupProductIdFromUri@UupUriHelper@Deployment@Common@@YAJPEAUIUriRuntimeClass@Foundation@Windows@@AEAVStringBuffer@3@@Z
    long GetUupProductIdFromUri(WindissectOpaque *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUupProductUriStringFromId@UupUriHelper@Deployment@Common@@YAJPEBGAEAVStringBuffer@3@@Z
    long GetUupProductUriStringFromId(unsigned short const *, WindissectOpaque &);
};
} // namespace Common::Deployment
