#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 4 member(s).
namespace Deployment {
class SecurityDescriptorBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromSddlTemplateStringWithTrusteeSidParseToken@SecurityDescriptorBuilder@Deployment@@QEAAJPEBG00000PEAPEAU_SECURITY_ATTRIBUTES@@@Z
    long CreateFromSddlTemplateStringWithTrusteeSidParseToken(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, _SECURITY_ATTRIBUTES * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecurityDescriptorBuilder@Deployment@@QEAA@XZ
    ~SecurityDescriptorBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCreateFromSddlLiteralString@SecurityDescriptorBuilder@Deployment@@AEAAJPEBGPEAPEAU_SECURITY_ATTRIBUTES@@@Z
    long InternalCreateFromSddlLiteralString(unsigned short const *, _SECURITY_ATTRIBUTES * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalReleaseAndInitializeSecurityDescriptor@SecurityDescriptorBuilder@Deployment@@AEAAJXZ
    long InternalReleaseAndInitializeSecurityDescriptor();
};
} // namespace Deployment
