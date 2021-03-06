/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <TVIdleServices/TVIdleServices-Structs.h>
@class TVISAssetServiceManager, NSObject;

@interface TVISCacheDeleteManager : NSObject {

	TVISAssetServiceManager* _assetManager;
	NSObject*<OS_dispatch_queue> _cacheDeleteQ;

}

@property (nonatomic,readonly) TVISAssetServiceManager * assetManager;                 //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cacheDeleteQ;              //@synthesize cacheDeleteQ=_cacheDeleteQ - In the implementation block
+(id)sharedInstance;
+(void)registerWithCacheDelete;
-(id)init;
-(TVISAssetServiceManager *)assetManager;
-(const CFDictionaryRef)_purgeableAmountHandlerWithUrgency:(int)arg1 info:(const CFDictionaryRef)arg2 ;
-(const CFDictionaryRef)_purgeHandlerWithUrgency:(int)arg1 info:(const CFDictionaryRef)arg2 ;
-(void)_purgeCancelHandler;
-(const CFDictionaryRef)_periodicPurgeHandlerWithUrgency:(int)arg1 info:(const CFDictionaryRef)arg2 ;
-(NSObject*<OS_dispatch_queue>)cacheDeleteQ;
@end

