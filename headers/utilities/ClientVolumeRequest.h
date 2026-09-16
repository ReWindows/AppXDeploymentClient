#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 41 member(s).
namespace Windows::Management::Deployment {
class ClientVolumeRequest {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ClientVolumeRequest@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@ClientVolumeRequest@Deployment@Management@Windows@@UEAAJXZ
    virtual long Cancel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClientVolumeRequest@Deployment@Management@Windows@@QEAA@XZ
    ClientVolumeRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@ClientVolumeRequest@Deployment@Management@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ClientVolumeRequest@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageVolume@ClientVolumeRequest@Deployment@Management@Windows@@QEAAJPEAPEAUIPackageVolume@234@@Z
    long GetPackageVolume(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@ClientVolumeRequest@Deployment@Management@Windows@@UEAAJPEAPEAUIPackageVolume@234@@Z
    virtual long GetResults(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ClientVolumeRequest@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ClientVolumeRequest@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitAndSignalCompletion@ClientVolumeRequest@Deployment@Management@Windows@@QEAAJW4DeploymentOperation@2Common@@I@Z
    long InitAndSignalCompletion(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ClientVolumeRequest@Deployment@Management@Windows@@QEAAJW4DeploymentOperation@2Common@@IQEAUHSTRING__@@@Z
    long Initialize(int, unsigned int, HSTRING__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@ClientVolumeRequest@Deployment@Management@Windows@@UEAAXXZ
    virtual void OnCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@ClientVolumeRequest@Deployment@Management@Windows@@UEAAXXZ
    virtual void OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStart@ClientVolumeRequest@Deployment@Management@Windows@@UEAAJXZ
    virtual long OnStart();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ClientVolumeRequest@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ClientVolumeRequest@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetError@ClientVolumeRequest@Deployment@Management@Windows@@UEAAXJ@Z
    virtual void SetError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExtendedErrorStatus@ClientVolumeRequest@Deployment@Management@Windows@@UEAAXPEBXK@Z
    virtual void UpdateExtendedErrorStatus(void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStatus@ClientVolumeRequest@Deployment@Management@Windows@@UEAAXPEAUVolumeRequestStatus@PackageManagerInternal@@@Z
    virtual void UpdateStatus(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@ClientVolumeRequest@Deployment@Management@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@PEAVPackageVolume@Deployment@Management@Windows@@@Foundation@4@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@ClientVolumeRequest@Deployment@Management@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVPackageVolume@Deployment@Management@Windows@@@Foundation@4@@Z
    virtual long put_Completed(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClientVolumeRequest@Deployment@Management@Windows@@UEAA@XZ
    virtual ~ClientVolumeRequest();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWnfCallback@ClientVolumeRequest@Deployment@Management@Windows@@MEAAXXZ
    virtual void SetWnfCallback();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartImpl@ClientVolumeRequest@Deployment@Management@Windows@@AEAAJPEBGPEAU_WNF_STATE_NAME@@@Z
    long StartImpl(unsigned short const *, _WNF_STATE_NAME *);
};
} // namespace Windows::Management::Deployment
