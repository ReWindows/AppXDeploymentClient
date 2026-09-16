#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 14 member(s).
namespace Windows::ApplicationModel::AppxProvisionPackage {
class CommonHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToProvisionPackageProperty@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@SAJPEAG00PEAW4ProvisionPackageProperty@@@Z
    static long ConvertToProvisionPackageProperty(unsigned short *, unsigned short *, unsigned short *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateXmlDom@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@SAJPEAPEAUIXMLDOMDocument2@@@Z
    static long CreateXmlDom(IXMLDOMDocument2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateXmlDomCopy@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@SAJPEAUIXMLDOMDocument2@@PEAPEAU5@@Z
    static long CreateXmlDomCopy(IXMLDOMDocument2*, IXMLDOMDocument2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateXmlDomFromFile@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@SAJPEBGPEAPEAUIXMLDOMDocument2@@@Z
    static long CreateXmlDomFromFile(unsigned short const *, IXMLDOMDocument2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@SAJPEAUIXMLDOMNode@@PEBGPEAPEAUIXMLDOMElement@@PEA_N@Z
    static long GetElement(IXMLDOMNode *, unsigned short const *, IXMLDOMElement * *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNodeValue@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@SAJPEAUIXMLDOMNode@@PEBGPEAPEAGPEA_NPEAPEAU5@@Z
    static long GetNodeValue(IXMLDOMNode *, unsigned short const *, unsigned short * *, bool *, IXMLDOMNode * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNodesList@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@SAJPEAUIXMLDOMNode@@PEBGPEAPEAUIXMLDOMNodeList@@PEAJPEA_N@Z
    static long GetNodesList(IXMLDOMNode *, unsigned short const *, IXMLDOMNodeList * *, long *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidatePackageFamilyName@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@SAJPEBG@Z
    static long ValidatePackageFamilyName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidatePackageFullName@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@SAJPEBG@Z
    static long ValidatePackageFullName(unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToBool@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@CAJPEAGPEAH@Z
    static long ConvertToBool(unsigned short *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSchemaCache@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@CAJPEAPEAUIXMLDOMSchemaCollection@@@Z
    static long CreateSchemaCache(IXMLDOMSchemaCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateXmlDomOnString@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@CAJPEBGPEAPEAUIXMLDOMDocument2@@@Z
    static long CreateXmlDomOnString(unsigned short const *, IXMLDOMDocument2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeXmlDom@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@CAJPEAPEAUIXMLDOMDocument2@@@Z
    static long InitializeXmlDom(IXMLDOMDocument2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidatePackageNames@CommonHelpers@AppxProvisionPackage@ApplicationModel@Windows@@CAJPEAUIXMLDOMDocument2@@@Z
    static long ValidatePackageNames(IXMLDOMDocument2*);
};
} // namespace Windows::ApplicationModel::AppxProvisionPackage
