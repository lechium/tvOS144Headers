/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_CDContextPersisting.h>

@protocol OS_dispatch_queue;
@class _CDSharedMemoryKeyValueStore, NSObject, NSCountedSet, NSString;

@interface _CDSharedMemoryContextPersisting : NSObject <_CDContextPersisting> {

	_CDSharedMemoryKeyValueStore* _store;
	NSObject*<OS_dispatch_queue> _queue;
	NSCountedSet* _keyPathRegistrationCount;
	NSCountedSet* _legacyKeyPathRegistrationCount;
	NSString* _localDeviceID;

}

@property (nonatomic,retain) _CDSharedMemoryKeyValueStore * store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSCountedSet * keyPathRegistrationCount;                    //@synthesize keyPathRegistrationCount=_keyPathRegistrationCount - In the implementation block
@property (nonatomic,retain) NSCountedSet * legacyKeyPathRegistrationCount;              //@synthesize legacyKeyPathRegistrationCount=_legacyKeyPathRegistrationCount - In the implementation block
@property (nonatomic,retain) NSString * localDeviceID;                                   //@synthesize localDeviceID=_localDeviceID - In the implementation block
+(id)sharedMemoryKeyFromKeyPath:(id)arg1 ;
+(id)sharedMemoryKeyFromRegistration:(id)arg1 ;
+(id)persistenceWithSharedMemoryKeyValueStore:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStore:(_CDSharedMemoryKeyValueStore *)arg1 ;
-(_CDSharedMemoryKeyValueStore *)store;
-(id)initWithSharedMemoryKeyValueStore:(id)arg1 ;
-(void)deleteKeyPaths:(id)arg1 ;
-(id)allKeysForContextStore;
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)saveRegistration:(id)arg1 ;
-(void)deleteRegistration:(id)arg1 ;
-(id)loadValues;
-(id)loadRegistrations;
-(void)deleteAllData;
-(void)deleteDataCreatedBefore:(id)arg1 ;
-(NSCountedSet *)keyPathRegistrationCount;
-(void)setKeyPathRegistrationCount:(NSCountedSet *)arg1 ;
-(NSCountedSet *)legacyKeyPathRegistrationCount;
-(void)setLegacyKeyPathRegistrationCount:(NSCountedSet *)arg1 ;
-(NSString *)localDeviceID;
-(void)setLocalDeviceID:(NSString *)arg1 ;
@end

