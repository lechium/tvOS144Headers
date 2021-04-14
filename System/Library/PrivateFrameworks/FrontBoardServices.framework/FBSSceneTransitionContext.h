/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class FBSceneUpdateContext, FBWatchdogTransitionContext, BSAnimationSettings, BKSAnimationFenceHandle, NSSet, BSProcessHandle, BSMutableSettings, NSString;

@interface FBSSceneTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying> {

	FBSceneUpdateContext* _updateContext;
	FBWatchdogTransitionContext* _watchdogTransitionContext;
	BOOL _allowCPUThrottling;
	BSAnimationSettings* _animationSettings;
	BKSAnimationFenceHandle* _animationFence;
	NSSet* _actions;
	BSProcessHandle* _originatingProcess;
	BSMutableSettings* _otherSettings;
	BSMutableSettings* _transientLocalClientSettings;

}

@property (nonatomic,retain) FBSceneUpdateContext * updateContext; 
@property (nonatomic,retain) FBWatchdogTransitionContext * watchdogTransitionContext; 
@property (nonatomic,copy) BSAnimationSettings * animationSettings;                                //@synthesize animationSettings=_animationSettings - In the implementation block
@property (nonatomic,retain) BKSAnimationFenceHandle * animationFence;                             //@synthesize animationFence=_animationFence - In the implementation block
@property (nonatomic,copy) NSSet * actions;                                                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) BSProcessHandle * originatingProcess;                                 //@synthesize originatingProcess=_originatingProcess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionContext;
-(BOOL)isUISubclass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(BOOL)_isEmpty;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5 ;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2 ;
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(BOOL)appendDescriptionToBuilder:(id)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(id)otherSettings;
-(id)transientLocalClientSettings;
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(BKSAnimationFenceHandle *)animationFence;
-(void)setAnimationFence:(BKSAnimationFenceHandle *)arg1 ;
-(NSSet *)actions;
-(void)setActions:(NSSet *)arg1 ;
-(BSProcessHandle *)originatingProcess;
-(void)setOriginatingProcess:(BSProcessHandle *)arg1 ;
@end

