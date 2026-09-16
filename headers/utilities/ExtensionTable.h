#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 18 member(s).
namespace PackageRepository {
class ExtensionTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddExtension@ExtensionTable@PackageRepository@@UEAAJPEAVExtensionRow@2@@Z
    virtual long AddExtension(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteCurrentRow@ExtensionTable@PackageRepository@@UEAAJXZ
    virtual long DeleteCurrentRow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterGetAllRows@ExtensionTable@PackageRepository@@UEAAJXZ
    virtual long FilterGetAllRows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnUserSidCategoryKeystring@ExtensionTable@PackageRepository@@UEAAJQEAXPEBG1@Z
    virtual long FilterOnUserSidCategoryKeystring(void * const, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnUserSidPackageKey@ExtensionTable@PackageRepository@@UEAAJQEAX_J@Z
    virtual long FilterOnUserSidPackageKey(void * const, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnUserSidPackageKeyCategory@ExtensionTable@PackageRepository@@UEAAJQEAX_JPEBG@Z
    virtual long FilterOnUserSidPackageKeyCategory(void * const, int64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnUserSidPackageKeyCategoryKeystring@ExtensionTable@PackageRepository@@UEAAJQEAX_JPEBG2@Z
    virtual long FilterOnUserSidPackageKeyCategoryKeystring(void * const, int64_t, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@ExtensionTable@PackageRepository@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@ExtensionTable@PackageRepository@@UEAAJPEAPEAVExtensionRow@2@@Z
    virtual long GetNext(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowCount@ExtensionTable@PackageRepository@@UEAAJPEAK@Z
    virtual long GetRowCount(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RollbackTransaction@ExtensionTable@PackageRepository@@UEAAXXZ
    virtual void RollbackTransaction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StatementDone@ExtensionTable@PackageRepository@@UEAAJXZ
    virtual long StatementDone();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExtensionTable@PackageRepository@@UEAA@XZ
    virtual ~ExtensionTable();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@ExtensionTable@PackageRepository@@AEAAJAEBVAppxExtension@Entity@StateRepository@@AEAVExtensionRow@2@@Z
    long CopyFrom(WindissectOpaque const &, WindissectOpaque &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExtensionTable@PackageRepository@@AEAA@PEAVIRepositorySessionInfo@1@@Z
    ExtensionTable(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveRow@ExtensionTable@PackageRepository@@AEAAJAEBVAppxExtension@Entity@StateRepository@@PEAPEAVExtensionRow@2@@Z
    long RetrieveRow(WindissectOpaque const &, WindissectOpaque * *);
};
} // namespace PackageRepository
