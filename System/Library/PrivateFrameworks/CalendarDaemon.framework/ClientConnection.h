/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <libobjc.A.dylib/CADDatabaseProvider.h>

@protocol CADAccountAccessHandler, OS_dispatch_queue, ClientConnectionDelegate;
@class NSObject, NSOperationQueue, NSMutableDictionary, NSMutableSet, CADOperationProxy, ClientIdentity, NSXPCConnection, CADDatabaseInitializationOptions, NSString;

@interface ClientConnection : NSObject <CADDatabaseProvider> {

	BOOL _allowedEntityTypesValid;
	long long _eventAccess;
	long long _reminderAccess;
	CalDatabase* _database;
	id<CADAccountAccessHandler> _accountAccessHandler;
	id<CADAccountAccessHandler> _strictAccountAccessHandler;
	NSObject*<OS_dispatch_queue> _dbQueue;
	NSOperationQueue* _operations;
	NSMutableDictionary* _insertedObjects;
	NSMutableSet* _canceledRequests;
	NSObject*<OS_dispatch_queue> _canceledRequestsLock;
	BOOL _initializationOptionsSet;
	CADOperationProxy* _cadOperationProxy;
	id<ClientConnectionDelegate> _delegate;
	ClientIdentity* _identity;
	NSXPCConnection* _xpcConnection;
	CADDatabaseInitializationOptions* _databaseInitializationOptions;

}

@property (nonatomic,readonly) id<CADAccountAccessHandler> accountAccessHandler; 
@property (assign,nonatomic,__weak) id<ClientConnectionDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CalDatabase* database;                                                         //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) ClientIdentity * identity;                                                   //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) CADOperationProxy * cadOperationProxy;                                       //@synthesize cadOperationProxy=_cadOperationProxy - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSString * changeTrackingID; 
@property (nonatomic,retain) CADDatabaseInitializationOptions * databaseInitializationOptions;              //@synthesize databaseInitializationOptions=_databaseInitializationOptions - In the implementation block
@property (readonly) BOOL initializationOptionsSet;                                                         //@synthesize initializationOptionsSet=_initializationOptionsSet - In the implementation block
-(void)dealloc;
-(void*)objectForKey:(id)arg1 ;
-(void)addOperation:(id)arg1 ;
-(id<ClientConnectionDelegate>)delegate;
-(void)setDelegate:(id<ClientConnectionDelegate>)arg1 ;
-(ClientIdentity *)identity;
-(id)operations;
-(CalDatabase*)database;
-(void)setDatabase:(CalDatabase*)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)insertedObjects;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)closeDatabase;
-(BOOL)eventAccessGranted;
-(BOOL)reminderAccessGranted;
-(BOOL)hasTCCAccessToEntityWithObjectID:(id)arg1 ;
-(void)insertObject:(void*)arg1 key:(id)arg2 ;
-(id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1 ;
-(NSString *)changeTrackingID;
-(BOOL)isCalendarRestricted:(void*)arg1 forAction:(unsigned long long)arg2 ;
-(void)clearInsertedObjects;
-(BOOL)isCalendarItemRestricted:(void*)arg1 forAction:(unsigned long long)arg2 ;
-(BOOL)isObjectWithObjectIDAJunkEvent:(id)arg1 ;
-(BOOL)initializationOptionsSet;
-(id)_createManagedConfigAccountAccessHandlerWithValidator:(id)arg1 ;
-(void)_initAccountAccessHandler;
-(id<CADAccountAccessHandler>)accountAccessHandler;
-(id)strictAccountAccessHandler;
-(CADDatabaseInitializationOptions *)databaseInitializationOptions;
-(void)_loadAccessPermissionsIfNeeded;
-(BOOL)_hasTCCAccessToEntityWithObjectIDUsingDeepInspection:(id)arg1 ;
-(BOOL)isStoreRestricted:(void*)arg1 forAction:(unsigned long long)arg2 strict:(BOOL)arg3 ;
-(BOOL)isStoreManaged:(void*)arg1 ;
-(BOOL)isCalendarManaged:(void*)arg1 ;
-(void)handleDatabaseChanged;
-(void)setDatabaseInitializationOptions:(CADDatabaseInitializationOptions *)arg1 ;
-(void)dumpState;
-(void)clearCachedAuthorizationStatus;
-(BOOL)isStoreRestricted:(void*)arg1 forAction:(unsigned long long)arg2 ;
-(BOOL)isNotificationRestricted:(void*)arg1 forAction:(unsigned long long)arg2 ;
-(BOOL)isCalendarItemManaged:(void*)arg1 ;
-(CADOperationProxy *)cadOperationProxy;
@end

