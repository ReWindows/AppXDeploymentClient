#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class AppXDeploymentClientTelemetry; 
class AppXDeploymentServerTelemetry; 
class AppxAllUserStore; 
class Common; 
namespace Microsoft { namespace WRL { class Details; } } 
class OutdatedPackagesFinder; 
class PackageManagerInternal; 
class PackageRepository; 
class StateRepository; 
namespace Windows { namespace Internal { namespace PlatformExtensions { class Details; } } } 
namespace Windows { namespace Management { class Deployment; } } 
class details; 
class winrt; 
class ActivityData; class AppReadinessInfoAPI; class AppXDeploymentClientTelemetry; class AppXDeploymentServerTelemetry; class AppxAllUserStore; class AppxProfileNotificationHandler; class AutoRpcExpectedDigestsMap; class BlockRequests; class CNode; class CPair; class CallerIdentity; class Chunk; class ChunkElementIterator; class ChunkView; class CoTaskMemFree; class Common; class DeploymentFallbackProvider; class Destroy; class DirectoryACLs; class ExpectedDigestsMap; class FEATURE_ERROR; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class HINSTANCE__; class HKEY__; class HSTRING__; class IActivationFactory; class IAppxBundleManifestReader; class IAppxManifestReader; class IAppxManifestReaderInternal; class IAppxProvisionPackage; class IAppxProvisionPackageEnumerator; class IAppxProvisionReader; class IAppxProvisionWriter; class ICallingProcessInfo; class IClassFactory; class IDispatch; class IInspectable; class IRpcOptions; class IStream; class IUnknown; class IWeakReference; class IXMLDOMAttribute; class IXMLDOMDocument2; class IXMLDOMElement; class IXMLDOMNode; class IXMLDOMNodeList; class IXMLDOMSchemaCollection; class Iterator; class KeyTraits; class LocalFree; class OutdatedPackagesFinder; class PACKAGE_ID; class PACKAGE_VERSION; class PackageManagerInternal; class PackageRepository; class PackageSid; class PackagesToBeInstalledGetter; class ReleaseSRWLockExclusive; class ReservedForLocalUse; class RpcApplicabilityInfo; class RpcDeploymentRequestInfo; class RpcOptionsHelper; class RpcPackageInfo; class RtlReleaseSRWLockExclusive; class SC_HANDLE__; class SRCacheContext; class SRCacheManager; class SRCache_Free; class SplitIterator; class StatePaths; class StateRepository; class StringSet; class Telemetry; class View; class _CONTEXT; class _EVENT_DESCRIPTOR; class _EVENT_FILTER_DESCRIPTOR; class _EVENT_MAP_INFO; class _EVENT_PROPERTY_INFO; class _EVENT_RECORD; class _EXCEPTION_RECORD; class _FILETIME; class _FILE_IO_PRIORITY_HINT_INFORMATION; class _GUID; class _LUID; class _MEMORY_PRIORITY_INFORMATION; class _PROCESSING_CONTEXT; class _PROCESSING_DATA_CONTEXT; class _PackageManagerRpcStringKeyValuePair; class _RO_REGISTRATION_COOKIE; class _RTL_AVL_TABLE; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _SECURITY_ATTRIBUTES; class _SECURITY_DESCRIPTOR; class _STORAGE_DEVICE_INFO; class _SYSTEMTIME; class _THREAD_POWER_THROTTLING_STATE; class _TOKEN_MANDATORY_LABEL; class _TOKEN_USER; class _TP_CALLBACK_ENVIRON_V3; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TP_WORK; class _TRACE_EVENT_INFO; class _TlgReflectorTag_Param0IsProviderType; class _WIN32_FIND_DATAW; class _WNF_STATE_NAME; class _WNF_TYPE_ID; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByRef; class _tlgWrapperByVal; class details; class lambda_7030d12a21dba11210293044e97fe9c7; class lambda_b70241e9b5ebaad244db3e52d52cab17; class permission; class sqlite3; class sqlite3_context; class sqlite3_stmt; class sqlite3_value; class thunk; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; class winrt; 
namespace Deployment { class SecurityDescriptorBuilder; } 
namespace Microsoft { namespace UUP { class Database; } } 
namespace Microsoft { namespace WRL { class AgileRef; class CloakedIid; class ComPtr; class Details; class FtmBase; class RuntimeClassFlags; class SimpleClassFactory; class SimpleSealedActivationFactory; class SimpleSealedAgileActivationFactory; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class HString; class HStringReference; class SRWLock; } } } 
namespace Microsoft { namespace WRL { namespace Wrappers { namespace Details { class SyncLockExclusive; class SyncLockShared; } } } } 
namespace ReliableCleanup { class CleanupManager; } 
namespace Windows { } 
namespace Windows { namespace ApplicationModel { class IAppInstallerInfo; class IPackage; class IPackageCatalog; class Package; class PackageVersion; } } 
namespace Windows { namespace ApplicationModel { namespace AppxProvisionPackage { class AppxProvisionFactoryImpl; class AppxProvisionPackageEnumeratorImpl; class AppxProvisionPackageImpl; class AppxProvisionReaderImpl; class AppxProvisionWriterImpl; class CommonHelpers; } } } 
namespace Windows { namespace Foundation { namespace Collections { class Detail; } } } 
namespace Windows { namespace Foundation { namespace Collections { namespace Internal { class detail; } } } } 
namespace Windows { namespace Internal { class String; class StringReference; } } 
namespace Windows { namespace Internal { namespace ApplicationModel { namespace WindowManagement { class WindowId; } } } } 
namespace Windows { namespace Internal { namespace Details { class Git; } } } 
namespace Windows { namespace Internal { namespace Foundation { namespace Contracts { class IActivationFactoryContractRedirectorContext; } } } } 
namespace Windows { namespace Internal { namespace PlatformExtensions { class Details; } } } 
namespace Windows { namespace Internal { namespace StateRepository { class IPackageStatics; class IPackageUserStatics; class ISharedPackageContainerPackageFamilyStatics; class ISharedPackageContainerStatics; class IUser; class IUserStatics; } } } 
namespace Windows { namespace Internal { namespace StateRepository { namespace Management { class IRepositoryManager; } } } } 
namespace Windows { namespace Internal { namespace _StringDetail { class dummy_t; } } } 
namespace Windows { namespace Management { class Deployment; } } 
namespace Windows { namespace System { namespace Threading { class IThreadPoolStatics; } } } 
namespace XWinRT { class CElementTraits; class ComLock; class FakeStl; class InterfaceEquals; class InterfaceHash; class InterfaceLifetimeTraits; class SerializingLockPolicy; class TXPOSITION; class XHashMap; } 
namespace XWinRT { namespace SecureVersionTag { class TagManager; } } 
namespace XWinRT { namespace detail { class AcquireRead; class AcquireWrite; class GitStorageType; class LockHolder; } } 
namespace std { class allocator; class bad_alloc; class bad_array_new_length; class basic_string; class char_traits; class exception; class invalid_argument; class logic_error; class nothrow_t; class nullptr_t; } 
namespace wil { class ActivityBase; class CallContextInfo; class FailureInfo; class ResultException; class function_deleter; class process_heap_deleter; class srwlock; class unique_any_array_ptr; class unique_any_t; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class FeatureLogging; class IFailureCallback; class ResultStatus; class RevertImpersonateToken; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class resource_policy; class token_info_deleter; class unique_storage; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class default_delete; class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

