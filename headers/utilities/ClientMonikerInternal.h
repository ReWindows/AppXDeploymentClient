#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 24 member(s).
namespace Windows::Management::Deployment::Internal {
class ClientMonikerInternal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ClientMonikerInternal@Internal@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClientMonikerInternal@Internal@Deployment@Management@Windows@@QEAA@XZ
    ClientMonikerInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ClientMonikerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ClientMonikerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ClientMonikerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ClientMonikerInternal@Internal@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ClientMonikerInternal@Internal@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@ClientMonikerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFullName@ClientMonikerInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFullName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClientMonikerInternal@Internal@Deployment@Management@Windows@@UEAA@XZ
    virtual ~ClientMonikerInternal();
};
} // namespace Windows::Management::Deployment::Internal
