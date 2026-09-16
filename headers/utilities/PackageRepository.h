#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 23 member(s).
class PackageRepository {
public:
    class AutoStatementDoneTable;
    class BundlePackageAssociation;
    class DependencyGraphRow;
    class DependencyGraphTable;
    class ExtensionRow;
    class ExtensionTable;
    class IDependencyGraphTable;
    class IExtensionTable;
    class IPackageTable;
    class IRepositorySession;
    class ITable;
    class IVisibilityTable;
    class PackageRow;
    class PackageTable;
    class PropertyBagKeyValuePair;
    class Repository;
    class RepositorySession;
    class SerializationData;
    class VisibilityRow;
    class VisibilityTable;
    class WowDependencyGraphTable;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageExtensions@PackageRepository@@YAJAEAVDatabase@StateRepository@@_JPEBGPEAUIAppxManifestReader@@W4DeploymentOptions@Deployment@Common@@@Z
    long AddPackageExtensions(WindissectOpaque &, int64_t, unsigned short const *, IAppxManifestReader *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMrtPackage@PackageRepository@@YAJPEBG0_N_J0000_NAEAVMrtPackage@Entity@StateRepository@@@Z
    long CreateMrtPackage(unsigned short const *, unsigned short const *, bool, int64_t, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, bool, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DependencyGraphAddRow@PackageRepository@@YAJPEAVIRepositorySessionInfo@1@PEBVDependencyGraphRow@1@AEA_J@Z
    long DependencyGraphAddRow(WindissectOpaque *, WindissectOpaque const *, int64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Duplicate@PackageRepository@@YAPEAGPEBG@Z
    unsigned short * Duplicate(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtensionAddRow@PackageRepository@@YAJPEAVIRepositorySessionInfo@1@PEBVExtensionRow@1@AEA_J@Z
    long ExtensionAddRow(WindissectOpaque *, WindissectOpaque const *, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreatePackageFamily@PackageRepository@@YAJPEAVIRepositorySessionInfo@1@PEBG11PEAXAEAVPackageFamily@Entity@StateRepository@@@Z
    long GetOrCreatePackageFamily(WindissectOpaque *, unsigned short const *, unsigned short const *, unsigned short const *, void *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateUser@PackageRepository@@YAJPEAVIRepositorySessionInfo@1@QEAXAEAVUser@Entity@StateRepository@@@Z
    long GetOrCreateUser(WindissectOpaque *, void * const, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageManifestDOM@PackageRepository@@YAJPEAUIAppxManifestReader@@AEAV?$ComPtr@UIXMLDOMDocument2@@@WRL@Microsoft@@@Z
    long GetPackageManifestDOM(IAppxManifestReader *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAppUriHandlerInfo@PackageRepository@@YAJAEAVDatabase@StateRepository@@_JPEBGPEBVActivation@Entity@3@222PEAUIXMLDOMElement@@_N@Z
    long LoadAppUriHandlerInfo(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque const *, unsigned short const *, unsigned short const *, unsigned short const *, IXMLDOMElement *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFileTypeAssociationInfo@PackageRepository@@YAJAEAVDatabase@StateRepository@@_JPEBGPEBVActivation@Entity@3@222PEAUIXMLDOMElement@@_N@Z
    long LoadFileTypeAssociationInfo(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque const *, unsigned short const *, unsigned short const *, unsigned short const *, IXMLDOMElement *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadHostRuntimeInfo@PackageRepository@@YAJAEAVDatabase@StateRepository@@_JPEAUIXMLDOMElement@@@Z
    long LoadHostRuntimeInfo(WindissectOpaque &, int64_t, IXMLDOMElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPkgExtension@PackageRepository@@YAJAEAVDatabase@StateRepository@@_JPEAUIXMLDOMElement@@@Z
    long LoadPkgExtension(WindissectOpaque &, int64_t, IXMLDOMElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPkgExtensionHost@PackageRepository@@YAJAEAVDatabase@StateRepository@@_JPEAUIXMLDOMElement@@@Z
    long LoadPkgExtensionHost(WindissectOpaque &, int64_t, IXMLDOMElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadProtocolInfo@PackageRepository@@YAJAEAVDatabase@StateRepository@@_JPEBGPEBVActivation@Entity@3@222PEAUIXMLDOMElement@@_N@Z
    long LoadProtocolInfo(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque const *, unsigned short const *, unsigned short const *, unsigned short const *, IXMLDOMElement *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPublisherCacheFolderInfo@PackageRepository@@YAJAEAVDatabase@StateRepository@@_JPEAUIXMLDOMElement@@@Z
    long LoadPublisherCacheFolderInfo(WindissectOpaque &, int64_t, IXMLDOMElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackageAddRow@PackageRepository@@YAJPEAVIRepositorySessionInfo@1@PEBVPackageRow@1@AEA_J@Z
    long PackageAddRow(WindissectOpaque *, WindissectOpaque const *, int64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize_Dictionary@PackageRepository@@YAJAEAVApplicationExtension@Entity@StateRepository@@PEAUIXMLDOMElement@@PEBG@Z
    long Serialize_Dictionary(WindissectOpaque &, IXMLDOMElement *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPackage@PackageRepository@@YAJPEAVIRepositorySessionInfo@1@_JAEAVPackage@Entity@StateRepository@@AEA_N@Z
    long TryGetPackage(WindissectOpaque *, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExtensionMrtStrings@PackageRepository@@YAJAEAVDatabase@StateRepository@@PEBG1AEAVPreInitializeMRTHelper@Deployment@Common@@@Z
    long UpdateExtensionMrtStrings(WindissectOpaque &, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExtensionMrtStrings_LocalizedDictionary@PackageRepository@@YAJAEAVDatabase@StateRepository@@AEAVApplicationExtension@Entity@3@AEAVPreInitializeMRTHelper@Deployment@Common@@@Z
    long UpdateExtensionMrtStrings_LocalizedDictionary(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExtensionMrtStrings_LocalizedDictionary@PackageRepository@@YAJAEAVDatabase@StateRepository@@PEBGAEAVPreInitializeMRTHelper@Deployment@Common@@@Z
    long UpdateExtensionMrtStrings_LocalizedDictionary(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisibilityAddRow@PackageRepository@@YAJPEAVIRepositorySessionInfo@1@PEBVVisibilityRow@1@AEA_J@Z
    long VisibilityAddRow(WindissectOpaque *, WindissectOpaque const *, int64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WowDependencyGraphAddRow@PackageRepository@@YAJPEAVIRepositorySessionInfo@1@PEBVDependencyGraphRow@1@AEA_J@Z
    long WowDependencyGraphAddRow(WindissectOpaque *, WindissectOpaque const *, int64_t &);
};
