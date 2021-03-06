/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchUserQuotaOperationCallbacks.h>

@interface CKFetchUserQuotaOperation : CKDatabaseOperation <CKFetchUserQuotaOperationCallbacks> {

	/*^block*/id _fetchUserQuotaCompletionBlock;
	unsigned long long _quotaAvailable;

}

@property (assign,nonatomic) unsigned long long quotaAvailable;                                                  //@synthesize quotaAvailable=_quotaAvailable - In the implementation block
@property (nonatomic,readonly) id<CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id fetchUserQuotaCompletionBlock;                                                     //@synthesize fetchUserQuotaCompletionBlock=_fetchUserQuotaCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(SEL)daemonCallbackCompletionSelector;
-(id)init;
-(BOOL)hasCKOperationCallbacksSet;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(id)fetchUserQuotaCompletionBlock;
-(void)setQuotaAvailable:(unsigned long long)arg1 ;
-(unsigned long long)quotaAvailable;
-(void)setFetchUserQuotaCompletionBlock:(id)arg1 ;
-(void)handleOperationDidCompleteWithQuotaAvailable:(unsigned long long)arg1 metrics:(id)arg2 error:(id)arg3 ;
@end

