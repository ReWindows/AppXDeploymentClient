#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 8 member(s).
namespace Windows::Management::Deployment {
class DeploymentOptionsValidator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@DeploymentOptionsValidator@Deployment@Management@Windows@@SAJW4DeploymentOperation@2Common@@W4DeploymentOptions@26@PEAI@Z
    static long Validate(int, int, unsigned int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@DeploymentOptionsValidator@Deployment@Management@Windows@@AEAAJPEAI@Z
    long Validate(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAddByAppInstallerOperation@DeploymentOptionsValidator@Deployment@Management@Windows@@AEAAJXZ
    long ValidateAddByAppInstallerOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMove@DeploymentOptionsValidator@Deployment@Management@Windows@@AEAAJPEAI@Z
    long ValidateMove(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRegistration@DeploymentOptionsValidator@Deployment@Management@Windows@@AEAAJPEAI@Z
    long ValidateRegistration(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRemove@DeploymentOptionsValidator@Deployment@Management@Windows@@AEAAJPEAI@Z
    long ValidateRemove(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateStage@DeploymentOptionsValidator@Deployment@Management@Windows@@AEAAJPEAI@Z
    long ValidateStage(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateUpdate@DeploymentOptionsValidator@Deployment@Management@Windows@@AEAAJXZ
    long ValidateUpdate();
};
} // namespace Windows::Management::Deployment
