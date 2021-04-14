/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TKClientTokenProtocol.h>

@class TKTokenConnection, NSMutableDictionary, NSString;

@interface TKTokenSessionConnection : NSObject <TKClientTokenProtocol> {

	long long _sessionIDCounter;
	TKTokenConnection* _tokenConnection;
	NSMutableDictionary* _sessions;
	NSMutableDictionary* _initialKeepAlives;

}

@property (nonatomic,readonly) TKTokenConnection * tokenConnection;                  //@synthesize tokenConnection=_tokenConnection - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sessions;                       //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * initialKeepAlives;              //@synthesize initialKeepAlives=_initialKeepAlives - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)sessions;
-(void)startSessionWithLAContext:(id)arg1 parameters:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)session:(id)arg1 getAdvertisedItemsWithReply:(/*^block*/id)arg2 ;
-(void)session:(id)arg1 evaluateAccessControl:(id)arg2 forOperation:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)session:(id)arg1 getAttributesOfObjectID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)session:(id)arg1 objectID:(id)arg2 operation:(long long)arg3 data:(id)arg4 algorithms:(id)arg5 parameters:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)session:(id)arg1 createObjectWithAttributes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)session:(id)arg1 deleteObjectWithObjectID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)endSession:(id)arg1 reply:(/*^block*/id)arg2 ;
-(TKTokenConnection *)tokenConnection;
-(NSMutableDictionary *)initialKeepAlives;
-(void)withSessionID:(id)arg1 invoke:(/*^block*/id)arg2 ;
-(id)initWithTokenConnection:(id)arg1 ;
@end

