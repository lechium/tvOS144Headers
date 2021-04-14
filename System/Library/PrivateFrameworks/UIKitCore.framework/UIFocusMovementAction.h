/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <BaseBoard/BSAction.h>

@class _UIFocusMovementInfo, _UIFocusInputDeviceInfo;

@interface UIFocusMovementAction : BSAction

@property (nonatomic,readonly) _UIFocusMovementInfo * focusMovementInfo; 
@property (nonatomic,readonly) _UIFocusInputDeviceInfo * inputDeviceInfo; 
@property (nonatomic,readonly) BOOL shouldPerformHapticFeedback; 
@property (nonatomic,readonly) CGRect focusedFrame; 
-(_UIFocusMovementInfo *)focusMovementInfo;
-(long long)UIActionType;
-(BOOL)shouldPerformHapticFeedback;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(id)initWithFocusMovementInfo:(id)arg1 inputDeviceInfo:(id)arg2 shouldPerformHapticFeedback:(BOOL)arg3 focusedFrameInSceneCoordinateSpace:(CGRect)arg4 ;
-(id)initWithFocusMovementInfo:(id)arg1 inputDeviceInfo:(id)arg2 shouldPerformHapticFeedback:(BOOL)arg3 ;
-(id)initWithFocusMovementInfo:(id)arg1 ;
-(CGRect)focusedFrame;
@end

