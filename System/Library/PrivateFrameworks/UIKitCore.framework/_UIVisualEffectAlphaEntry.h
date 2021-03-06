/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@interface _UIVisualEffectAlphaEntry : _UIVisualEffectViewEntry {

	double _initialAlpha;
	double _finalAlpha;

}
-(id)description;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(id)copyForTransitionToEffect:(id)arg1 ;
-(id)copyForTransitionOut;
-(id)initWithInitialAlpha:(double)arg1 finalAlpha:(double)arg2 ;
@end

