#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 55 member(s).
class Common {
public:
    class AutoBStr;
    class AutoCoInitialize;
    class AutoCoTaskMemString;
    class AutoHandle;
    class AutoHandleModule;
    class AutoLock;
    class AutoNoImpersonateDuringScope;
    class AutoVariant;
    class Base32Encoding;
    class BcryptLibrary;
    class ByteBuffer;
    class CArray;
    class CompressionWrapper;
    class CryptoProvider;
    class Deployment;
    class DirectoryTreeWalker;
    class FileInUseProcessInformation;
    class ImpersonateSelf;
    class ImpersonationContext;
    class PackageMoniker;
    class PathHelpers;
    class RegistryKey;
    class SidHelper;
    class StateSeparation;
    class StaticLock;
    class String;
    class StringBuffer;
    class StringBufferBuilder;
    class StringBuilder;
    class UInt32;
    class UInt64;
    class Xml;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrayAddString@Common@@YAJAEAV?$Array@VStringBuffer@Common@@V?$ContainerOperations@VStringBuffer@Common@@V12@@2@VNoKey@2@V?$ContainerOperations@VNoKey@Common@@VStringBuffer@2@@2@V?$ArrayOperations@VStringBuffer@Common@@VNoKey@2@@2@@1@PEBG@Z
    long ArrayAddString(WindissectOpaque &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoCoTaskMemStringAllocateAndCopy@Common@@YAPEAGPEBGI@Z
    unsigned short * AutoCoTaskMemStringAllocateAndCopy(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoHandleFreeHLocal@Common@@YAXPEAX@Z
    void AutoHandleFreeHLocal(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoPtrSidRtlFreeSid@Common@@YAXPEAX@Z
    void AutoPtrSidRtlFreeSid(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BestEffortFindFirstCallback@Common@@YAJPEAXPEAGPEAPEAXPEAU_WIN32_FIND_DATAW@@@Z
    long BestEffortFindFirstCallback(void *, unsigned short *, void * *, _WIN32_FIND_DATAW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BestEffortFindNextCallback@Common@@YAJPEAX0PEAU_WIN32_FIND_DATAW@@@Z
    long BestEffortFindNextCallback(void *, void *, _WIN32_FIND_DATAW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaseInsensitiveCompare@Common@@YA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEBG0@Z
    int CaseInsensitiveCompare(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseHandleHelper@Common@@YAXPEAX@Z
    void CloseHandleHelper(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyStringToOutput@Common@@YAJPEBGPEAPEAG@Z
    long CopyStringToOutput(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCacheMapIfNeeded@Common@@YAJXZ
    long CreateCacheMapIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeallocateHSTRING@Common@@YAXPEAUHSTRING__@@@Z
    void DeallocateHSTRING(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirectoryExists@Common@@YAJPEBGPEA_N@Z
    long DirectoryExists(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ErrorIsFileSystemEntryNotFound@Common@@YA_NK@Z
    bool ErrorIsFileSystemEntryNotFound(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileExists@Common@@YAJPEBGPEA_N@Z
    long FileExists(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileInUseByProcesses@Common@@YAJPEBGIPEAIPEAK@Z
    long FileInUseByProcesses(unsigned short const *, unsigned int, unsigned int *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericMapCaseInsensitiveCompare@Common@@YA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_AVL_TABLE@@PEAX1@Z
    int GenericMapCaseInsensitiveCompare(_RTL_AVL_TABLE *, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericMapCaseInsensitiveCompareHSTRING@Common@@YA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_AVL_TABLE@@PEAX1@Z
    int GenericMapCaseInsensitiveCompareHSTRING(_RTL_AVL_TABLE *, void *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileInUseProcessInformation@Common@@YAJKPEAXAEAUFileInUseProcessInformation@1@@Z
    long GetFileInUseProcessInformation(unsigned long, void *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHResultFromLastError@Common@@YAJXZ
    long GetHResultFromLastError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleInternalFailure@Common@@YAXW4FATAL_FAILURE_REASON_TYPE@1@_KK@Z
    void HandleInternalFailure(int, uint64_t, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirectoryReparsePointOpaque@Common@@YA_NAEBU_WIN32_FIND_DATAW@@@Z
    bool IsDirectoryReparsePointOpaque(_WIN32_FIND_DATAW const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessorArchitectureFormatString@Common@@YAPEBGI@Z
    unsigned short const * ProcessorArchitectureFormatString(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessorArchitectureParseString@Common@@YAJPEBGPEAI@Z
    long ProcessorArchitectureParseString(unsigned short const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessorArchitectureParseString@Common@@YAJPEBG_KPEAI@Z
    long ProcessorArchitectureParseString(unsigned short const *, uint64_t, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportFatalException@Common@@YAX_KKW4FATAL_FAILURE_REASON_TYPE@1@K@Z
    void ReportFatalException(uint64_t, unsigned long, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ServiceNotifyCallback@Common@@YAXPEAX@Z
    void ServiceNotifyCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ServiceWaitForNotifyStatus@Common@@YAKPEAUSC_HANDLE__@@K@Z
    unsigned long ServiceWaitForNotifyStatus(SC_HANDLE__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartServiceW@Common@@YAJPEBGH@Z
    long StartServiceW(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WalkDirectoryTree@Common@@YAJPEBGIP6AJPEAX0PEBU_WIN32_FIND_DATAW@@@Z1P6AJ1PEAGPEAPEAXPEAU2@@ZP6AJ116@ZP6AJ11@Z@Z
    long WalkDirectoryTree(unsigned short const *, unsigned int, long ( *)(void *, unsigned short const *, _WIN32_FIND_DATAW const *), void *, long ( *)(void *, unsigned short *, void * *, _WIN32_FIND_DATAW *), long ( *)(void *, void *, _WIN32_FIND_DATAW *), long ( *)(void *, void *));
};
