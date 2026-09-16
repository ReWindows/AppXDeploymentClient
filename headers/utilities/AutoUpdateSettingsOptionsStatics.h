#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 6 member(s).
namespace Windows::Management::Deployment {
class AutoUpdateSettingsOptionsStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AutoUpdateSettingsOptionsStatics@Deployment@Management@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AutoUpdateSettingsOptionsStatics@Deployment@Management@Windows@@QEAA@XZ
    AutoUpdateSettingsOptionsStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromAppInstallerInfo@AutoUpdateSettingsOptionsStatics@Deployment@Management@Windows@@UEAAJPEAUIAppInstallerInfo@ApplicationModel@4@PEAPEAUIAutoUpdateSettingsOptions@234@@Z
    virtual long CreateFromAppInstallerInfo(::Windows::ApplicationModel::IAppInstallerInfo *, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyUrisToAppInstallerInfoList@AutoUpdateSettingsOptionsStatics@Deployment@Management@Windows@@AEAAJPEAU?$IVectorView@PEAVUri@Foundation@Windows@@@Collections@Foundation@4@PEAU?$IVector@PEAVUri@Foundation@Windows@@@674@@Z
    long CopyUrisToAppInstallerInfoList(WindissectOpaque *, WindissectOpaque *);
};
} // namespace Windows::Management::Deployment
