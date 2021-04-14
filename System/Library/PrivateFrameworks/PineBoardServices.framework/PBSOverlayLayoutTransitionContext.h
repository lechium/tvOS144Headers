/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BSAnimationSettings, BKSAnimationFenceHandle, NSString;

@interface PBSOverlayLayoutTransitionContext : NSObject <BSDescriptionProviding, NSSecureCoding> {

	BSAnimationSettings* _animationSettings;
	BKSAnimationFenceHandle* _animationFence;

}

@property (nonatomic,copy) BSAnimationSettings * animationSettings;                 //@synthesize animationSettings=_animationSettings - In the implementation block
@property (nonatomic,retain) BKSAnimationFenceHandle * animationFence;              //@synthesize animationFence=_animationFence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)transitionContextWithAnimationSettings:(id)arg1 animationFence:(id)arg2 ;
+(void)tryAnimatingWithContext:(id)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(BKSAnimationFenceHandle *)animationFence;
-(void)setAnimationFence:(BKSAnimationFenceHandle *)arg1 ;
@end

