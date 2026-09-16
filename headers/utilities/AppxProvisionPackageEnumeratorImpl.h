#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 8 member(s).
namespace Windows::ApplicationModel::AppxProvisionPackage {
class AppxProvisionPackageEnumeratorImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AppxProvisionPackageEnumeratorImpl@AppxProvisionPackage@ApplicationModel@Windows@@SAJW4ProvisionPackageList@@PEAUIXMLDOMNodeList@@JPEAPEAUIAppxProvisionPackageEnumerator@@@Z
    static long Create(int, IXMLDOMNodeList *, long, IAppxProvisionPackageEnumerator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@AppxProvisionPackageEnumeratorImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJPEAJ@Z
    virtual long GetCount(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrent@AppxProvisionPackageEnumeratorImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJPEAPEAUIAppxProvisionPackage@@@Z
    virtual long GetCurrent(IAppxProvisionPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasCurrent@AppxProvisionPackageEnumeratorImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJPEAH@Z
    virtual long GetHasCurrent(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@AppxProvisionPackageEnumeratorImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJPEAH@Z
    virtual long MoveNext(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppxProvisionPackageEnumeratorImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAA@XZ
    virtual ~AppxProvisionPackageEnumeratorImpl();
};
} // namespace Windows::ApplicationModel::AppxProvisionPackage
