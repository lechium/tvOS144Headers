/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>
#import <libobjc.A.dylib/AMSAuthenticateTaskDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class AMSPurchaseInfo, AMSURLSession, NSString;

@interface AMSPurchaseTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSAuthenticateTaskDelegate, AMSBagConsumer> {

	id<AMSBagProtocol> _bag;
	AMSPurchaseInfo* _purchaseInfo;
	AMSURLSession* _session;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                               //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSPurchaseInfo * purchaseInfo;                       //@synthesize purchaseInfo=_purchaseInfo - In the implementation block
@property (nonatomic,readonly) AMSURLSession * session;                            //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<AMSPurchaseDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(id)createBagForSubProfile;
-(id<AMSPurchaseDelegate>)delegate;
-(void)setDelegate:(id<AMSPurchaseDelegate>)arg1 ;
-(AMSURLSession *)session;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_runDialogRequest:(id)arg1 ;
-(AMSPurchaseInfo *)purchaseInfo;
-(void)setPurchaseInfo:(AMSPurchaseInfo *)arg1 ;
-(id)initWithPurchase:(id)arg1 bag:(id)arg2 ;
-(id)performPurchase;
-(void)_generateFraudScoreWithInfo:(id)arg1 ;
-(id)_promptForAccount;
-(BOOL)_shouldPreauthenticatePurchase:(id)arg1 ;
-(id)_performPreauthenticate;
-(id)_performPurchaseWithError:(id*)arg1 ;
-(id)_recordEngagementEventWithInfo:(id)arg1 result:(id)arg2 error:(id)arg3 ;
-(id)_runAuthenticateRequest:(id)arg1 ;
@end

