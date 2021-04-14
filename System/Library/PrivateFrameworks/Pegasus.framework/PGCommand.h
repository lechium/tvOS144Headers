/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface PGCommand : NSObject {

	NSDictionary* _dictionaryRepresentation;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation;              //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
@property (nonatomic,readonly) long long systemAction; 
@property (nonatomic,readonly) long long faceTimeAction; 
@property (nonatomic,readonly) long long playbackAction; 
@property (nonatomic,readonly) BOOL associatedBoolValue; 
@property (nonatomic,readonly) double associatedDoubleValue; 
+(id)commandForPlaybackAction:(long long)arg1 associatedBoolValue:(BOOL)arg2 ;
+(id)commandForPlaybackAction:(long long)arg1 ;
+(id)commandForPlaybackAction:(long long)arg1 associatedDoubleValue:(double)arg2 ;
+(id)commandForSystemAction:(long long)arg1 ;
+(id)commandForFaceTimeAction:(long long)arg1 associatedBoolValue:(BOOL)arg2 ;
+(id)commandForFaceTimeAction:(long long)arg1 ;
+(id)commandForSetMuted:(BOOL)arg1 ;
+(id)commandForSetPlaying:(BOOL)arg1 ;
+(id)commandForSetSuspended:(BOOL)arg1 ;
+(id)commandForBeginInterruption;
+(id)commandForEndInterruptionWithShouldResumeSuggestion:(BOOL)arg1 ;
+(id)commandForSkipToLive;
+(id)commandForSkipPreroll;
+(id)commandForSkipByInterval:(double)arg1 ;
+(id)commandForCancelPIP;
+(id)commandForRestoreFromPIP;
+(id)commandForToggleControlsVisibility;
+(id)commandForSendActionButtonTapped;
+(id)commandForToggleZoom;
+(id)commandForSetCameraEnabled:(BOOL)arg1 ;
+(id)commandForSetMicrophoneMuted:(BOOL)arg1 ;
+(id)commandForSwitchCamera;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(long long)faceTimeAction;
-(void)appendDescriptionForKey:(long long)arg1 value:(id)arg2 toBuilder:(id)arg3 ;
-(long long)playbackAction;
-(long long)systemAction;
-(BOOL)associatedBoolValue;
-(double)associatedDoubleValue;
@end

