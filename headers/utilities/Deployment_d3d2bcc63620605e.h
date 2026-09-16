#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 1 member(s).
namespace Windows::Management {
class Deployment {
public:
    class AddPackageOptions;
    class AppInstallerManager;
    class AppInstallerManagerStatics;
    class AutoUpdateSettingsOptions;
    class AutoUpdateSettingsOptionsStatics;
    class ClientBase;
    class ClientDeploymentRequest;
    class ClientDeploymentResult;
    class ClientRequestBase;
    class ClientVolumeRequest;
    class CreateSharedPackageContainerOptions;
    class CreateSharedPackageContainerResult;
    class DebugSettings;
    class DeleteSharedPackageContainerOptions;
    class DeleteSharedPackageContainerResult;
    class DeploymentOptionsValidator;
    class FindSharedPackageContainerOptions;
    class Logging;
    class PackageAllUserProvisioningOptions;
    class PackageManager;
    class PackageUserInformation;
    class PackageVolume;
    class RegisterPackageOptions;
    class RemovePackageOptions;
    class SharedPackageContainer;
    class SharedPackageContainerManager;
    class SharedPackageContainerManagerStatics;
    class SharedPackageContainerMember;
    class SharedPackageContainerMemberFactory;
    class StagePackageOptions;
    class UpdateSharedPackageContainerOptions;
    class UpdateSharedPackageContainerResult;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForDeploymentOperation@Deployment@Management@Windows@@YAJKPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@3@PEAU?$IAsyncOperationProgressHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@53@PEAU?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@53@PEAPEAUIDeploymentResult@123@@Z
    long WaitForDeploymentOperation(unsigned long, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
};
} // namespace Windows::Management
