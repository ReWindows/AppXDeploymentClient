#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 2 member(s).
class DirectoryACLs {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRedirectedResourceRootACLs@DirectoryACLs@@YAJPEBG0W4Flags@1@@Z
    long ApplyRedirectedResourceRootACLs(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplySecurityDescriptor@DirectoryACLs@@YAJPEBGW4Flags@1@PEAU_SECURITY_DESCRIPTOR@@@Z
    long ApplySecurityDescriptor(unsigned short const *, int, _SECURITY_DESCRIPTOR *);
};
