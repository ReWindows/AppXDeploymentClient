#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 11 member(s).
namespace Common::Deployment {
class MRTHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAbsolutePathForPathResource@MRTHelper@Deployment@Common@@QEAAJPEBGAEAVStringBuffer@3@@Z
    long GetAbsolutePathForPathResource(unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullyQualifiedString@MRTHelper@Deployment@Common@@QEAAJW4MRTResourceType@23@PEBGAEAVStringBuffer@3@@Z
    long GetFullyQualifiedString(int, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@MRTHelper@Deployment@Common@@QEAAJPEBG0_N1@Z
    long Initialize(unsigned short const *, unsigned short const *, bool, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MRTHelper@Deployment@Common@@QEAA@XZ
    MRTHelper();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MRTHelper@Deployment@Common@@QEAA@XZ
    ~MRTHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMaps@MRTHelper@Deployment@Common@@AEAAJPEBG0_N@Z
    long LoadMaps(unsigned short const *, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedirectAbsoluteFileResource@MRTHelper@Deployment@Common@@AEAAJPEBG@Z
    long RedirectAbsoluteFileResource(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedirectQualifiedFileResource@MRTHelper@Deployment@Common@@AEAAJPEBG@Z
    long RedirectQualifiedFileResource(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplacePackageFullNameWithRedirectedPath@MRTHelper@Deployment@Common@@AEAAJAEAVStringBuffer@3@@Z
    long ReplacePackageFullNameWithRedirectedPath(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetResourceMaps@MRTHelper@Deployment@Common@@AEAAXXZ
    void ResetResourceMaps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryResolveReference@MRTHelper@Deployment@Common@@AEAAJW4MRTResourceType@23@PEBGAEAVStringBuffer@3@@Z
    long TryResolveReference(int, unsigned short const *, WindissectOpaque &);
};
} // namespace Common::Deployment
