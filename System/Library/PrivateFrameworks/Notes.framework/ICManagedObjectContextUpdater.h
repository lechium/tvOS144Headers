/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ICManagedObjectContextUpdaterDelegate, OS_dispatch_queue;
@class NSPersistentStore, NSManagedObjectContext, NSPersistentHistoryToken, NSDate, NSObject, ICSelectorDelayer;

@interface ICManagedObjectContextUpdater : NSObject {

	BOOL _listening;
	NSPersistentStore* _store;
	NSManagedObjectContext* _context;
	id<ICManagedObjectContextUpdaterDelegate> _delegate;
	NSPersistentHistoryToken* _previousHistoryToken;
	NSDate* _previousHistoryDate;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _numberOfCoalescedNotifications;
	ICSelectorDelayer* _delayer;

}

@property (assign,nonatomic,__weak) NSPersistentStore * store;                                       //@synthesize store=_store - In the implementation block
@property (assign,nonatomic,__weak) NSManagedObjectContext * context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSPersistentHistoryToken * previousHistoryToken;                        //@synthesize previousHistoryToken=_previousHistoryToken - In the implementation block
@property (nonatomic,retain) NSDate * previousHistoryDate;                                           //@synthesize previousHistoryDate=_previousHistoryDate - In the implementation block
@property (assign,getter=isListening,nonatomic) BOOL listening;                                      //@synthesize listening=_listening - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCoalescedNotifications;                      //@synthesize numberOfCoalescedNotifications=_numberOfCoalescedNotifications - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * delayer;                                            //@synthesize delayer=_delayer - In the implementation block
@property (assign,nonatomic,__weak) id<ICManagedObjectContextUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)contextSaveNotificationFromPersistentHistoryResult:(id)arg1 ignoringContextName:(id)arg2 fromTransactionAuthor:(id)arg3 latestToken:(id*)arg4 latestTimestamp:(id*)arg5 ;
-(id)init;
-(void)dealloc;
-(id<ICManagedObjectContextUpdaterDelegate>)delegate;
-(void)setDelegate:(id<ICManagedObjectContextUpdaterDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSManagedObjectContext *)context;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)persistentStoreCoordinator;
-(void)setStore:(NSPersistentStore *)arg1 ;
-(NSPersistentStore *)store;
-(void)requestUpdate;
-(BOOL)isListening;
-(void)setListening:(BOOL)arg1 ;
-(id)initWithStore:(id)arg1 context:(id)arg2 ;
-(void)setPreviousHistoryDate:(NSDate *)arg1 ;
-(void)fetchChangeHistory;
-(void)setDelayer:(ICSelectorDelayer *)arg1 ;
-(void)stopListeningForRemoteContextDidChangeNotifications;
-(void)handlePersistentStoreRemoteChangeNotification:(id)arg1 ;
-(ICSelectorDelayer *)delayer;
-(unsigned long long)numberOfCoalescedNotifications;
-(void)setNumberOfCoalescedNotifications:(unsigned long long)arg1 ;
-(NSDate *)previousHistoryDate;
-(NSPersistentHistoryToken *)previousHistoryToken;
-(void)setPreviousHistoryToken:(NSPersistentHistoryToken *)arg1 ;
-(void)processObjectsInChangeDictionary:(id)arg1 ;
-(void)startListeningForRemoteContextDidChangeNotifications;
@end

