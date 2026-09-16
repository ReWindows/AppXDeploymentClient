#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 8 member(s).
namespace Windows::ApplicationModel::AppxProvisionPackage {
class AppxProvisionReaderImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppxProvisionReaderImpl@AppxProvisionPackage@ApplicationModel@Windows@@QEAA@XZ
    AppxProvisionReaderImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AppxProvisionReaderImpl@AppxProvisionPackage@ApplicationModel@Windows@@SAJPEBGPEAPEAUIAppxProvisionReader@@@Z
    static long Create(unsigned short const *, IAppxProvisionReader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetListEnumerator@AppxProvisionReaderImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJW4ProvisionPackageList@@PEAPEAUIAppxProvisionPackageEnumerator@@@Z
    virtual long GetListEnumerator(int, IAppxProvisionPackageEnumerator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXmlDom@AppxProvisionReaderImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJPEAPEAUIXMLDOMDocument2@@@Z
    virtual long GetXmlDom(IXMLDOMDocument2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppxProvisionReaderImpl@AppxProvisionPackage@ApplicationModel@Windows@@QEAAJPEAUIXMLDOMDocument2@@@Z
    long RuntimeClassInitialize(IXMLDOMDocument2*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppxProvisionReaderImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAA@XZ
    virtual ~AppxProvisionReaderImpl();
};
} // namespace Windows::ApplicationModel::AppxProvisionPackage
