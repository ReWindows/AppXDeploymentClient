#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 56 member(s).
namespace Windows::Management::Deployment {
class ClientDeploymentRequest {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAJXZ
    virtual long Cancel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClientDeploymentRequest@Deployment@Management@Windows@@QEAA@XZ
    ClientDeploymentRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageCatalog@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAJPEAPEAUIPackageCatalog@ApplicationModel@4@@Z
    virtual long GetPackageCatalog(::Windows::ApplicationModel::IPackageCatalog * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAJPEAPEAUIDeploymentResult@234@@Z
    virtual long GetResults(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitAndSignalCompletion@ClientDeploymentRequest@Deployment@Management@Windows@@QEAAJW4DeploymentOperation@2Common@@@Z
    long InitAndSignalCompletion(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ClientDeploymentRequest@Deployment@Management@Windows@@QEAAJAEBUClientDeploymentRequestParameters@234@@Z
    long Initialize(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAXXZ
    virtual void OnCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAXXZ
    virtual void OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStart@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAJXZ
    virtual long OnStart();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCorrelationVector@ClientDeploymentRequest@Deployment@Management@Windows@@QEAAJPEAUHSTRING__@@@Z
    long SetCorrelationVector(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetError@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAXJ@Z
    virtual void SetError(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetingData@ClientDeploymentRequest@Deployment@Management@Windows@@QEAAJPEAUHSTRING__@@@Z
    long SetTargetingData(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExtendedErrorStatus@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAXPEBXK@Z
    virtual void UpdateExtendedErrorStatus(void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStatus@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAXPEAUDeploymentRequestStatus@PackageManagerInternal@@@Z
    virtual void UpdateStatus(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAJPEAPEAU?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageMoniker@ClientDeploymentRequest@Deployment@Management@Windows@@QEAAJPEAPEAUHSTRING__@@@Z
    long get_PackageMoniker(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Progress@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAJPEAPEAU?$IAsyncOperationProgressHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long get_Progress(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAJPEAU?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long put_Completed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Progress@ClientDeploymentRequest@Deployment@Management@Windows@@UEAAJPEAU?$IAsyncOperationProgressHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z
    virtual long put_Progress(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClientDeploymentRequest@Deployment@Management@Windows@@UEAA@XZ
    virtual ~ClientDeploymentRequest();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWnfCallback@ClientDeploymentRequest@Deployment@Management@Windows@@MEAAXXZ
    virtual void SetWnfCallback();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncStartWorkCallback@ClientDeploymentRequest@Deployment@Management@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z
    static void AsyncStartWorkCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_WORK *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDeploymentResult@ClientDeploymentRequest@Deployment@Management@Windows@@AEAAJXZ
    long InitializeDeploymentResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartImpl@ClientDeploymentRequest@Deployment@Management@Windows@@AEAAJPEBG0IPEAPEBGI1I1I10PEAU_WNF_STATE_NAME@@0@Z
    long StartImpl(unsigned short const *, unsigned short const *, unsigned int, unsigned short const * *, unsigned int, unsigned short const * *, unsigned int, unsigned short const * *, unsigned int, unsigned short const * *, unsigned short const *, _WNF_STATE_NAME *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartServerSideWork@ClientDeploymentRequest@Deployment@Management@Windows@@AEAAJXZ
    long StartServerSideWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWork@ClientDeploymentRequest@Deployment@Management@Windows@@AEAAJXZ
    long StartWork();
};
} // namespace Windows::Management::Deployment
