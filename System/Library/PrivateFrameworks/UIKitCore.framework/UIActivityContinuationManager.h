/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSUserActivityDelegate.h>

@protocol UIActivityContinuationManagerApplicationContext;
@class NSString, NSProgress;

@interface UIActivityContinuationManager : NSObject <NSUserActivityDelegate> {

	id<UIActivityContinuationManagerApplicationContext> _context;
	NSString* _currentActivityContinuationType;
	NSString* _currentActivityContinuationUUIDString;
	NSProgress* _currentActivityContinuationProgress;

}

@property (setter=_setCurrentActivityContinuationType:,getter=_currentActivityContinuationType,nonatomic,copy) NSString * currentActivityContinuationType;                                //@synthesize currentActivityContinuationType=_currentActivityContinuationType - In the implementation block
@property (setter=_setCurrentActivityContinuationUUIDString:,getter=_currentActivityContinuationUUIDString,nonatomic,copy) NSString * currentActivityContinuationUUIDString;              //@synthesize currentActivityContinuationUUIDString=_currentActivityContinuationUUIDString - In the implementation block
@property (setter=_setCurrentActivityContinuationProgress:,getter=_currentActivityContinuationProgress,nonatomic,retain) NSProgress * currentActivityContinuationProgress;                //@synthesize currentActivityContinuationProgress=_currentActivityContinuationProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)userActivityWillSave:(id)arg1 ;
-(id)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithApplicationContext:(id)arg1 ;
-(BOOL)activityContinuationsAreBeingTracked;
-(id)activityContinuationDictionaryWithAction:(id)arg1 sourceApplication:(id)arg2 ;
-(void)handleActivityContinuation:(id)arg1 isSuspended:(BOOL)arg2 ;
-(id)activityContinuationDictionaryWithAction:(id)arg1 ;
-(void)addResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3 ;
-(void)removeResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3 ;
-(void)_clearCurrentActivityContinuationCancelingProgress:(BOOL)arg1 ;
-(void)_didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2 ;
-(void)_setCurrentActivityContinuationType:(id)arg1 ;
-(void)_setCurrentActivityContinuationUUIDString:(id)arg1 ;
-(void)_setCurrentActivityContinuationProgress:(id)arg1 ;
-(BOOL)_delegateHandledContinueActivityWithType:(id)arg1 ;
-(void)_hideCurrentActivityContinuationProgressUI;
-(void)_displayCurrentActivityContinuationProgressUI;
-(BOOL)_continueUserActivity:(id)arg1 ;
-(void)_endCurrentActivityContinuationWithCompletion:(/*^block*/id)arg1 ;
-(void)_endCurrentActivityContinuationAndDisplayError:(id)arg1 ;
-(void)_userActivityWillSave:(id)arg1 ;
-(void)_cleanupUserActivity:(id)arg1 activityIdentifier:(id)arg2 ;
-(id)_currentActivityContinuationType;
-(id)_currentActivityContinuationUUIDString;
-(id)_currentActivityContinuationProgress;
@end

