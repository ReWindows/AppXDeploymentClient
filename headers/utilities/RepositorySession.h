#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 35 member(s).
namespace PackageRepository {
class RepositorySession {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitSRDeploymentDatabaseChanges@RepositorySession@PackageRepository@@UEAAJ_N@Z
    virtual long CommitSRDeploymentDatabaseChanges(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitTransaction@RepositorySession@PackageRepository@@UEAAJ_N@Z
    virtual long CommitTransaction(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteDeferredWritesAndDeleteShadowsAndCompleteLongRunningTransactions@RepositorySession@PackageRepository@@UEAAJXZ
    virtual long CompleteDeferredWritesAndDeleteShadowsAndCompleteLongRunningTransactions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBundlePackageAssociations@RepositorySession@PackageRepository@@UEAAPEAUBundlePackageAssociation@2@XZ
    virtual WindissectOpaque * GetBundlePackageAssociations();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDatabase@RepositorySession@PackageRepository@@UEAAAEAVDatabase@StateRepository@@W4Partition@4@@Z
    virtual WindissectOpaque & GetDatabase(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDependencyGraphTable@RepositorySession@PackageRepository@@UEAAJPEAPEAVIDependencyGraphTable@2@@Z
    virtual long GetDependencyGraphTable(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeploymentDatabase@RepositorySession@PackageRepository@@UEAAPEAVDatabase@StateRepository@@XZ
    virtual WindissectOpaque * GetDeploymentDatabase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionTable@RepositorySession@PackageRepository@@UEAAJPEAPEAVIExtensionTable@2@@Z
    virtual long GetExtensionTable(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInMemoryPropertyBag@RepositorySession@PackageRepository@@UEAAPEAVRepositoryPropertyBag@2@XZ
    virtual WindissectOpaque * GetInMemoryPropertyBag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMachineDatabase@RepositorySession@PackageRepository@@UEAAPEAVDatabase@StateRepository@@XZ
    virtual WindissectOpaque * GetMachineDatabase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamiliesForMostRecentlyStagedFlagClear@RepositorySession@PackageRepository@@UEAAAEAV?$Array@_JV?$ContainerOperations@_J_J@Common@@VNoKey@2@V?$ContainerOperations@VNoKey@Common@@_J@2@V?$ArrayOperations@_JVNoKey@Common@@@2@@Common@@XZ
    virtual WindissectOpaque & GetPackageFamiliesForMostRecentlyStagedFlagClear();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPackageRow@RepositorySession@PackageRepository@@UEAAJ_JPEAPEAVPackageRow@2@@Z
    virtual long GetPackageRow(int64_t, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageTable@RepositorySession@PackageRepository@@UEAAJPEAPEAVIPackageTable@2@@Z
    virtual long GetPackageTable(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackagesToMarkMostRecentlyStaged@RepositorySession@PackageRepository@@UEAAAEAV?$Array@_JV?$ContainerOperations@_J_J@Common@@VNoKey@2@V?$ContainerOperations@VNoKey@Common@@_J@2@V?$ArrayOperations@_JVNoKey@Common@@@2@@Common@@XZ
    virtual WindissectOpaque & GetPackagesToMarkMostRecentlyStaged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackagesToMarkVersionSupercedencePerformed@RepositorySession@PackageRepository@@UEAAAEAV?$Array@_JV?$ContainerOperations@_J_J@Common@@VNoKey@2@V?$ContainerOperations@VNoKey@Common@@_J@2@V?$ArrayOperations@_JVNoKey@Common@@@2@@Common@@XZ
    virtual WindissectOpaque & GetPackagesToMarkVersionSupercedencePerformed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSkipUpdateExistingMostRecentlyStagedFlags@RepositorySession@PackageRepository@@UEAA_NXZ
    virtual bool GetSkipUpdateExistingMostRecentlyStagedFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibilityTable@RepositorySession@PackageRepository@@UEAAJPEAPEAVIVisibilityTable@2@@Z
    virtual long GetVisibilityTable(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkId@RepositorySession@PackageRepository@@UEAA_JXZ
    virtual int64_t GetWorkId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWowDependencyGraphTable@RepositorySession@PackageRepository@@UEAAJPEAPEAVIDependencyGraphTable@2@@Z
    virtual long GetWowDependencyGraphTable(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RepositorySession@PackageRepository@@QEAAJ_N_J@Z
    long Initialize(bool, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEvents_TileUser@RepositorySession@PackageRepository@@UEAAXXZ
    virtual void RaiseEvents_TileUser();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RepositorySession@PackageRepository@@QEAA@XZ
    RepositorySession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RollbackTransaction@RepositorySession@PackageRepository@@UEAAJXZ
    virtual long RollbackTransaction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSkipUpdateExistingMostRecentlyStagedFlags@RepositorySession@PackageRepository@@UEAAX_N@Z
    virtual void SetSkipUpdateExistingMostRecentlyStagedFlags(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDatabaseStatisticsAndOptimize@RepositorySession@PackageRepository@@UEAAX_N@Z
    virtual void UpdateDatabaseStatisticsAndOptimize(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSRCacheAndCheckpoint@RepositorySession@PackageRepository@@UEAAXXZ
    virtual void UpdateSRCacheAndCheckpoint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeOnce@RepositorySession@PackageRepository@@SAJXZ
    static long _InitializeOnce();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RepositorySession@PackageRepository@@UEAA@XZ
    virtual ~RepositorySession();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitSourceBundleIdPackageAssociations@RepositorySession@PackageRepository@@IEAAJXZ
    long CommitSourceBundleIdPackageAssociations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEvents_TileUser@RepositorySession@PackageRepository@@IEAAJPEBG_J1@Z
    long RaiseEvents_TileUser(unsigned short const *, int64_t, int64_t);
};
} // namespace PackageRepository
