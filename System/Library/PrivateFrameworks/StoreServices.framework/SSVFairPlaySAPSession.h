/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SSVSAPContext.h>

@protocol OS_dispatch_queue;
@class SSBag, NSObject, NSData, SSVFairPlaySAPContext, SSURLBag, SSVURLBagInterpreter, NSString;

@interface SSVFairPlaySAPSession : NSObject <SSVSAPContext> {

	SSBag* _bag;
	NSObject*<OS_dispatch_queue> _completionBlockQueue;
	NSData* _certificateData;
	SSVFairPlaySAPContext* _context;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _primed;
	SSURLBag* _urlBag;
	long long _version;
	BOOL _useSharedBagInterpreter;
	SSVURLBagInterpreter* _urlBagInterpreter;

}

@property (nonatomic,readonly) long long version;                                     //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) SSVURLBagInterpreter * urlBagInterpreter;              //@synthesize urlBagInterpreter=_urlBagInterpreter - In the implementation block
@property (assign,nonatomic) BOOL useSharedBagInterpreter;                            //@synthesize useSharedBagInterpreter=_useSharedBagInterpreter - In the implementation block
@property (nonatomic,readonly) BOOL primed;                                           //@synthesize primed=_primed - In the implementation block
@property (copy) NSData * certificateData; 
@property (readonly) long long SAPVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)version;
-(NSData *)certificateData;
-(id)initWithURLBagDictionary:(id)arg1 ;
-(id)initWithURLBag:(id)arg1 ;
-(BOOL)verifyData:(id)arg1 withSignature:(id)arg2 error:(id*)arg3 ;
-(id)signatureWithData:(id)arg1 error:(id*)arg2 ;
-(id)_urlBagInterpreter;
-(id)initWithSAPVersion:(long long)arg1 ;
-(void)setCertificateData:(NSData *)arg1 ;
-(id)initWithURLBag:(id)arg1 SAPVersion:(long long)arg2 ;
-(id)_initSSVFairPlaySAPSession;
-(id)initWithURLBagDictionary:(id)arg1 SAPVersion:(long long)arg2 ;
-(id)_establishContext;
-(BOOL)_primeTheConnection;
-(id)_signData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldRetrySAPOperationForError:(id)arg1 ;
-(BOOL)_verifySignature:(id)arg1 forData:(id)arg2 error:(id*)arg3 ;
-(void)signData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)verifySignature:(id)arg1 forData:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_loadCertificateData;
-(id)_postExchangeData:(id)arg1 ;
-(BOOL)_verifyPrimeResponse:(id)arg1 ;
-(id)initWithSSBag:(id)arg1 SAPVersion:(long long)arg2 ;
-(id)_initWithURLBagInterpreter:(id)arg1 SAPVersion:(long long)arg2 ;
-(void)establishSessionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)primeSessionWithCompletionBlock:(/*^block*/id)arg1 ;
-(long long)SAPVersion;
-(SSVURLBagInterpreter *)urlBagInterpreter;
-(BOOL)useSharedBagInterpreter;
-(void)setUseSharedBagInterpreter:(BOOL)arg1 ;
-(BOOL)primed;
@end

