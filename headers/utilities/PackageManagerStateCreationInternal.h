#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 29 member(s).
namespace Windows::Management::Deployment::Internal {
class PackageManagerStateCreationInternal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixStateLocationsAccess@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@_K@Z
    virtual long FixStateLocationsAccess(HSTRING__* const, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepairAppRegistration@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@_K@Z
    virtual long RepairAppRegistration(HSTRING__* const, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepairStateLocations@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@UEAAJQEAUHSTRING__@@_K@Z
    virtual long RepairStateLocations(HSTRING__* const, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateLocations@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@UEAAJPEAUHSTRING__@@_K@Z
    virtual long UpdateStateLocations(HSTRING__*, uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallerPackageFullNameMatchesOrFullTrust@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@CAJPEBG_KAEAV?$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@@Z
    static long CallerPackageFullNameMatchesOrFullTrust(unsigned short const *, uint64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppRegistrationRepairEnabled@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@AEAAJQEAUHSTRING__@@PEA_N@Z
    long IsAppRegistrationRepairEnabled(HSTRING__* const, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyCallerProvidedOwnPackageFullNameOrFullTrust@PackageManagerStateCreationInternal@Internal@Deployment@Management@Windows@@CAJPEAUHSTRING__@@_N@Z
    static long VerifyCallerProvidedOwnPackageFullNameOrFullTrust(HSTRING__*, bool);
};
} // namespace Windows::Management::Deployment::Internal
