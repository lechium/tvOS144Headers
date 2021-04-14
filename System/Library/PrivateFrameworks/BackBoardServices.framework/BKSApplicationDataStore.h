/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FBSApplicationDataStore, NSString;

@interface BKSApplicationDataStore : NSObject {

	FBSApplicationDataStore* _fbsApplicationDataStore;

}

@property (nonatomic,readonly) NSString * bundleID; 
+(void)synchronize;
+(id)storeForApplication:(id)arg1 ;
+(id)applicationsWithAvailableStores;
+(void)setPrefetchedKeys:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSString *)bundleID;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)_initWithFBSApplicationDataStore:(id)arg1 ;
-(void)objectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)archivedObjectForKey:(id)arg1 ;
-(void)archivedObjectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
@end

