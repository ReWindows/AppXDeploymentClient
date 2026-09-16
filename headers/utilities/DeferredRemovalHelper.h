#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 14 member(s).
namespace Common::Deployment {
class DeferredRemovalHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllDeferredRemovalInfoForUser@DeferredRemovalHelper@Deployment@Common@@SAJPEBG@Z
    static long ClearAllDeferredRemovalInfoForUser(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDeferredRemovalForPackageFamily@DeferredRemovalHelper@Deployment@Common@@QEAAJPEBG@Z
    long ClearDeferredRemovalForPackageFamily(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDeferredRemovalForPackageFullName@DeferredRemovalHelper@Deployment@Common@@QEAAJPEBG@Z
    long ClearDeferredRemovalForPackageFullName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistPackagesPendingDeferredRemoval@DeferredRemovalHelper@Deployment@Common@@QEAAJPEAE@Z
    long ExistPackagesPendingDeferredRemoval(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsOutdatedPackagesCleanupDone@DeferredRemovalHelper@Deployment@Common@@QEAAJAEA_NPEA_N@Z
    long GetIsOutdatedPackagesCleanupDone(bool &, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsPackageRemovalPending@DeferredRemovalHelper@Deployment@Common@@QEAAJPEBGPEAE@Z
    long GetIsPackageRemovalPending(unsigned short const *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsPackageRemovalPendingByUri@DeferredRemovalHelper@Deployment@Common@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAE@Z
    long GetIsPackageRemovalPendingByUri(WindissectOpaque *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsUupProductRemovalPending@DeferredRemovalHelper@Deployment@Common@@QEAAJPEBGPEAE@Z
    long GetIsUupProductRemovalPending(unsigned short const *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutdatedPackagesCleanupDone@DeferredRemovalHelper@Deployment@Common@@QEAAJ_N@Z
    long SetOutdatedPackagesCleanupDone(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserSid@DeferredRemovalHelper@Deployment@Common@@QEAAJPEBG@Z
    long SetUserSid(unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildDeferredRemovalRegistryPath@DeferredRemovalHelper@Deployment@Common@@AEAAJPEBG0AEAPEBG@Z
    long BuildDeferredRemovalRegistryPath(unsigned short const *, unsigned short const *, unsigned short const * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistPackagesInDeferredRemovalCatalog@DeferredRemovalHelper@Deployment@Common@@AEAAJPEBGPEAE@Z
    long ExistPackagesInDeferredRemovalCatalog(unsigned short const *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferredRemovalUserRootKeyPath@DeferredRemovalHelper@Deployment@Common@@AEAAJAEAPEBG@Z
    long GetDeferredRemovalUserRootKeyPath(unsigned short const * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeRegPathBuilderBuffer@DeferredRemovalHelper@Deployment@Common@@AEAAJPEBG@Z
    long InitializeRegPathBuilderBuffer(unsigned short const *);
};
} // namespace Common::Deployment
