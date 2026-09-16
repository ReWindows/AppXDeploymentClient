#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 22 member(s).
namespace Windows::Management::Deployment {
class SharedPackageContainer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SharedPackageContainer@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SharedPackageContainer@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMembers@SharedPackageContainer@Deployment@Management@Windows@@UEAAJPEAPEAU?$IVector@PEAVSharedPackageContainerMember@Deployment@Management@Windows@@@Collections@Foundation@4@@Z
    virtual long GetMembers(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SharedPackageContainer@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SharedPackageContainer@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SharedPackageContainer@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SharedPackageContainer@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePackageFamily@SharedPackageContainer@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@PEAUIUpdateSharedPackageContainerOptions@234@PEAPEAUIUpdateSharedPackageContainerResult@234@@Z
    virtual long RemovePackageFamily(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetData@SharedPackageContainer@Deployment@Management@Windows@@UEAAJPEAPEAUIUpdateSharedPackageContainerResult@234@@Z
    virtual long ResetData(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SharedPackageContainer@Deployment@Management@Windows@@QEAAJPEAUHSTRING__@@0PEAU?$IVector@PEAVSharedPackageContainerMember@Deployment@Management@Windows@@@Collections@Foundation@4@V?$ComPtr@UIUser@StateRepository@Internal@Windows@@@WRL@Microsoft@@_N@Z
    long RuntimeClassInitialize(HSTRING__*, HSTRING__*, WindissectOpaque *, WindissectOpaque, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedPackageContainer@Deployment@Management@Windows@@QEAA@XZ
    SharedPackageContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@SharedPackageContainer@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@SharedPackageContainer@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedPackageContainer@Deployment@Management@Windows@@UEAA@XZ
    virtual ~SharedPackageContainer();
};
} // namespace Windows::Management::Deployment
