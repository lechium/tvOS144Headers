/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSPurchaseDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol OS_dispatch_queue;
@class AMSURLSession, NSMutableArray, AMSPurchaseQueueConfiguration, NSObject, NSLock, NSString;

@interface AMSPurchaseQueue : NSObject <AMSPurchaseDelegate, AMSBagConsumer> {

	AMSURLSession* _session;
	BOOL _isSuspeneded;
	NSMutableArray* _batches;
	AMSPurchaseQueueConfiguration* _config;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSLock* _lock;

}

@property (nonatomic,retain) NSMutableArray * batches;                                //@synthesize batches=_batches - In the implementation block
@property (nonatomic,retain) AMSPurchaseQueueConfiguration * config;                  //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL isSuspeneded;                                       //@synthesize isSuspeneded=_isSuspeneded - In the implementation block
@property (nonatomic,retain) NSLock * lock;                                           //@synthesize lock=_lock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(id)createBagForSubProfile;
-(NSLock *)lock;
-(AMSPurchaseQueueConfiguration *)config;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConfig:(AMSPurchaseQueueConfiguration *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLock:(NSLock *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)batches;
-(void)setBatches:(NSMutableArray *)arg1 ;
-(void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleNextPurchase;
-(void)_processPurchase:(id)arg1 ;
-(BOOL)isSuspeneded;
-(id)enquePurchases:(id)arg1 ;
-(void)setSuspended:(BOOL)arg1 logUUID:(id)arg2 ;
-(void)setIsSuspeneded:(BOOL)arg1 ;
@end

