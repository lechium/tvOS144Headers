/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AdPlatformsInternal.framework/AdPlatformsInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ADAttribution_XPC.h>

@class NSXPCConnection, NSNumber, NSString;

@interface ADAttributionRequester : NSObject <ADAttribution_XPC> {

	NSXPCConnection* _connection;
	NSNumber* _transactionToken;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSNumber * transactionToken;               //@synthesize transactionToken=_transactionToken - In the implementation block
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSNumber *)transactionToken;
-(void)setTransactionToken:(NSNumber *)arg1 ;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)setStocksAdEnabled:(BOOL)arg1 ;
-(void)setServerToTest:(long long)arg1 ;
-(id)initWithConnection:(id)arg1 bundleID:(id)arg2 transactionID:(id)arg3 ;
-(int)appRunState;
-(void)overrideAttributionData:(id)arg1 ;
-(BOOL)_isAppTrackingAuthorized;
-(BOOL)productionClient;
-(void)makeAttributionRequestWithObject:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(void)attachSearchMetadataTo:(id)arg1 forAdamID:(id)arg2 ;
-(void)attachDownloadDataTo:(id)arg1 forAdamID:(id)arg2 ;
-(void)requestAttributionDetails:(/*^block*/id)arg1 ;
-(void)beginAttributionRequest:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

