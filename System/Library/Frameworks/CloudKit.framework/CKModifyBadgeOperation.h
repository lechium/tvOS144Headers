/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKOperation.h>

@class CKModifyBadgeOperationInfo;

@interface CKModifyBadgeOperation : CKOperation {

	/*^block*/id _modifyBadgeCompletionBlock;
	unsigned long long _badgeValue;

}

@property (nonatomic,readonly) CKModifyBadgeOperationInfo * operationInfo; 
@property (assign,nonatomic) unsigned long long badgeValue;                             //@synthesize badgeValue=_badgeValue - In the implementation block
@property (nonatomic,copy) id modifyBadgeCompletionBlock;                               //@synthesize modifyBadgeCompletionBlock=_modifyBadgeCompletionBlock - In the implementation block
-(id)init;
-(unsigned long long)badgeValue;
-(void)setBadgeValue:(unsigned long long)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(id)modifyBadgeCompletionBlock;
-(void)setModifyBadgeCompletionBlock:(id)arg1 ;
-(id)initWithBadgeValue:(unsigned long long)arg1 ;
@end

