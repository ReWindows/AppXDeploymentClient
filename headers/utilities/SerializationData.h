#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 2 member(s).
namespace PackageRepository {
class SerializationData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SerializationData@PackageRepository@@QEAAJPEBG@Z
    long Initialize(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreAddCallback@SerializationData@PackageRepository@@SAJAEAVXmlWriter@DictionarySerialization@StateRepository@@PEAXPEAUIXMLDOMNode@@PEBGPEBX@Z
    static long PreAddCallback(WindissectOpaque &, void *, IXMLDOMNode *, unsigned short const *, void const *);
};
} // namespace PackageRepository
