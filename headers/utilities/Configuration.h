#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 9 member(s).
namespace Common::Deployment {
class Configuration {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreMrtResourcesRedirected@Configuration@Deployment@Common@@YAJ_NPEA_N@Z
    long AreMrtResourcesRedirected(bool, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppxConfigurationValue@Configuration@Deployment@Common@@YAJPEAUHKEY__@@PEBGIPEAI@Z
    long GetAppxConfigurationValue(HKEY__*, unsigned short const *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolPolicyValue@Configuration@Deployment@Common@@YAJPEBG0PEA_N@Z
    long GetBoolPolicyValue(unsigned short const *, unsigned short const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRootForPackage@Configuration@Deployment@Common@@YAJPEBGPEAVStringBuffer@3@@Z
    long GetPackageRootForPackage(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreInstalledSisFullPath@Configuration@Deployment@Common@@YAJPEAVStringBuffer@3@@Z
    long GetPreInstalledSisFullPath(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRedirectedResourceRootForPackage@Configuration@Deployment@Common@@YAJPEBGPEAVStringBuffer@3@@Z
    long GetRedirectedResourceRootForPackage(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemSisFullPath@Configuration@Deployment@Common@@YAJPEAVStringBuffer@3@@Z
    long GetSystemSisFullPath(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemSisManifestPathFromPackageFullName@Configuration@Deployment@Common@@YAJPEBGPEAVStringBuffer@3@@Z
    long GetSystemSisManifestPathFromPackageFullName(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAuditBoot@Configuration@Deployment@Common@@YAJPEAH@Z
    long IsAuditBoot(int *);
};
} // namespace Common::Deployment
