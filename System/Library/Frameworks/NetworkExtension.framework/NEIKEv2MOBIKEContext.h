/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2RequestContext.h>

@protocol OS_dispatch_queue;
@class NSString, NWEndpoint, NSObject;

@interface NEIKEv2MOBIKEContext : NEIKEv2RequestContext {

	BOOL _invalidateTransport;
	unsigned _maxRetries;
	NSString* _mobikeInterface;
	NWEndpoint* _mobikeEndpoint;
	unsigned long long _retryIntervalInMilliseconds;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _callback;

}

@property (nonatomic,copy) NSString * mobikeInterface;                                    //@synthesize mobikeInterface=_mobikeInterface - In the implementation block
@property (assign,nonatomic) BOOL invalidateTransport;                                    //@synthesize invalidateTransport=_invalidateTransport - In the implementation block
@property (nonatomic,copy) NWEndpoint * mobikeEndpoint;                                   //@synthesize mobikeEndpoint=_mobikeEndpoint - In the implementation block
@property (assign,nonatomic) unsigned maxRetries;                                         //@synthesize maxRetries=_maxRetries - In the implementation block
@property (assign,nonatomic) unsigned long long retryIntervalInMilliseconds;              //@synthesize retryIntervalInMilliseconds=_retryIntervalInMilliseconds - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                  //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy) id callback;                                                   //@synthesize callback=_callback - In the implementation block
-(id)description;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setMaxRetries:(unsigned)arg1 ;
-(unsigned)maxRetries;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)retryIntervalInMilliseconds;
-(id)initWithMOBIKEInterface:(id)arg1 mobikeEndpoint:(id)arg2 invalidateTransport:(BOOL)arg3 maxRetries:(unsigned)arg4 retryIntervalMilliseconds:(unsigned long long)arg5 callbackQueue:(id)arg6 callback:(/*^block*/id)arg7 ;
-(void)sendCallbackSuccess:(BOOL)arg1 session:(id)arg2 error:(id)arg3 ;
-(NSString *)mobikeInterface;
-(NWEndpoint *)mobikeEndpoint;
-(BOOL)invalidateTransport;
-(void)setMobikeInterface:(NSString *)arg1 ;
-(void)setRetryIntervalInMilliseconds:(unsigned long long)arg1 ;
-(void)setMobikeEndpoint:(NWEndpoint *)arg1 ;
-(void)setInvalidateTransport:(BOOL)arg1 ;
@end

