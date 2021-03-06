/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, WLKServerConfigurationResponse, NSURLSessionConfiguration;

@interface WLKConfigurationManager : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	WLKServerConfigurationResponse* _config;
	NSURLSessionConfiguration* _sharedCacheSessionConfiguration;

}
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)_configuration;
-(id)_config;
-(void)_invalidateCache;
-(id)_stringForCachePolicy:(unsigned long long)arg1 ;
-(void)_handleLibraryDidChangeNotification:(id)arg1 ;
-(void)fetchConfigurationWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 queryParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setConfig:(id)arg1 ;
-(id)_configurationWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 queryParameters:(id)arg3 ;
-(void)_invalidateNetworkCache;
-(void)fetchConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_utsk;
-(void)_setUtsk:(id)arg1 ;
@end

