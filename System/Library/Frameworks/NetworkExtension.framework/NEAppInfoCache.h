/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface NEAppInfoCache : NSObject {

	/*^block*/id _customLookupHandler;
	NSMutableDictionary* _cachedSourceAppInfo;

}

@property (retain) NSMutableDictionary * cachedSourceAppInfo;              //@synthesize cachedSourceAppInfo=_cachedSourceAppInfo - In the implementation block
@property (nonatomic,copy) id customLookupHandler;                         //@synthesize customLookupHandler=_customLookupHandler - In the implementation block
+(id)sharedAppInfoCache;
-(id)init;
-(void)setCachedSourceAppInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedSourceAppInfo;
-(BOOL)appInfo:(id)arg1 mismatchedWithUUID:(id)arg2 andBundleID:(id)arg3 ;
-(void)addAppInfoToCache:(id)arg1 ;
-(void)performCustomLookupIfNecessaryForPid:(int)arg1 UUID:(id)arg2 bundleID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)setAppInfo:(id)arg1 forUUID:(id)arg2 ;
-(BOOL)appInfo:(id)arg1 shouldOverwriteAppInfo:(id)arg2 ;
-(BOOL)bundleID:(id)arg1 matchesBundleID:(id)arg2 ;
-(id)bundleIDWithoutTeamID:(id)arg1 ;
-(id)customLookupHandler;
-(id)lookupAppInfoForPid:(int)arg1 bundleID:(id)arg2 ;
-(void)appInfoForPid:(int)arg1 UUID:(id)arg2 bundleID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setCustomLookupHandler:(id)arg1 ;
@end

