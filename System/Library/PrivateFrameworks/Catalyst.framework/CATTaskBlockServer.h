/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CATTaskServerDelegate.h>

@class CATTaskServer, NSMutableDictionary, NSMutableSet, NSMapTable, NSArray, NSString;

@interface CATTaskBlockServer : NSObject <CATTaskServerDelegate> {

	CATTaskServer* mServer;
	NSMutableDictionary* mOperationBlocksByRequestClassName;
	NSMutableSet* mLongRunningOperationRequestClassNames;
	NSMapTable* mLongRunningOperationsByUUID;
	NSArray* _clientSessions;
	/*^block*/id _sessionDidConnect;
	/*^block*/id _sessionDidReceiveNotification;
	/*^block*/id _sessionDidInterruptWithError;
	/*^block*/id _sessionDidDisconnect;
	/*^block*/id _sessionDidInvalidate;
	/*^block*/id _didInvalidate;

}

@property (nonatomic,copy,readonly) NSArray * clientSessions;              //@synthesize clientSessions=_clientSessions - In the implementation block
@property (nonatomic,copy) id sessionDidConnect;                           //@synthesize sessionDidConnect=_sessionDidConnect - In the implementation block
@property (nonatomic,copy) id sessionDidReceiveNotification;               //@synthesize sessionDidReceiveNotification=_sessionDidReceiveNotification - In the implementation block
@property (nonatomic,copy) id sessionDidInterruptWithError;                //@synthesize sessionDidInterruptWithError=_sessionDidInterruptWithError - In the implementation block
@property (nonatomic,copy) id sessionDidDisconnect;                        //@synthesize sessionDidDisconnect=_sessionDidDisconnect - In the implementation block
@property (nonatomic,copy) id sessionDidInvalidate;                        //@synthesize sessionDidInvalidate=_sessionDidInvalidate - In the implementation block
@property (nonatomic,copy) id didInvalidate;                               //@synthesize didInvalidate=_didInvalidate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)sessionDidConnect;
-(void)setSessionDidConnect:(id)arg1 ;
-(id)didInvalidate;
-(void)setDidInvalidate:(id)arg1 ;
-(void)serverDidInvalidate:(id)arg1 ;
-(void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)disconnectAllClientSessions;
-(id)sessionDidInterruptWithError;
-(id)sessionDidReceiveNotification;
-(id)sessionDidDisconnect;
-(id)sessionDidInvalidate;
-(id)server:(id)arg1 clientSession:(id)arg2 operationForRequest:(id)arg3 error:(id*)arg4 ;
-(void)server:(id)arg1 clientSession:(id)arg2 didInterruptWithError:(id)arg3 ;
-(void)server:(id)arg1 clientSession:(id)arg2 didReceiveNotificationWithName:(id)arg3 userInfo:(id)arg4 ;
-(void)server:(id)arg1 clientSessionDidConnect:(id)arg2 ;
-(void)server:(id)arg1 clientSessionDidDisconnect:(id)arg2 ;
-(void)server:(id)arg1 clientSessionDidInvalidate:(id)arg2 ;
-(id)createClientTransport;
-(void)registerBlock:(/*^block*/id)arg1 forRequestClass:(Class)arg2 ;
-(void)registerLongRunningOperationForRequestClass:(Class)arg1 ;
-(void)cancelLongRunningOperationsForRequestClass:(Class)arg1 ;
-(NSArray *)clientSessions;
-(void)setSessionDidReceiveNotification:(id)arg1 ;
-(void)setSessionDidInterruptWithError:(id)arg1 ;
-(void)setSessionDidDisconnect:(id)arg1 ;
-(void)setSessionDidInvalidate:(id)arg1 ;
@end

