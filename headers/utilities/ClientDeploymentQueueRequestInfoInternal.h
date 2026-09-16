#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 34 member(s).
namespace Windows::Management::Deployment::Internal {
class ClientDeploymentQueueRequestInfoInternal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@QEAA@XZ
    ClientDeploymentQueueRequestInfoInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@QEAAJPEAU?$IVector@PEAVClientMonikerInternal@Internal@Deployment@Management@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@111W4DeploymentOperationInternal@2345@W4DeploymentOptionsInternal@2345@_K144@Z
    long RuntimeClassInitialize(WindissectOpaque *, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, int, uint64_t, HSTRING__*, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallingProcess@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CallingProcess(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClientUserSid@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ClientUserSid(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentTicksCount@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEA_K@Z
    virtual long get_CurrentTicksCount(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeploymentOperation@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEAW4DeploymentOperationInternal@2345@@Z
    virtual long get_DeploymentOperation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeploymentOptions@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEAW4DeploymentOptionsInternal@2345@@Z
    virtual long get_DeploymentOptions(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OriginalTargetUserSid@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_OriginalTargetUserSid(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageManagerStateIndexInStateMachine@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEA_K@Z
    virtual long get_PackageManagerStateIndexInStateMachine(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageManagerStateName@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageManagerStateName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageMonikers@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVClientMonikerInternal@Internal@Deployment@Management@Windows@@@Collections@Foundation@5@@Z
    virtual long get_PackageMonikers(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetUserSid@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetUserSid(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TotalTicksCount@ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAAJPEA_K@Z
    virtual long get_TotalTicksCount(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClientDeploymentQueueRequestInfoInternal@Internal@Deployment@Management@Windows@@UEAA@XZ
    virtual ~ClientDeploymentQueueRequestInfoInternal();
};
} // namespace Windows::Management::Deployment::Internal
