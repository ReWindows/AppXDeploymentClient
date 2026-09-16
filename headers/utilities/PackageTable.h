#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 44 member(s).
namespace PackageRepository {
class PackageTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddExtensions@PackageTable@PackageRepository@@UEAAJ_JPEBGPEAUIAppxManifestReader@@W4DeploymentOptions@Deployment@Common@@@Z
    virtual long AddExtensions(int64_t, unsigned short const *, IAppxManifestReader *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMrtPackage@PackageTable@PackageRepository@@UEAAJPEAVPackageRow@2@@Z
    virtual long AddMrtPackage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackage@PackageTable@PackageRepository@@UEAAJPEAVPackageRow@2@@Z
    virtual long AddPackage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteCurrentRow@PackageTable@PackageRepository@@UEAAJXZ
    virtual long DeleteCurrentRow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeletePackage@PackageTable@PackageRepository@@UEAAJ_J@Z
    virtual long DeletePackage(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterGetAllRows@PackageTable@PackageRepository@@UEAAJ_J@Z
    virtual long FilterGetAllRows(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnFamilyName@PackageTable@PackageRepository@@UEAAJPEAXPEBG@Z
    virtual long FilterOnFamilyName(void *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnFamilyName@PackageTable@PackageRepository@@UEAAJ_JPEBG@Z
    virtual long FilterOnFamilyName(int64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnFamilyNamePackageType@PackageTable@PackageRepository@@UEAAJPEAXPEBGW4PackageType@StateRepository@@@Z
    virtual long FilterOnFamilyNamePackageType(void *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnFamilyNamePackageType@PackageTable@PackageRepository@@UEAAJ_JPEBGW4PackageType@StateRepository@@@Z
    virtual long FilterOnFamilyNamePackageType(int64_t, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnName@PackageTable@PackageRepository@@UEAAJPEAXPEBG@Z
    virtual long FilterOnName(void *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnName@PackageTable@PackageRepository@@UEAAJ_JPEBG@Z
    virtual long FilterOnName(int64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnNamePublisherId@PackageTable@PackageRepository@@UEAAJPEAXPEBG1@Z
    virtual long FilterOnNamePublisherId(void *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnNamePublisherId@PackageTable@PackageRepository@@UEAAJ_JPEBG1@Z
    virtual long FilterOnNamePublisherId(int64_t, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnNamePublisherIdResourceIdArchitecture@PackageTable@PackageRepository@@UEAAJ_JPEBG11W4SRProcessorArchitecture@StateRepository@@@Z
    virtual long FilterOnNamePublisherIdResourceIdArchitecture(int64_t, unsigned short const *, unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnPackageVolumeKey@PackageTable@PackageRepository@@UEAAJ_JK@Z
    virtual long FilterOnPackageVolumeKey(int64_t, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterOnPublisherId@PackageTable@PackageRepository@@UEAAJ_JPEBG@Z
    virtual long FilterOnPublisherId(int64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@PackageTable@PackageRepository@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExternalLocation@PackageTable@PackageRepository@@UEAAJ_J0AEAVPackageExternalLocation@Entity@StateRepository@@@Z
    virtual long GetExternalLocation(int64_t, int64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExternalLocation@PackageTable@PackageRepository@@UEAAJ_JAEAVPackageRow@2@@Z
    virtual long GetExternalLocation(int64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExternalLocation@PackageTable@PackageRepository@@UEAAJ_JPEAXAEAVPackageExternalLocation@Entity@StateRepository@@@Z
    virtual long GetExternalLocation(int64_t, void *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@PackageTable@PackageRepository@@UEAAJPEAPEAVPackageRow@2@@Z
    virtual long GetNext(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRow@PackageTable@PackageRepository@@UEAAJPEBGPEAXPEAPEAVPackageRow@2@@Z
    virtual long GetPackageRow(unsigned short const *, void *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRow@PackageTable@PackageRepository@@UEAAJPEBG_JPEAPEAVPackageRow@2@@Z
    virtual long GetPackageRow(unsigned short const *, int64_t, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRow@PackageTable@PackageRepository@@UEAAJ_J0PEAPEAVPackageRow@2@@Z
    virtual long GetPackageRow(int64_t, int64_t, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRow@PackageTable@PackageRepository@@UEAAJ_JPEAXPEAPEAVPackageRow@2@@Z
    virtual long GetPackageRow(int64_t, void *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRepositorySessionInfo@PackageTable@PackageRepository@@UEAAPEAVIRepositorySessionInfo@2@XZ
    virtual WindissectOpaque * GetRepositorySessionInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowCount@PackageTable@PackageRepository@@UEAAJPEAK@Z
    virtual long GetRowCount(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveRow@PackageTable@PackageRepository@@UEAAJAEBVPackage@Entity@StateRepository@@_JPEAPEAVPackageRow@2@@Z
    virtual long RetrieveRow(WindissectOpaque const &, int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RollbackTransaction@PackageTable@PackageRepository@@UEAAXXZ
    virtual void RollbackTransaction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StatementDone@PackageTable@PackageRepository@@UEAAJXZ
    virtual long StatementDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPackageRow@PackageTable@PackageRepository@@UEAAJPEBGPEAXPEAPEAVPackageRow@2@@Z
    virtual long TryGetPackageRow(unsigned short const *, void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPackageRow@PackageTable@PackageRepository@@UEAAJPEBG_JPEAPEAVPackageRow@2@@Z
    virtual long TryGetPackageRow(unsigned short const *, int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPackageRow@PackageTable@PackageRepository@@UEAAJ_J0PEAPEAVPackageRow@2@@Z
    virtual long TryGetPackageRow(int64_t, int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPackageRow@PackageTable@PackageRepository@@UEAAJ_JPEAXPEAPEAVPackageRow@2@@Z
    virtual long TryGetPackageRow(int64_t, void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMutablePackageDirectoryAndLinkIfPresent@PackageTable@PackageRepository@@UEAAJPEBG0@Z
    virtual long UpdateMutablePackageDirectoryAndLinkIfPresent(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePackageRoot@PackageTable@PackageRepository@@UEAAJPEBGK@Z
    virtual long UpdatePackageRoot(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePackageRowTargetDeviceFamily@PackageTable@PackageRepository@@UEAAJ_J0@Z
    virtual long UpdatePackageRowTargetDeviceFamily(int64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageTable@PackageRepository@@UEAA@XZ
    virtual ~PackageTable();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@PackageTable@PackageRepository@@AEAAJAEBVPackage@Entity@StateRepository@@_JAEAVPackageRow@2@@Z
    long CopyFrom(WindissectOpaque const &, int64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExternalLocation@PackageTable@PackageRepository@@AEAAJ_J0AEAVPackageExternalLocation@Entity@StateRepository@@AEA_N@Z
    long GetExternalLocation(int64_t, int64_t, WindissectOpaque &, bool &);
};
} // namespace PackageRepository
