/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIActivityContinuationManagerApplicationContext
@required
-(void)activityContinuationManager:(id)arg1 displayProgressUI:(id)arg2 dismissalHandler:(/*^block*/id)arg3;
-(void)activityContinuationManager:(id)arg1 configureProgressUIWithError:(id)arg2;
-(void)activityContinuationManager:(id)arg1 hideProgressUIWithCompletion:(/*^block*/id)arg2;
-(id)activityContinuationManagerUserCancelledError:(id)arg1;
-(BOOL)activityContinuationManagerHandleErrorsByConfiguringProgressUI:(id)arg1;
-(BOOL)activityContinuationManager:(id)arg1 willContinueUserActivityWithType:(id)arg2;
-(BOOL)activityContinuationManager:(id)arg1 continueUserActivity:(id)arg2;
-(void)activityContinuationManager:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
-(void)activityContinuationManager:(id)arg1 didUpdateUserActivity:(id)arg2;

@end

