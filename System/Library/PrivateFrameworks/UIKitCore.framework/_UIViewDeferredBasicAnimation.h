/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIViewDeferredAnimation.h>

@class _UIViewAnimationFrame;

@interface _UIViewDeferredBasicAnimation : _UIViewDeferredAnimation {

	_UIViewAnimationFrame* _finalValue;

}
-(BOOL)isEmpty;
-(void)animateFrameAtIndex:(long long)arg1 animations:(/*^block*/id)arg2 ;
-(void)addAnimationFrameForValue:(id)arg1 ;
-(id)_animationFrames;
-(void)_enumerateAnimationFramesForKeyframes:(/*^block*/id)arg1 ;
@end
