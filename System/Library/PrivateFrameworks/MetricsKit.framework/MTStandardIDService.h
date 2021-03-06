/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTIDService.h>

@protocol MTIDSecretStore;
@class NSNumber, MTPromise, MTIDCache, MTInterprocessChangeNotifier, NSMutableDictionary, NSString;

@interface MTStandardIDService : NSObject <MTIDService> {

	NSNumber* _dsId;
	MTPromise* _configPromise;
	MTIDCache* _cache;
	MTInterprocessChangeNotifier* _accountChanged;
	id<MTIDSecretStore> _secretStore;
	NSNumber* _defaultDSID;
	NSMutableDictionary* _associatedObjects;

}

@property (nonatomic,retain) MTPromise * configPromise;                                  //@synthesize configPromise=_configPromise - In the implementation block
@property (nonatomic,retain) MTIDCache * cache;                                          //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) MTInterprocessChangeNotifier * accountChanged;              //@synthesize accountChanged=_accountChanged - In the implementation block
@property (nonatomic,retain) id<MTIDSecretStore> secretStore;                            //@synthesize secretStore=_secretStore - In the implementation block
@property (nonatomic,retain) NSNumber * defaultDSID;                                     //@synthesize defaultDSID=_defaultDSID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * associatedObjects;                    //@synthesize associatedObjects=_associatedObjects - In the implementation block
@property (nonatomic,retain) NSNumber * dsId;                                            //@synthesize dsId=_dsId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isTinkerPaired;
+(void)triggerInterprocessChangeNotifier:(id)arg1 ;
+(void)registerInterprocessChangeNotifier:(id)arg1 ;
+(id)writeDebugData:(id)arg1 toFileWithNameFormat:(id)arg2 ;
+(void)setLocalCachePath:(id)arg1 ;
+(id)localCachePath;
-(id)init;
-(void)dealloc;
-(void)setConfig:(id)arg1 ;
-(MTIDCache *)cache;
-(void)setCache:(MTIDCache *)arg1 ;
-(id)initWithAMSBag:(id)arg1 ;
-(MTInterprocessChangeNotifier *)accountChanged;
-(void)performMaintenanceWithCompletion:(/*^block*/id)arg1 ;
-(NSNumber *)dsId;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithConfigPromise:(id)arg1 ;
-(void)setConfigPromise:(MTPromise *)arg1 ;
-(id<MTIDSecretStore>)secretStore;
-(void)setSecretStore:(id<MTIDSecretStore>)arg1 ;
-(void)handleResetNotification:(id)arg1 ;
-(void)handleApplicationStateChange:(id)arg1 ;
-(void)handleAccountNotification;
-(void)setAccountChanged:(MTInterprocessChangeNotifier *)arg1 ;
-(void)maybeSubscribeToDarwinNotifications;
-(NSNumber *)defaultDSID;
-(void)setDefaultDSID:(NSNumber *)arg1 ;
-(id)IDFieldsForTopic:(id)arg1 options:(id)arg2 ;
-(id)resetIDForTopics:(id)arg1 options:(id)arg2 ;
-(id)filledOptions:(id)arg1 ;
-(MTPromise *)configPromise;
-(id)IDInfoForNamespace:(id)arg1 options:(id)arg2 fromConfig:(id)arg3 ;
-(id)IDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3 ;
-(id)IDsForNamespaces:(id)arg1 options:(id)arg2 fromConfig:(id)arg3 ;
-(NSMutableDictionary *)associatedObjects;
-(id)generateIDInfo:(id)arg1 secret:(id)arg2 dsId:(id)arg3 correlationIDs:(id)arg4 ;
-(void)IDFieldsForTopic:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetIDForTopics:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)queryIDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleRecordNotification;
-(void)_clearLocalData;
-(void)_resetIDs;
-(void)_getSecrets;
-(void)_getIDs;
-(void)_getConfig;
-(void)setDsId:(NSNumber *)arg1 ;
-(void)setAssociatedObjects:(NSMutableDictionary *)arg1 ;
@end

