#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 30 member(s).
namespace StateRepository::Entity {
class Package {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Package@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByPackageFullName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamily@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByPackageFamily(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndPackageType_SortedByNameAndPublisherIdAndResourceIdAndVersion@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4PackageType@3@AEAVStatement@3@@Z
    static long FindByPackageFamilyAndPackageType_SortedByNameAndPublisherIdAndResourceIdAndVersion(WindissectOpaque &, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndResourceIdAndArchitecture@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGIAEAVStatement@3@@Z
    static long FindByPackageFamilyAndResourceIdAndArchitecture(WindissectOpaque &, int64_t, unsigned short const *, unsigned int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageType@Package@Entity@StateRepository@@SAJAEAVDatabase@3@W4PackageType@3@AEAVStatement@3@@Z
    static long FindByPackageType(WindissectOpaque &, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPublisherId@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByPublisherId(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByVolume@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByVolume(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@Package@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@@Z
    static long Get(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Package@Entity@StateRepository@@QEAA@XZ
    Package();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayName@Package@Entity@StateRepository@@QEAAJPEBG@Z
    long SetDisplayName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsInRelatedSet@Package@Entity@StateRepository@@QEAAJ_N@Z
    long SetIsInRelatedSet(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLogo@Package@Entity@StateRepository@@QEAAJPEBG@Z
    long SetLogo(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMostRecentlyStagedInFamilyByAllClearInPackageFamily@Package@Entity@StateRepository@@SAJAEAVDatabase@3@@Z
    static long SetMostRecentlyStagedInFamilyByAllClearInPackageFamily(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMostRecentlyStagedInFamilyByPackageAndNotDeploymentState@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4DeploymentState@3@2@Z
    static long SetMostRecentlyStagedInFamilyByPackageAndNotDeploymentState(WindissectOpaque &, int64_t, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageFullName@Package@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPackageFullName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPublisherDisplayName@Package@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPublisherDisplayName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageFullName@Package@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByPackageFullName(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFlags2@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4PackageFlags2@3@2@Z
    static long UpdateFlags2(WindissectOpaque &, int64_t, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMostRecentlyStagedInFamilyFlags@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_N@Z
    static long UpdateMostRecentlyStagedInFamilyFlags(WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMostRecentlyStagedInFamilyFlagsToHighestVersion@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_J@Z
    static long UpdateMostRecentlyStagedInFamilyFlagsToHighestVersion(WindissectOpaque &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSourceBundle@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_J1@Z
    static long UpdateSourceBundle(WindissectOpaque &, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetDeviceFamily@Package@Entity@StateRepository@@SAJAEAVDatabase@3@_J1@Z
    static long UpdateTargetDeviceFamily(WindissectOpaque &, int64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Package@Entity@StateRepository@@QEAA@XZ
    ~Package();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@Package@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@Package@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
