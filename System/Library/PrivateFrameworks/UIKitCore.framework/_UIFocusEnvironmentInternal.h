/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIFocusEnvironmentInternal <_UIFocusEnvironmentPrivate>
@property (getter=_focusMapContainer,nonatomic,__weak,readonly) id<_UIFocusRegionContainer> focusMapContainer; 
@optional
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(id)_overridingPreferredFocusEnvironment;
-(void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(BOOL)_shouldUpdateFocusInContext:(id)arg1;
-(id)_primaryFocusItemForFocusGroup:(id)arg1;
-(id)_focusMapContainer;

@end

