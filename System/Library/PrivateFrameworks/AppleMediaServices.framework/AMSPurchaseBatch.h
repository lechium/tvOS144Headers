/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSLock, AMSLazyPromise, NSMutableArray, NSMutableDictionary;

@interface AMSPurchaseBatch : NSObject {

	BOOL _isComplete;
	NSLock* _lock;
	AMSLazyPromise* _promise;
	NSMutableArray* _purchases;
	NSMutableDictionary* _purchaseMap;
	NSMutableArray* _results;

}

@property (assign,nonatomic) BOOL isComplete;                                  //@synthesize isComplete=_isComplete - In the implementation block
@property (nonatomic,retain) NSLock * lock;                                    //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) AMSLazyPromise * promise;                       //@synthesize promise=_promise - In the implementation block
@property (nonatomic,readonly) NSMutableArray * purchases;                     //@synthesize purchases=_purchases - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * purchaseMap;              //@synthesize purchaseMap=_purchaseMap - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                       //@synthesize results=_results - In the implementation block
-(NSLock *)lock;
-(NSMutableArray *)results;
-(BOOL)isComplete;
-(void)setLock:(NSLock *)arg1 ;
-(AMSLazyPromise *)promise;
-(NSMutableArray *)purchases;
-(void)setIsComplete:(BOOL)arg1 ;
-(id)initWithPurchases:(id)arg1 weakPromise:(id)arg2 ;
-(id)purchaseForPurchaseId:(id)arg1 ;
-(BOOL)finishPurchase:(id)arg1 withError:(id)arg2 ;
-(BOOL)finishPurchase:(id)arg1 withResult:(id)arg2 ;
-(id)nextPurchase;
-(NSMutableDictionary *)purchaseMap;
@end
