#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 26 member(s).
namespace Windows::Management::Deployment::Internal {
class DiskUsageInformation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DiskUsageInformation@Internal@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DiskUsageInformation@Internal@Deployment@Management@Windows@@QEAA@XZ
    DiskUsageInformation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DiskUsageInformation@Internal@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DiskUsageInformation@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DiskUsageInformation@Internal@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DiskUsageInformation@Internal@Deployment@Management@Windows@@QEAAJPEAVPackageVolume@345@_K1@Z
    long Initialize(WindissectOpaque *, uint64_t, uint64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DiskUsageInformation@Internal@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DiskUsageInformation@Internal@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppDataUsage@DiskUsageInformation@Internal@Deployment@Management@Windows@@UEAAJPEA_K@Z
    virtual long get_AppDataUsage(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFileUsage@DiskUsageInformation@Internal@Deployment@Management@Windows@@UEAAJPEA_K@Z
    virtual long get_PackageFileUsage(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Volume@DiskUsageInformation@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUIPackageVolume@345@@Z
    virtual long get_Volume(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DiskUsageInformation@Internal@Deployment@Management@Windows@@UEAA@XZ
    virtual ~DiskUsageInformation();
};
} // namespace Windows::Management::Deployment::Internal
