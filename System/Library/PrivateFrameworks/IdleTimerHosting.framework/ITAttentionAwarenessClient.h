/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IdleTimerHosting.framework/IdleTimerHosting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ITAttentionAwarenessClientDelegate;
#import <IdleTimerHosting/IdleTimerHosting-Structs.h>
@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration;

@interface ITAttentionAwarenessClient : NSObject {

	os_unfair_lock_s _accessLock;
	BOOL _access_enabled;
	AWAttentionAwarenessClient* _access_attentionAwarenessClient;
	id<ITAttentionAwarenessClientDelegate> _delegate;

}

@property (nonatomic,retain) AWAttentionAwarenessClient * _access_attentionAwarenessClient;              //@synthesize access_attentionAwarenessClient=_access_attentionAwarenessClient - In the implementation block
@property (assign,nonatomic,__weak) id<ITAttentionAwarenessClientDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AWAttentionAwarenessConfiguration * configuration; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                              //@synthesize access_enabled=_access_enabled - In the implementation block
-(id)init;
-(id<ITAttentionAwarenessClientDelegate>)delegate;
-(void)setDelegate:(id<ITAttentionAwarenessClientDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(AWAttentionAwarenessConfiguration *)configuration;
-(void)setConfiguration:(AWAttentionAwarenessConfiguration *)arg1 ;
-(BOOL)isEnabled;
-(id)initWithCalloutQueue:(id)arg1 ;
-(void)setConfiguration:(id)arg1 shouldReset:(BOOL)arg2 ;
-(id)_initWithCalloutQueue:(id)arg1 attentionAwarenessClient:(id)arg2 ;
-(void)_handleAttentionAwarenessEvent:(id)arg1 ;
-(void)_access_resume;
-(void)_access_suspend;
-(AWAttentionAwarenessClient *)_access_attentionAwarenessClient;
-(void)set_access_attentionAwarenessClient:(AWAttentionAwarenessClient *)arg1 ;
@end

