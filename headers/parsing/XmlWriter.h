#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 11 member(s).
namespace StateRepository::DictionarySerialization {
class XmlWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@XmlWriter@DictionarySerialization@StateRepository@@QEAAJPEAUIXMLDOMElement@@P6AJAEAV123@PEAXPEAUIXMLDOMNode@@PEBGPEBX@Z62@Z
    long Serialize(IXMLDOMElement *, long ( *)(WindissectOpaque &, void *, IXMLDOMNode *, unsigned short const *, void const *), long ( *)(WindissectOpaque &, void *, IXMLDOMNode *, unsigned short const *, void const *), void *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XmlWriter@DictionarySerialization@StateRepository@@QEAA@XZ
    XmlWriter();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XmlWriter@DictionarySerialization@StateRepository@@QEAA@XZ
    ~XmlWriter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAttribute@XmlWriter@DictionarySerialization@StateRepository@@AEAAJPEAUIXMLDOMNode@@PEAG1@Z
    long AddAttribute(IXMLDOMNode *, unsigned short *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAttributes@XmlWriter@DictionarySerialization@StateRepository@@AEAAJPEAUIXMLDOMElement@@@Z
    long AddAttributes(IXMLDOMElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddElements@XmlWriter@DictionarySerialization@StateRepository@@AEAAJPEAUIXMLDOMElement@@@Z
    long AddElements(IXMLDOMElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddText@XmlWriter@DictionarySerialization@StateRepository@@AEAAJPEAUIXMLDOMElement@@@Z
    long AddText(IXMLDOMElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTextOrElements@XmlWriter@DictionarySerialization@StateRepository@@AEAAJPEAUIXMLDOMElement@@@Z
    long AddTextOrElements(IXMLDOMElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Call@XmlWriter@DictionarySerialization@StateRepository@@AEAAJP6AJAEAV123@PEAXPEAUIXMLDOMNode@@PEBGPEBX@Z1234@Z
    long Call(long ( *)(WindissectOpaque &, void *, IXMLDOMNode *, unsigned short const *, void const *), void *, IXMLDOMNode *, unsigned short const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Call@XmlWriter@DictionarySerialization@StateRepository@@AEAAJP6AJAEAV123@PEAXPEAUIXMLDOMNode@@PEBGPEBX@Z1PEAUIXMLDOMElement@@34@Z
    long Call(long ( *)(WindissectOpaque &, void *, IXMLDOMNode *, unsigned short const *, void const *), void *, IXMLDOMElement *, unsigned short const *, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueElementNames@XmlWriter@DictionarySerialization@StateRepository@@AEAAJPEAUIXMLDOMElement@@AEAV?$Array@VText@StateRepository@@V?$ContainerOperations@VText@StateRepository@@V12@@Common@@GV?$ContainerOperations@GVText@StateRepository@@@4@V?$ArrayOperations@VText@StateRepository@@V12@@4@@Common@@@Z
    long GetUniqueElementNames(IXMLDOMElement *, WindissectOpaque &);
};
} // namespace StateRepository::DictionarySerialization
