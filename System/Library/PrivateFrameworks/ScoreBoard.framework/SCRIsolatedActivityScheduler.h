/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <ScoreBoard/SCRActivityScheduler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SCRIsolatedActivityScheduler : SCRActivityScheduler {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSMutableDictionary* _lock_timerForTask;

}
-(id)description;
-(void)dealloc;
-(void)submitActivity:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)cancelActivityWithIdentifier:(id)arg1 ;
-(void)_timerFiredForActivity:(id)arg1 ;
-(void)completeActivityWithIdentifier:(id)arg1 ;
@end

