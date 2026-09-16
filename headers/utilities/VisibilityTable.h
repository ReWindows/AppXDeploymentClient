#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 29 member(s).
namespace PackageRepository {
class VisibilityTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisibility@VisibilityTable@PackageRepository@@UEAAJPEBVVisibilityRow@2@@Z
    virtual long AddVisibility(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteCurrentRow@VisibilityTable@PackageRepository@@UEAAJXZ
    virtual long DeleteCurrentRow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteVisibilityInfoByUserAndPackage@VisibilityTable@PackageRepository@@UEAAJPEAX_J@Z
    virtual long DeleteVisibilityInfoByUserAndPackage(void *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterGetAllRows@VisibilityTable@PackageRepository@@UEAAJW4SortOrder@IVisibilityTable@2@@Z
    virtual long FilterGetAllRows(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnAppDataVolumeKey@VisibilityTable@PackageRepository@@UEAAJK@Z
    virtual long FilterOnAppDataVolumeKey(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnPackageKey@VisibilityTable@PackageRepository@@UEAAJ_J@Z
    virtual long FilterOnPackageKey(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnUserSid@VisibilityTable@PackageRepository@@UEAAJPEAX@Z
    virtual long FilterOnUserSid(void *);
    // Category: Method | Source: PE Export
    // Symbol: ?FilterOnUserSidPackageKey@VisibilityTable@PackageRepository@@UEAAJPEAX_J@Z
    virtual long FilterOnUserSidPackageKey(void *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@VisibilityTable@PackageRepository@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@VisibilityTable@PackageRepository@@UEAAJPEAPEAVVisibilityRow@2@@Z
    virtual long GetNext(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowCount@VisibilityTable@PackageRepository@@UEAAJPEAK@Z
    virtual long GetRowCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibility@VisibilityTable@PackageRepository@@UEAAJPEAX_JPEAPEAVVisibilityRow@2@@Z
    virtual long GetVisibility(void *, int64_t, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibilityCurrent@VisibilityTable@PackageRepository@@UEAAJPEAX_JPEAPEAVVisibilityRow@2@@Z
    virtual long GetVisibilityCurrent(void *, int64_t, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibilityState@VisibilityTable@PackageRepository@@UEAAJ_JPEAX_NPEAW4DeploymentState@StateRepository@@@Z
    virtual long GetVisibilityState(int64_t, void *, bool, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibilityStateForCurrentUser@VisibilityTable@PackageRepository@@UEAAJPEAVPackageRow@2@PEAW4DeploymentState@StateRepository@@_N@Z
    virtual long GetVisibilityStateForCurrentUser(WindissectOpaque *, int *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibilityStateForOtherUsers@VisibilityTable@PackageRepository@@UEAAJPEAVPackageRow@2@PEAW4DeploymentState@StateRepository@@@Z
    virtual long GetVisibilityStateForOtherUsers(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RollbackTransaction@VisibilityTable@PackageRepository@@UEAAXXZ
    virtual void RollbackTransaction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StatementDone@VisibilityTable@PackageRepository@@UEAAJXZ
    virtual long StatementDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVisibility@VisibilityTable@PackageRepository@@UEAAJPEAX_JPEAPEAVVisibilityRow@2@@Z
    virtual long TryGetVisibility(void *, int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentRowAppDataVolumeKey@VisibilityTable@PackageRepository@@UEAAJK@Z
    virtual long UpdateCurrentRowAppDataVolumeKey(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentRowIsExplicitlyInstalled@VisibilityTable@PackageRepository@@UEAAJ_N@Z
    virtual long UpdateCurrentRowIsExplicitlyInstalled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentRowVisibilityState@VisibilityTable@PackageRepository@@UEAAJW4DeploymentState@StateRepository@@@Z
    virtual long UpdateCurrentRowVisibilityState(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisibilityTable@PackageRepository@@UEAA@XZ
    virtual ~VisibilityTable();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@VisibilityTable@PackageRepository@@AEAAJAEBVPackageUser@Entity@StateRepository@@AEAVVisibilityRow@2@@Z
    long CopyFrom(WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveRow@VisibilityTable@PackageRepository@@AEAAJAEBVPackageUser@Entity@StateRepository@@PEAPEAVVisibilityRow@2@@Z
    long RetrieveRow(WindissectOpaque const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPackageUser@VisibilityTable@PackageRepository@@AEAAJPEAX_JAEAVPackageUser@Entity@StateRepository@@AEA_N@Z
    long TryGetPackageUser(void *, int64_t, WindissectOpaque &, bool &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisibilityTable@PackageRepository@@AEAA@PEAVIRepositorySessionInfo@1@@Z
    VisibilityTable(WindissectOpaque *);
};
} // namespace PackageRepository
