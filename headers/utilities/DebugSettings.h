#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 18 member(s).
namespace Windows::Management::Deployment {
class DebugSettings {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DebugSettings@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DebugSettings@Deployment@Management@Windows@@QEAA@XZ
    DebugSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DebugSettings@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DebugSettings@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DebugSettings@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DebugSettings@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DebugSettings@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentGroupStateAsync@DebugSettings@Deployment@Management@Windows@@UEAAJPEAUIPackage@ApplicationModel@4@PEAUHSTRING__@@W4PackageContentGroupState@64@PEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long SetContentGroupStateAsync(::Windows::ApplicationModel::IPackage *, HSTRING__*, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentGroupStateWithPercentageAsync@DebugSettings@Deployment@Management@Windows@@UEAAJPEAUIPackage@ApplicationModel@4@PEAUHSTRING__@@W4PackageContentGroupState@64@NPEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long SetContentGroupStateWithPercentageAsync(::Windows::ApplicationModel::IPackage *, HSTRING__*, int, double, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DebugSettings@Deployment@Management@Windows@@UEAA@XZ
    virtual ~DebugSettings();
};
} // namespace Windows::Management::Deployment
