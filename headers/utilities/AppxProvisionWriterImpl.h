#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 13 member(s).
namespace Windows::ApplicationModel::AppxProvisionPackage {
class AppxProvisionWriterImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageToList@AppxProvisionWriterImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJW4ProvisionPackageList@@PEAUIAppxProvisionPackage@@@Z
    virtual long AddPackageToList(int, IAppxProvisionPackage *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppxProvisionWriterImpl@AppxProvisionPackage@ApplicationModel@Windows@@QEAA@XZ
    AppxProvisionWriterImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@AppxProvisionWriterImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AppxProvisionWriterImpl@AppxProvisionPackage@ApplicationModel@Windows@@SAJPEAUIAppxProvisionReader@@PEBGPEAPEAUIAppxProvisionWriter@@@Z
    static long Create(IAppxProvisionReader *, unsigned short const *, IAppxProvisionWriter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AppxProvisionWriterImpl@AppxProvisionPackage@ApplicationModel@Windows@@SAJPEBGPEAPEAUIAppxProvisionWriter@@@Z
    static long Create(unsigned short const *, IAppxProvisionWriter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePackageFromList@AppxProvisionWriterImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJW4ProvisionPackageList@@PEBG@Z
    virtual long RemovePackageFromList(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppxProvisionWriterImpl@AppxProvisionPackage@ApplicationModel@Windows@@QEAAJPEBGPEAUIXMLDOMDocument2@@@Z
    long RuntimeClassInitialize(unsigned short const *, IXMLDOMDocument2*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppxProvisionWriterImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAA@XZ
    virtual ~AppxProvisionWriterImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAttribute@AppxProvisionWriterImpl@AppxProvisionPackage@ApplicationModel@Windows@@AEAAJPEAUIXMLDOMElement@@PEBG1@Z
    long CreateAttribute(IXMLDOMElement *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateChildElement@AppxProvisionWriterImpl@AppxProvisionPackage@ApplicationModel@Windows@@AEAAJPEAUIXMLDOMNode@@PEBGPEAPEAUIXMLDOMElement@@@Z
    long CreateChildElement(IXMLDOMNode *, unsigned short const *, IXMLDOMElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProcessingInstruction@AppxProvisionWriterImpl@AppxProvisionPackage@ApplicationModel@Windows@@AEAAJXZ
    long CreateProcessingInstruction();
};
} // namespace Windows::ApplicationModel::AppxProvisionPackage
