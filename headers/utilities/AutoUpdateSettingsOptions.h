#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 47 member(s).
namespace Windows::Management::Deployment {
class AutoUpdateSettingsOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AutoUpdateSettingsOptions@Deployment@Management@Windows@@QEAA@XZ
    AutoUpdateSettingsOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AutoUpdateSettingsOptions@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AutoUpdateSettingsOptions@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppInstallerUri@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long get_AppInstallerUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutomaticBackgroundTask@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_AutomaticBackgroundTask(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DependencyPackageUris@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long get_DependencyPackageUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceUpdateFromAnyVersion@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_ForceUpdateFromAnyVersion(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoursBetweenUpdateChecks@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAI@Z
    virtual long get_HoursBetweenUpdateChecks(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAutoRepairEnabled@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_IsAutoRepairEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OnLaunch@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_OnLaunch(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OptionalPackageUris@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long get_OptionalPackageUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RepairUris@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long get_RepairUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowPrompt@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_ShowPrompt(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UpdateBlocksActivation@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_UpdateBlocksActivation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UpdateUris@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long get_UpdateUris(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAUPackageVersion@ApplicationModel@4@@Z
    virtual long get_Version(::Windows::ApplicationModel::PackageVersion *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AppInstallerUri@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long put_AppInstallerUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutomaticBackgroundTask@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_AutomaticBackgroundTask(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForceUpdateFromAnyVersion@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_ForceUpdateFromAnyVersion(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HoursBetweenUpdateChecks@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJI@Z
    virtual long put_HoursBetweenUpdateChecks(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsAutoRepairEnabled@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_IsAutoRepairEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OnLaunch@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_OnLaunch(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShowPrompt@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_ShowPrompt(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UpdateBlocksActivation@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJE@Z
    virtual long put_UpdateBlocksActivation(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Version@AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAAJUPackageVersion@ApplicationModel@4@@Z
    virtual long put_Version(::Windows::ApplicationModel::PackageVersion);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoUpdateSettingsOptions@Deployment@Management@Windows@@UEAA@XZ
    virtual ~AutoUpdateSettingsOptions();
};
} // namespace Windows::Management::Deployment
