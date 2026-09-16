#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 17 member(s).
namespace Windows::Management::Deployment {
class ClientBase {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeploymentOperationWithNames@ClientBase@Deployment@Management@Windows@@IEAAJAEBUDeploymentOperationParameters@1234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    long CreateDeploymentOperationWithNames(WindissectOpaque const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstallRequest@ClientBase@Deployment@Management@Windows@@IEAAJW4DeploymentOperation@2Common@@W4DeploymentOptions@26@W4DeploymentOperationPriority@26@PEAUHSTRING__@@_KPEAU?$IIterable@PEAVUri@Foundation@Windows@@@Collections@Foundation@4@PEAUIPackageVolume@234@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@55333PEAVExpectedDigestsMap@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    long CreateInstallRequest(int, int, int, HSTRING__*, uint64_t, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, HSTRING__*, HSTRING__*, HSTRING__*, ExpectedDigestsMap *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstallRequest@ClientBase@Deployment@Management@Windows@@IEAAJW4DeploymentOperation@2Common@@W4DeploymentOptions@26@PEAUIUriRuntimeClass@Foundation@4@PEAUIStagePackageOptions@234@PEAVExpectedDigestsMap@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@94@@Z
    long CreateInstallRequest(int, int, WindissectOpaque *, WindissectOpaque *, ExpectedDigestsMap *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstallRequest@ClientBase@Deployment@Management@Windows@@IEAAJAEBUInstallRequestParameters@1234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    long CreateInstallRequest(WindissectOpaque const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRegisterRequest@ClientBase@Deployment@Management@Windows@@IEAAJAEBURegisterRequestParameters@1234@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    long CreateRegisterRequest(WindissectOpaque const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRegisterRequest@ClientBase@Deployment@Management@Windows@@IEAAJW4DeploymentOptions@2Common@@PEAUIUriRuntimeClass@Foundation@4@PEAUIRegisterPackageOptions@234@PEAVExpectedDigestsMap@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@84@@Z
    long CreateRegisterRequest(int, WindissectOpaque *, WindissectOpaque *, ExpectedDigestsMap *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetVolumeId@ClientBase@Deployment@Management@Windows@@IEAAJPEAUIPackageVolume@234@PEAI@Z
    long GetTargetVolumeId(WindissectOpaque *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSchedulingPriorityOption@ClientBase@Deployment@Management@Windows@@IEAAJPEAW4DeploymentOptions@2Common@@@Z
    long SetSchedulingPriorityOption(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToDeploymentOptions@ClientBase@Deployment@Management@Windows@@KA?AW4DeploymentOptions@2Common@@W4PackageOperationPriority@234@@Z
    static int ToDeploymentOptions(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToDeploymentOptions@ClientBase@Deployment@Management@Windows@@KAJPEAUIAddPackageOptions@234@AEAW4DeploymentOptions@2Common@@@Z
    static long ToDeploymentOptions(WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToDeploymentOptions@ClientBase@Deployment@Management@Windows@@KAJPEAUIAddPackageOptions@234@PEAUIAddPackageOptionsInternal@Internal@234@AEAW4DeploymentOptions@2Common@@@Z
    static long ToDeploymentOptions(WindissectOpaque *, WindissectOpaque *, int &);
};
} // namespace Windows::Management::Deployment
