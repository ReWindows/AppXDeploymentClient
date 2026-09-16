#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 10 member(s).
namespace Windows::ApplicationModel::AppxProvisionPackage {
class AppxProvisionPackageImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppxProvisionPackageImpl@AppxProvisionPackage@ApplicationModel@Windows@@QEAA@XZ
    AppxProvisionPackageImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AppxProvisionPackageImpl@AppxProvisionPackage@ApplicationModel@Windows@@SAJPEBG0W4ProvisionPackageProperty@@PEAPEAUIAppxProvisionPackage@@@Z
    static long Create(unsigned short const *, unsigned short const *, int, IAppxProvisionPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AppxProvisionPackageImpl@AppxProvisionPackage@ApplicationModel@Windows@@SAJW4ProvisionPackageList@@PEAUIXMLDOMNode@@PEAPEAUIAppxProvisionPackage@@@Z
    static long Create(int, IXMLDOMNode *, IAppxProvisionPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyName@AppxProvisionPackageImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJPEAPEAG@Z
    virtual long GetPackageFamilyName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullName@AppxProvisionPackageImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJPEAPEAG@Z
    virtual long GetPackageFullName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperties@AppxProvisionPackageImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJPEAW4ProvisionPackageProperty@@@Z
    virtual long GetProperties(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppxProvisionPackageImpl@AppxProvisionPackage@ApplicationModel@Windows@@QEAAJPEBG0W4ProvisionPackageProperty@@@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppxProvisionPackageImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAA@XZ
    virtual ~AppxProvisionPackageImpl();
};
} // namespace Windows::ApplicationModel::AppxProvisionPackage
