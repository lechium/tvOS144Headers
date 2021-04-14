/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSData, AMSURLSession, AMSMescalFairPlay;

@interface AMSMescalSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSData* _certificateData;
	AMSURLSession* _urlSession;
	AMSMescalFairPlay* _fairPlayContext;
	long long _mescalType;
	BOOL _primed;

}

@property (assign,nonatomic) BOOL primed;              //@synthesize primed=_primed - In the implementation block
+(id)sessionWithType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(BOOL)primed;
-(void)_resetSession;
-(id)signData:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
-(BOOL)primeTheConnectionWithBag:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3 error:(id*)arg4 ;
-(BOOL)_verifyPrimeResponse:(id)arg1 error:(id*)arg2 ;
-(id)_establishContextWithBag:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldRetryFairPlayForError:(id)arg1 ;
-(void)setPrimed:(BOOL)arg1 ;
-(id)_cachedCertPath;
-(BOOL)_cacheCertData:(id)arg1 expiration:(double)arg2 ;
-(BOOL)_verifyEntitlements;
-(id)_loadCertificateDataWithBag:(id)arg1 error:(id*)arg2 ;
-(id)_postExchangeData:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
-(id)_cachedCertData;
@end

