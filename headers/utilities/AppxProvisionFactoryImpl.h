#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 7 member(s).
namespace Windows::ApplicationModel::AppxProvisionPackage {
class AppxProvisionFactoryImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePackageFamilyName@AppxProvisionFactoryImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJPEBGW4ProvisionPackageProperty@@PEAPEAUIAppxProvisionPackage@@@Z
    virtual long CreatePackageFamilyName(unsigned short const *, int, IAppxProvisionPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePackageFullName@AppxProvisionFactoryImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJPEBGW4ProvisionPackageProperty@@PEAPEAUIAppxProvisionPackage@@@Z
    virtual long CreatePackageFullName(unsigned short const *, int, IAppxProvisionPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProvisionStreamingReaderFromFile@AppxProvisionFactoryImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJPEBGPEAPEAUIAppxProvisionReader@@@Z
    virtual long CreateProvisionStreamingReaderFromFile(unsigned short const *, IAppxProvisionReader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProvisionWriterFromFile@AppxProvisionFactoryImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJPEBGPEAPEAUIAppxProvisionWriter@@@Z
    virtual long CreateProvisionWriterFromFile(unsigned short const *, IAppxProvisionWriter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProvisionWriterFromReaderToFile@AppxProvisionFactoryImpl@AppxProvisionPackage@ApplicationModel@Windows@@UEAAJPEAUIAppxProvisionReader@@PEBGPEAPEAUIAppxProvisionWriter@@@Z
    virtual long CreateProvisionWriterFromReaderToFile(IAppxProvisionReader *, unsigned short const *, IAppxProvisionWriter * *);
};
} // namespace Windows::ApplicationModel::AppxProvisionPackage
