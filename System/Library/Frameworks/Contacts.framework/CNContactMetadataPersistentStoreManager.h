/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSPersistentContainer;

@interface CNContactMetadataPersistentStoreManager : NSObject {

	NSURL* _storeLocation;
	NSPersistentContainer* _container;

}

@property (nonatomic,readonly) NSURL * storeLocation;                          //@synthesize storeLocation=_storeLocation - In the implementation block
@property (nonatomic,readonly) NSPersistentContainer * container;              //@synthesize container=_container - In the implementation block
+(id)os_log;
+(id)createModel;
+(id)currentManagedObjectModel;
+(id)defaultStoreLocation;
+(id)createPersistentContainer;
-(id)init;
-(NSPersistentContainer *)container;
-(id)persistentStoreCoordinator;
-(BOOL)performWorkWithManagedObjectContext:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)initWithStoreLocation:(id)arg1 ;
-(BOOL)setupIfNeeded:(id*)arg1 ;
-(id)createManagedObjectContext;
-(BOOL)createStoreDirectoryIfNeeded:(id*)arg1 ;
-(NSURL *)storeLocation;
-(id)storeDescription;
@end

