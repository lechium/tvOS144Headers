/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UITargetedProxy.h>
#import <UIKitCore/_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface.h>

@class _UIViewAnimationAttributes, NSString;

@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface> {

	SEL _implicitAnimationSelector;
	_UIViewAnimationAttributes* _animationAttributes;
	BOOL _animationsEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyDecodingAnimationsForTarget:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2 animationsEnabled:(BOOL)arg3 ;
@end
