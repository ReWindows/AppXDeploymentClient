#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 16 member(s).
namespace PackageRepository {
class DependencyGraphTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDependency@DependencyGraphTable@PackageRepository@@UEAAJPEBVDependencyGraphRow@2@@Z
    virtual long AddDependency(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteCurrentRow@DependencyGraphTable@PackageRepository@@UEAAJXZ
    virtual long DeleteCurrentRow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterGetAllRows@DependencyGraphTable@PackageRepository@@UEAAJXZ
    virtual long FilterGetAllRows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnUserSidDependentPackage@DependencyGraphTable@PackageRepository@@UEAAJPEAX_J@Z
    virtual long FilterOnUserSidDependentPackage(void *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnUserSidDependentPackageDependencyType@DependencyGraphTable@PackageRepository@@UEAAJPEAX_JW4DependencyGraphType@StateRepository@@@Z
    virtual long FilterOnUserSidDependentPackageDependencyType(void *, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnUserSidSupplierPackage@DependencyGraphTable@PackageRepository@@UEAAJPEAX_J@Z
    virtual long FilterOnUserSidSupplierPackage(void *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@DependencyGraphTable@PackageRepository@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@DependencyGraphTable@PackageRepository@@UEAAJPEAPEAVDependencyGraphRow@2@@Z
    virtual long GetNext(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowCount@DependencyGraphTable@PackageRepository@@UEAAJPEAK@Z
    virtual long GetRowCount(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RollbackTransaction@DependencyGraphTable@PackageRepository@@UEAAXXZ
    virtual void RollbackTransaction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StatementDone@DependencyGraphTable@PackageRepository@@UEAAJXZ
    virtual long StatementDone();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DependencyGraphTable@PackageRepository@@UEAA@XZ
    virtual ~DependencyGraphTable();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@DependencyGraphTable@PackageRepository@@IEAAJAEBVDependencyGraph@Entity@StateRepository@@AEAVDependencyGraphRow@2@@Z
    long CopyFrom(WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveRow@DependencyGraphTable@PackageRepository@@IEAAJAEBVDependencyGraph@Entity@StateRepository@@PEAPEAVDependencyGraphRow@2@@Z
    long RetrieveRow(WindissectOpaque const &, WindissectOpaque * *);
};
} // namespace PackageRepository
