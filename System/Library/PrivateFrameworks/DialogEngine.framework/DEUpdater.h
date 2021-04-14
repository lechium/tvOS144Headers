/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, NSDate, DEManifest, DEWorkQueues, DEUpdaterState;

@interface DEUpdater : NSObject {

	BOOL _manifestSyncing;
	BOOL _disableManifestSync;
	BOOL _foregroundManifestSync;
	BOOL _logToCoreAnalytics;
	NSString* _distribution;
	NSURL* _publicationURL;
	NSDate* _publicationErrorTime;
	double _publicationErrorTTL;
	NSURL* _downloadURLPrefix;
	NSURL* _builtinDir;
	NSURL* _updateDir;
	NSURL* _storageBase;
	NSURL* _overlayBase;
	NSURL* _tmpBase;
	DEManifest* _builtinManifest;
	DEManifest* _latestManifest;
	DEWorkQueues* _queues;
	DEWorkQueues* _syncQueues;
	DEUpdaterState* _state;

}

@property (nonatomic,retain) NSString * distribution;                    //@synthesize distribution=_distribution - In the implementation block
@property (nonatomic,retain) NSURL * publicationURL;                     //@synthesize publicationURL=_publicationURL - In the implementation block
@property (nonatomic,retain) NSDate * publicationErrorTime;              //@synthesize publicationErrorTime=_publicationErrorTime - In the implementation block
@property (assign,nonatomic) double publicationErrorTTL;                 //@synthesize publicationErrorTTL=_publicationErrorTTL - In the implementation block
@property (nonatomic,retain) NSURL * downloadURLPrefix;                  //@synthesize downloadURLPrefix=_downloadURLPrefix - In the implementation block
@property (nonatomic,retain) NSURL * builtinDir;                         //@synthesize builtinDir=_builtinDir - In the implementation block
@property (nonatomic,retain) NSURL * updateDir;                          //@synthesize updateDir=_updateDir - In the implementation block
@property (nonatomic,retain) NSURL * storageBase;                        //@synthesize storageBase=_storageBase - In the implementation block
@property (nonatomic,retain) NSURL * overlayBase;                        //@synthesize overlayBase=_overlayBase - In the implementation block
@property (nonatomic,retain) NSURL * tmpBase;                            //@synthesize tmpBase=_tmpBase - In the implementation block
@property (nonatomic,retain) DEManifest * builtinManifest;               //@synthesize builtinManifest=_builtinManifest - In the implementation block
@property (nonatomic,retain) DEManifest * latestManifest;                //@synthesize latestManifest=_latestManifest - In the implementation block
@property (nonatomic,retain) DEWorkQueues * queues;                      //@synthesize queues=_queues - In the implementation block
@property (nonatomic,retain) DEWorkQueues * syncQueues;                  //@synthesize syncQueues=_syncQueues - In the implementation block
@property (nonatomic,retain) DEUpdaterState * state;                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL manifestSyncing;                       //@synthesize manifestSyncing=_manifestSyncing - In the implementation block
@property (assign,nonatomic) BOOL disableManifestSync;                   //@synthesize disableManifestSync=_disableManifestSync - In the implementation block
@property (assign,nonatomic) BOOL foregroundManifestSync;                //@synthesize foregroundManifestSync=_foregroundManifestSync - In the implementation block
@property (assign,nonatomic) BOOL logToCoreAnalytics;                    //@synthesize logToCoreAnalytics=_logToCoreAnalytics - In the implementation block
+(id)getDispatchQueue;
+(id)getVersionSeed:(unsigned long long)arg1 ;
+(BOOL)manifestExists:(id)arg1 ;
+(id)getURLParams:(id)arg1 URLVersion:(unsigned long long)arg2 manifest:(id)arg3 ;
+(id)getURLParams:(id)arg1 URLVersion:(unsigned long long)arg2 ;
+(id)getPublicationPath:(id)arg1 category:(id)arg2 ;
+(id)getDefaultCategory;
+(id)getPublicationURL:(id)arg1 prefixURL:(id)arg2 category:(id)arg3 ;
+(id)summarize:(id)arg1 filter:(id)arg2 ;
+(BOOL)putManifest:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 overrides:(id)arg5 dirDownloadType:(unsigned long long)arg6 ;
+(BOOL)copyFrom:(id)arg1 to:(id)arg2 ;
+(BOOL)package:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 dest:(id)arg5 manifestDest:(id)arg6 overrides:(id)arg7 dirDownloadType:(unsigned long long)arg8 keyId:(unsigned long long)arg9 privateKey:(id)arg10 updating:(id)arg11 publicationURL:(id)arg12 downloadURLPrefix:(id)arg13 ;
+(id)loadPublication:(id)arg1 defaultTag:(id)arg2 allowAllKeys:(BOOL)arg3 ;
+(id)getPublicationURL:(id)arg1 ;
+(id)getDownloadURLPrefix:(id)arg1 ;
+(BOOL)hasDefaultURLs:(id)arg1 publicationURL:(id)arg2 downloadURLPrefix:(id)arg3 ;
+(id)getUpdateDirFor:(id)arg1 base:(id)arg2 ;
+(id)getURLParams:(id)arg1 ;
+(void)remove:(id)arg1 from:(id)arg2 ;
+(id)getManifestName;
+(void)clearURLParamsCache;
+(id)getPublicationPath:(id)arg1 category:(id)arg2 URLVersion:(unsigned long long)arg3 ;
+(BOOL)putManifest:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 overrides:(id)arg5 ;
+(BOOL)putDirectoryManifest:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 downloadType:(unsigned long long)arg5 ;
+(BOOL)package:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 dest:(id)arg5 manifestDest:(id)arg6 overrides:(id)arg7 keyId:(unsigned long long)arg8 privateKey:(id)arg9 updating:(id)arg10 ;
+(BOOL)packageDirectory:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 dest:(id)arg5 manifestDest:(id)arg6 downloadType:(unsigned long long)arg7 keyId:(unsigned long long)arg8 privateKey:(id)arg9 updating:(id)arg10 ;
+(BOOL)prepareDistribution:(id)arg1 disabled:(BOOL)arg2 in:(id)arg3 tag:(id)arg4 keyId:(unsigned long long)arg5 privateKey:(id)arg6 ;
+(id)appendPublicationName:(id)arg1 ;
-(id)init;
-(DEUpdaterState *)state;
-(void)setState:(DEUpdaterState *)arg1 ;
-(NSString *)distribution;
-(void)setDistribution:(NSString *)arg1 ;
-(BOOL)resetState;
-(BOOL)saveState;
-(void)setQueues:(DEWorkQueues *)arg1 ;
-(DEWorkQueues *)queues;
-(BOOL)loadState;
-(NSURL *)publicationURL;
-(void)setPublicationURL:(NSURL *)arg1 ;
-(NSURL *)downloadURLPrefix;
-(void)setDownloadURLPrefix:(NSURL *)arg1 ;
-(BOOL)isDirectoryDistribution;
-(id)getVersionFor:(id)arg1 encryptedVersion:(id*)arg2 ;
-(BOOL)linkToOverlay:(id)arg1 from:(id)arg2 replace:(BOOL)arg3 shouldSymlink:(BOOL)arg4 ;
-(void)removeFromOverlay:(id)arg1 ;
-(id)getStorageURLFor:(id)arg1 version:(id)arg2 ;
-(BOOL)linkToOverlay:(id)arg1 from:(id)arg2 replace:(BOOL)arg3 ;
-(id)chooseOverlayBase;
-(BOOL)individualDistributionValid;
-(id)chooseURLFor:(id)arg1 version:(id)arg2 versionFound:(BOOL*)arg3 ;
-(BOOL)prepareBuiltinManifest:(BOOL)arg1 filter:(id)arg2 ;
-(void)prepareLatestManifest;
-(id)initWithPublicationURL:(id)arg1 downloadURLPrefix:(id)arg2 builtinDir:(id)arg3 updateDir:(id)arg4 filter:(id)arg5 ;
-(DEManifest *)builtinManifest;
-(NSURL *)builtinDir;
-(id)prepared:(id)arg1 version:(id)arg2 ;
-(void)checkOverlay:(id)arg1 version:(id)arg2 ;
-(id)getDownloadURLFor:(id)arg1 encryptedVersion:(id)arg2 ;
-(id)store:(id)arg1 version:(id)arg2 encryptedVersion:(id)arg3 from:(id)arg4 src:(id)arg5 ;
-(id)getVersionFor:(id)arg1 ;
-(void)unorderedPrepare:(id)arg1 version:(id)arg2 encryptedVersion:(id)arg3 linkIfLatest:(BOOL)arg4 publication:(id)arg5 block:(/*^block*/id)arg6 ;
-(void)runSyncBlock:(/*^block*/id)arg1 ;
-(BOOL)syncNeeded;
-(void)setManifestSyncing:(BOOL)arg1 ;
-(DEManifest *)latestManifest;
-(void)unorderedSync:(id)arg1 block:(/*^block*/id)arg2 ;
-(DEWorkQueues *)syncQueues;
-(void)setPublicationErrorTime:(NSDate *)arg1 ;
-(void)sync:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)checkManifest:(id)arg1 manifestURL:(id)arg2 ;
-(void)prepare:(id)arg1 version:(id)arg2 encryptedVersion:(id)arg3 linkIfLatest:(BOOL)arg4 publication:(id)arg5 block:(/*^block*/id)arg6 ;
-(void)unorderedUpdate:(id)arg1 block:(/*^block*/id)arg2 syncBlock:(/*^block*/id)arg3 syncInForeground:(id)arg4 ;
-(id)getOutOfDateVersion:(id)arg1 ;
-(id)findLocally:(id)arg1 status:(id*)arg2 ;
-(void)findLocally:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)update:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)find:(id)arg1 downloadType:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(id)find:(id)arg1 downloadType:(unsigned long long)arg2 status:(id*)arg3 ;
-(BOOL)directoryDistributionValid;
-(BOOL)updateIsReady;
-(BOOL)applyUpdate;
-(id)findDirectoryLocally:(BOOL)arg1 status:(id*)arg2 ;
-(void)findDirectoryLocally:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(void)findDirectory:(BOOL)arg1 downloadType:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(id)findDirectory:(BOOL)arg1 downloadType:(unsigned long long)arg2 status:(id*)arg3 ;
-(id)initWithPublicationURL:(id)arg1 downloadURLPrefix:(id)arg2 builtinDir:(id)arg3 ;
-(id)initWithBuiltinDir:(id)arg1 updateDir:(id)arg2 ;
-(id)initWithBuiltinDir:(id)arg1 filter:(id)arg2 ;
-(id)initWithBuiltinDir:(id)arg1 ;
-(id)initPlaceholder;
-(BOOL)matches:(id)arg1 filter:(id)arg2 ;
-(void)removeFromStorage:(id)arg1 ;
-(BOOL)nameKnown:(id)arg1 blockRequired:(BOOL*)arg2 ;
-(void)find:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)find:(id)arg1 status:(id*)arg2 ;
-(void)findDirectory:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(id)findDirectory:(BOOL)arg1 status:(id*)arg2 ;
-(NSDate *)publicationErrorTime;
-(double)publicationErrorTTL;
-(void)setPublicationErrorTTL:(double)arg1 ;
-(void)setBuiltinDir:(NSURL *)arg1 ;
-(NSURL *)updateDir;
-(void)setUpdateDir:(NSURL *)arg1 ;
-(NSURL *)storageBase;
-(void)setStorageBase:(NSURL *)arg1 ;
-(NSURL *)overlayBase;
-(void)setOverlayBase:(NSURL *)arg1 ;
-(NSURL *)tmpBase;
-(void)setTmpBase:(NSURL *)arg1 ;
-(void)setBuiltinManifest:(DEManifest *)arg1 ;
-(void)setLatestManifest:(DEManifest *)arg1 ;
-(void)setSyncQueues:(DEWorkQueues *)arg1 ;
-(BOOL)manifestSyncing;
-(BOOL)disableManifestSync;
-(void)setDisableManifestSync:(BOOL)arg1 ;
-(BOOL)foregroundManifestSync;
-(void)setForegroundManifestSync:(BOOL)arg1 ;
-(BOOL)logToCoreAnalytics;
-(void)setLogToCoreAnalytics:(BOOL)arg1 ;
@end

