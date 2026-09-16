#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 14 member(s).
namespace Windows::Management::Deployment {
class ClientRequestBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClientRequestBase@Deployment@Management@Windows@@QEAA@XZ
    ClientRequestBase();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClientRequestBase@Deployment@Management@Windows@@UEAA@XZ
    virtual ~ClientRequestBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelImpl@ClientRequestBase@Deployment@Management@Windows@@MEAAJU_WNF_STATE_NAME@@@Z
    virtual long CancelImpl(_WNF_STATE_NAME);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckStatusForGetResults@ClientRequestBase@Deployment@Management@Windows@@MEAAJW4AsyncStatusInternal@Details@WRL@Microsoft@@@Z
    virtual long CheckStatusForGetResults(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWnfStateNameImpl@ClientRequestBase@Deployment@Management@Windows@@IEAAJPEAU_WNF_STATE_NAME@@@Z
    long CreateWnfStateNameImpl(_WNF_STATE_NAME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterWnfCallback@ClientRequestBase@Deployment@Management@Windows@@IEAA_NXZ
    bool EnterWnfCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveWnfCallback@ClientRequestBase@Deployment@Management@Windows@@IEAAXXZ
    void LeaveWnfCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenToProgress@ClientRequestBase@Deployment@Management@Windows@@MEAAJU_WNF_STATE_NAME@@@Z
    virtual long ListenToProgress(_WNF_STATE_NAME);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWnfResource@ClientRequestBase@Deployment@Management@Windows@@IEAAXXZ
    void ReleaseWnfResource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnSubscribeOnStateNameDeletion@ClientRequestBase@Deployment@Management@Windows@@MEAAXXZ
    virtual void UnSubscribeOnStateNameDeletion();
};
} // namespace Windows::Management::Deployment
