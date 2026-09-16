#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 9 member(s).
namespace Common {
class Xml {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValueBooleanFromElement@Xml@Common@@YAJPEAUIXMLDOMElement@@PEBGAEAHPEAH@Z
    long GetAttributeValueBooleanFromElement(IXMLDOMElement *, unsigned short const *, int &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValueBooleanFromElement@Xml@Common@@YAJPEAUIXMLDOMElement@@PEBGAEA_NPEA_N@Z
    long GetAttributeValueBooleanFromElement(IXMLDOMElement *, unsigned short const *, bool &, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValueBooleanFromQuery@Xml@Common@@YAJPEBGPEAUIXMLDOMElement@@AEA_NPEAH@Z
    long GetAttributeValueBooleanFromQuery(unsigned short const *, IXMLDOMElement *, bool &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValueStringFromElement@Xml@Common@@YAJPEAUIXMLDOMElement@@PEBGAEAVStringBuffer@2@PEAH@Z
    long GetAttributeValueStringFromElement(IXMLDOMElement *, unsigned short const *, WindissectOpaque &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValueStringFromQuery@Xml@Common@@YAJPEBGPEBUIXMLDOMElement@@AEAVStringBuffer@2@PEAH@Z
    long GetAttributeValueStringFromQuery(unsigned short const *, IXMLDOMElement const *, WindissectOpaque &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueStringFromElement@Xml@Common@@YAJPEAUIXMLDOMElement@@AEAVStringBuffer@2@PEAH@Z
    long GetValueStringFromElement(IXMLDOMElement *, WindissectOpaque &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXMLAttributeFromQuery@Xml@Common@@YAJPEBGPEAUIXMLDOMElement@@PEAPEAUIXMLDOMAttribute@@@Z
    long GetXMLAttributeFromQuery(unsigned short const *, IXMLDOMElement *, IXMLDOMAttribute * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXMLElementFromQuery@Xml@Common@@YAJPEBGPEAUIXMLDOMElement@@PEAPEAU3@@Z
    long GetXMLElementFromQuery(unsigned short const *, IXMLDOMElement *, IXMLDOMElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringToBool@Xml@Common@@YA_NPEBG@Z
    bool StringToBool(unsigned short const *);
};
} // namespace Common
