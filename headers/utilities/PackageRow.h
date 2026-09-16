#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 8 member(s).
namespace PackageRepository {
class PackageRow {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExternalLocation@PackageRow@PackageRepository@@QEBAJPEAPEBG@Z
    long GetExternalLocation(unsigned short const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyName@PackageRow@PackageRepository@@QEBAPEBGXZ
    unsigned short const * GetPackageFamilyName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageRow@PackageRepository@@QEAAJ_JPEBG1111W4SRProcessorArchitecture@StateRepository@@UPACKAGE_VERSION@@1PEAX1W4PackageFlags@4@W4PackageFlags2@4@_NW4PackageType@4@1111_K90KIW4SignatureOrigin@4@W4PackageOrigin@4@W4SupportedUsers@4@@Z
    long Initialize(int64_t, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, int, PACKAGE_VERSION, unsigned short const *, void *, unsigned short const *, int, int, bool, int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, uint64_t, uint64_t, int64_t, unsigned long, unsigned int, int, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageRow@PackageRepository@@QEAA@XZ
    PackageRow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExternalLocation@PackageRow@PackageRepository@@QEAAJPEBG@Z
    long SetExternalLocation(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageRow@PackageRepository@@QEAA@XZ
    ~PackageRow();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageTable@PackageRow@PackageRepository@@AEBAPEAVPackageTable@2@XZ
    WindissectOpaque * GetPackageTable() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadExternalLocationInfo@PackageRow@PackageRepository@@AEAAJXZ
    long LoadExternalLocationInfo();
};
} // namespace PackageRepository
