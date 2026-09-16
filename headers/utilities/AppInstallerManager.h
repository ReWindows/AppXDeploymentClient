#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 25 member(s).
namespace Windows::Management::Deployment {
class AppInstallerManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppInstallerManager@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAutoUpdateSettings@AppInstallerManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long ClearAutoUpdateSettings(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppInstallerManager@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppInstallerManager@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppInstallerManager@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppInstallerManager@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppInstallerManager@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PauseAutoUpdatesUntil@AppInstallerManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@UDateTime@Foundation@4@@Z
    virtual long PauseAutoUpdatesUntil(HSTRING__*, WindissectOpaque);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppInstallerManager@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppInstallerManager@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoUpdateSettings@AppInstallerManager@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAUIAutoUpdateSettingsOptions@234@@Z
    virtual long SetAutoUpdateSettings(HSTRING__*, WindissectOpaque *);
};
} // namespace Windows::Management::Deployment
