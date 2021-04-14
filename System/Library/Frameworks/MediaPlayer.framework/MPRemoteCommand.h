/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>

@protocol OS_dispatch_queue, MPRemoteCommandDelegate_Internal, MPRemoteCommandDelegate_Private;
@class NSObject, NSMutableDictionary, NSString;

@interface MPRemoteCommand : NSObject <_MPStateDumpPropertyListTransformable> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _handlers;
	BOOL _enabled;
	BOOL _observing;
	BOOL _skipSerializedEventDelivery;
	unsigned _mediaRemoteCommandType;
	id<MPRemoteCommandDelegate_Internal> _commandCenterDelegate;
	id<MPRemoteCommandDelegate_Private> _delegate;

}

@property (assign,nonatomic,__weak) id<MPRemoteCommandDelegate_Internal> commandCenterDelegate;              //@synthesize commandCenterDelegate=_commandCenterDelegate - In the implementation block
@property (assign,getter=isObserving,nonatomic) BOOL observing;                                              //@synthesize observing=_observing - In the implementation block
@property (nonatomic,readonly) BOOL hasTargets; 
@property (getter=isSupported,nonatomic,readonly) BOOL supported; 
@property (getter=isSupportedAndEnabled,nonatomic,readonly) BOOL supportedAndEnabled; 
@property (nonatomic,readonly) unsigned mediaRemoteCommandType;                                              //@synthesize mediaRemoteCommandType=_mediaRemoteCommandType - In the implementation block
@property (assign,nonatomic,__weak) id<MPRemoteCommandDelegate_Private> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL skipSerializedEventDelivery;                                               //@synthesize skipSerializedEventDelivery=_skipSerializedEventDelivery - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<MPRemoteCommandDelegate_Private>)delegate;
-(void)setDelegate:(id<MPRemoteCommandDelegate_Private>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isSupported;
-(id)addTargetWithHandler:(/*^block*/id)arg1 ;
-(void)removeTarget:(id)arg1 ;
-(void)setObserving:(BOOL)arg1 ;
-(BOOL)isObserving;
-(BOOL)isSupportedAndEnabled;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(id)_stateDumpObject;
-(unsigned)mediaRemoteCommandType;
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
-(BOOL)isSupportedForContentItemIdentifier:(id)arg1 ;
-(BOOL)isEnabledForContentItemIdentifier:(id)arg1 ;
-(BOOL)hasTargets;
-(void)invokeCommandWithEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void*)createCommandInfoRepresentation;
-(void)notifyPropagatablePropertyChanged;
-(id)newCommandEvent;
-(id)newCommandEventWithContentItemIdentifier:(id)arg1 ;
-(id)newCommandEventWithPlaybackQueueOffset:(long long)arg1 ;
-(id)newCommandEventWithCommandType:(unsigned)arg1 options:(id)arg2 ;
-(id)newSeekCommandEventWithType:(unsigned long long)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(id<MPRemoteCommandDelegate_Internal>)commandCenterDelegate;
-(void)setCommandCenterDelegate:(id<MPRemoteCommandDelegate_Internal>)arg1 ;
-(BOOL)skipSerializedEventDelivery;
-(void)setSkipSerializedEventDelivery:(BOOL)arg1 ;
@end

