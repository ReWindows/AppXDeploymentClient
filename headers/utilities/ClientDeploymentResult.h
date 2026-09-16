#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 25 member(s).
namespace Windows::Management::Deployment {
class ClientDeploymentResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ClientDeploymentResult@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClientDeploymentResult@Deployment@Management@Windows@@QEAA@XZ
    ClientDeploymentResult();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ClientDeploymentResult@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ClientDeploymentResult@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ClientDeploymentResult@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ClientDeploymentResult@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ClientDeploymentResult@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivityId@ClientDeploymentResult@Deployment@Management@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_ActivityId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ErrorText@ClientDeploymentResult@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ErrorText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedErrorCode@ClientDeploymentResult@Deployment@Management@Windows@@UEAAJPEAJ@Z
    virtual long get_ExtendedErrorCode(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRegistered@ClientDeploymentResult@Deployment@Management@Windows@@UEAAJPEAE@Z
    virtual long get_IsRegistered(unsigned char *);
};
} // namespace Windows::Management::Deployment
