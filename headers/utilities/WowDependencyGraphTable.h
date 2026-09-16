#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 16 member(s).
namespace PackageRepository {
class WowDependencyGraphTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDependency@WowDependencyGraphTable@PackageRepository@@UEAAJPEBVDependencyGraphRow@2@@Z
    virtual long AddDependency(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteCurrentRow@WowDependencyGraphTable@PackageRepository@@UEAAJXZ
    virtual long DeleteCurrentRow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterGetAllRows@WowDependencyGraphTable@PackageRepository@@UEAAJXZ
    virtual long FilterGetAllRows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnUserSidDependentPackage@WowDependencyGraphTable@PackageRepository@@UEAAJPEAX_J@Z
    virtual long FilterOnUserSidDependentPackage(void *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnUserSidDependentPackageDependencyType@WowDependencyGraphTable@PackageRepository@@UEAAJPEAX_JW4DependencyGraphType@StateRepository@@@Z
    virtual long FilterOnUserSidDependentPackageDependencyType(void *, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnUserSidSupplierPackage@WowDependencyGraphTable@PackageRepository@@UEAAJPEAX_J@Z
    virtual long FilterOnUserSidSupplierPackage(void *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@WowDependencyGraphTable@PackageRepository@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@WowDependencyGraphTable@PackageRepository@@UEAAJPEAPEAVDependencyGraphRow@2@@Z
    virtual long GetNext(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowCount@WowDependencyGraphTable@PackageRepository@@UEAAJPEAK@Z
    virtual long GetRowCount(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RollbackTransaction@WowDependencyGraphTable@PackageRepository@@UEAAXXZ
    virtual void RollbackTransaction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StatementDone@WowDependencyGraphTable@PackageRepository@@UEAAJXZ
    virtual long StatementDone();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WowDependencyGraphTable@PackageRepository@@UEAA@XZ
    virtual ~WowDependencyGraphTable();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@WowDependencyGraphTable@PackageRepository@@IEAAJAEBVWowDependencyGraph@Entity@StateRepository@@AEAVDependencyGraphRow@2@@Z
    long CopyFrom(WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveRow@WowDependencyGraphTable@PackageRepository@@IEAAJAEBVWowDependencyGraph@Entity@StateRepository@@PEAPEAVDependencyGraphRow@2@@Z
    long RetrieveRow(WindissectOpaque const &, WindissectOpaque * *);
};
} // namespace PackageRepository
