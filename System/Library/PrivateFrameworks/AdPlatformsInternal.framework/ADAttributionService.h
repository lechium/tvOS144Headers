/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AdPlatformsInternal.framework/AdPlatformsInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableDictionary, NSNumber, NSString;

@interface ADAttributionService : ADSingleton <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSMutableDictionary* _clients;
	NSNumber* _transactionID;

}

@property (retain) NSXPCListener * listener;                             //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clients;              //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSNumber * transactionID;                   //@synthesize transactionID=_transactionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setClients:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)clients;
-(void)setTransactionID:(NSNumber *)arg1 ;
-(NSNumber *)transactionID;
-(void)removeClientForToken:(id)arg1 ;
@end

