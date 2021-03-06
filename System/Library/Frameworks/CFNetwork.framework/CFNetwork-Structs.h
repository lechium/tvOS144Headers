/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSObject<OS_nw_context>;

typedef struct _CFURLAuthChallenge* CFURLAuthChallengeRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef struct _NSZone* NSZoneRef;

typedef struct URLResponse {
	/*function pointer*/void* _vptr$CoreLoggable;
	__CFURL fURL;
	__CFString fMIMEType;
	__CFString fTextEncodingName;
	long long fExpectedContentLength;
	double fExpiration;
	double fCreationTime;
	__CFDictionary fDownloadAssessment;
	__CFDictionary fSSLCertContext;
	int fRecommendedPolicy;
	__CFData fPeerAddress;
	HTTPResponse fHTTP;
	unsigned char fConnectionDidFallback;
	unsigned char fConnectionIsCellular;
} URLResponse;

typedef struct _CFURLResponse* CFURLResponseRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct shared_ptr<TransportConnection> {
	TransportConnection __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<TransportConnection>;

typedef const struct __CFDictionary* CFDictionaryRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFString* CFStringRef;

typedef struct OpaqueCFHTTPCookieStorage* OpaqueCFHTTPCookieStorageRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct _CFURLCredential* CFURLCredentialRef;

typedef struct CFURLProtocolClient {
	long long version;
	void client;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
	/*function pointer*/void* wasRedirected;
	/*function pointer*/void* cacheResponseIsValid;
	/*function pointer*/void* didReceiveResponse;
	/*function pointer*/void* didLoadData;
	/*function pointer*/void* didFinishLoading;
	/*function pointer*/void* didFail;
	/*function pointer*/void* didReceiveAuthenticationChallenge;
} CFURLProtocolClient;

typedef struct _CFURLProtectionSpace* CFURLProtectionSpaceRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct _CFHSTSPolicy* CFHSTSPolicyRef;

typedef struct _CFURLProtocol* CFURLProtocolRef;

typedef struct SmartBlockWithArgs<bool> {
	BlockHolderVar<bool> __ptr_;
	__shared_weak_count __cntrl_;
} SmartBlockWithArgs<bool>;

typedef struct shared_ptr<TCPIO_EstablishBase> {
	TCPIO_EstablishBase __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<TCPIO_EstablishBase>;

typedef struct shared_ptr<TransportConnectionObjCPP> {
	TransportConnectionObjCPP __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<TransportConnectionObjCPP>;

typedef struct shared_ptr<HTTPProtocol> {
	HTTPProtocol __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<HTTPProtocol>;

typedef struct {
	long long domain;
	int error;
} SCD_Struct_NS25;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_NS26;

typedef struct {
	SCD_Struct_NS26 field1;
	SCD_Struct_NS26 field2;
} SCD_Struct_NS27;

typedef const struct CompactCookieHeader* CompactCookieHeaderRef;

typedef const struct CompactCookieArray* CompactCookieArrayRef;

typedef struct OpaqueCFHTTPCookie* OpaqueCFHTTPCookieRef;

typedef struct __CFArray* CFArrayRef;

typedef struct timespec {
	long long tv_sec;
	long long tv_nsec;
} timespec;

typedef struct stat {
	int st_dev;
	unsigned short st_mode;
	unsigned short st_nlink;
	unsigned long long st_ino;
	unsigned st_uid;
	unsigned st_gid;
	int st_rdev;
	timespec st_atimespec;
	timespec st_mtimespec;
	timespec st_ctimespec;
	timespec st_birthtimespec;
	long long st_size;
	long long st_blocks;
	int st_blksize;
	unsigned st_flags;
	unsigned st_gen;
	int st_lspare;
	long long st_qspare[2];
} stat;

typedef struct weak_ptr<TransportConnection> {
	TransportConnection __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<TransportConnection>;

typedef struct __CFNetService* CFNetServiceRef;

typedef struct __CFNetServiceBrowser* CFNetServiceBrowserRef;

typedef struct __CFError* CFErrorRef;

typedef struct __CFData* CFDataRef;

typedef struct shared_ptr<NSObject<OS_nw_context> > {
	NSObject<OS_nw_context>* __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<NSObject<OS_nw_context> >;

typedef struct _CFURLRequest* CFURLRequestRef;

typedef struct Flags {
	unsigned _flag_SHOULD_HANDLE_HTTP_COOKIES : 1;
	unsigned _flag_IS_MUTABLE : 1;
	unsigned _flag_SHOULD_START_SYNCHRONOUSLY : 1;
	unsigned _flag_ALLOW_CELLULAR : 1;
	unsigned _flag_PREVENTSIDLESYSTEMSLEEP : 1;
	unsigned _flag_SET_EXPLICIT_COOKIE_ACCEPTANCE_POLICY : 1;
	unsigned _flag_SET_EXPLICIT_SHOULD_HANDLE_COOKIES : 1;
	unsigned _flag_SET_EXPLICIT_NETWORK_SERVICE_TYPE : 1;
	unsigned _flag_SET_EXPLICIT_ALLOWS_CELLULAR : 1;
	unsigned _flag_SET_EXPLICIT_PREVENTS_IDLE_SYSTEM_SLEEP : 1;
	unsigned _flag_SET_EXPLICIT_BOUND_INTERFACE_IDENTIFIER : 1;
	unsigned _flag_SET_EXPLICIT_SHOULD_PIPELINE : 1;
	unsigned _flag_SET_EXPLICIT_CACHE_POLICY : 1;
	unsigned _flag_SET_EXPLICIT_TIMEOUT : 1;
	unsigned _flag_SET_EXPLICIT_PROXY_DICT : 1;
	unsigned _flag_SET_EXPLICIT_SSL_PROPERTIES : 1;
	unsigned _flag_SET_EXPLICIT_CONTENT_DISPOSITION_HEADER_ENCODING_FALLBACK_ARRAY : 1;
	unsigned _flag_SET_EXPLICIT_SHOULD_START_SYNCHRONOUSLY : 1;
} Flags;

typedef struct _compressed_pair<_CFHSTSPolicy *, Deleter_CFRelease> {
	_CFHSTSPolicy __value_;
} compressed_pair<_CFHSTSPolicy *, Deleter_CFRelease>;

typedef struct unique_ptr<_CFHSTSPolicy, Deleter_CFRelease> {
	compressed_pair<_CFHSTSPolicy *, Deleter_CFRelease> __ptr_;
} unique_ptr<_CFHSTSPolicy, Deleter_CFRelease>;

typedef struct URLRequest {
	/*function pointer*/void* _vptr$CoreLoggable;
	__CFURL fURL;
	unsigned long long fCachePolicy;
	double fTimeout;
	__CFURL fMainDocumentURL;
	__CFDictionary fProtocolProperties;
	__CFDictionary fProxyDict;
	HTTPRequest fHTTPRequest;
	Flags fFlags;
	__CFDictionary fSSLProps;
	__CFArray fContentDispositionHeaderEncodingFallbackArray;
	long long fRequestPriority;
	unsigned long long fAllowedProtocolTypes;
	int fNetworkServiceType;
	__CFString fBoundInterfaceIdentifier;
	unsigned long long fExpectedWorkload;
	double fTimeWindowDelay;
	double fTimeWindowDuration;
	double fStartTimeoutTime;
	unsigned char fRequiresShortConnectionTimeout;
	unsigned char fPreventHSTSStorage;
	unsigned char fIgnoreHSTS;
	unsigned char fSchemeWasUpgradedDueToDynamicHSTS;
	unsigned char fKnownHTTP3Capable;
	double fPayloadTransmissionTimeout;
	__CFDictionary fATSOverrides;
	unique_ptr<_CFHSTSPolicy, Deleter_CFRelease> fHSTSPolicy;
	int fAllowsExpensiveNetworkAccess;
	int fAllowsConstrainedNetworkAccess;
	__CFURLStorageSession _explicitStorageSession;
} URLRequest;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

typedef struct __CFURL* CFURLRef;

typedef struct _CFURLCredentialStorage* CFURLCredentialStorageRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct __CFWriteStream* CFWriteStreamRef;

typedef struct _CFURLConnection* CFURLConnectionRef;

typedef struct _CFURLDownload* CFURLDownloadRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef const struct _CFURLCache* CFURLCacheRef;

typedef struct __CFURLStorageSession* CFURLStorageSessionRef;

typedef const struct __CFSet* CFSetRef;

typedef struct {
	double domainLookupBeginTime;
	double connectBeginTime;
	unsigned domainLookupDuration;
	unsigned connectDuration;
	unsigned secureConnectionDuration;
	BOOL secure;
} SCD_Struct_NS57;

