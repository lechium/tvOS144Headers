/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMotionEffectEventProvider.h>
#import <UIKitCore/_UIFocusEffectsObserver.h>

@class NSString;

@interface _UIMotionEffectFocusEventProvider : _UIMotionEffectEventProvider <_UIFocusEffectsObserver> {

	BOOL _isGeneratingEvents;
	CGPoint _focusPosition;
	CGPoint _lastReportedPosition;

}

@property (assign,nonatomic) CGPoint focusPosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(id)init;
-(id)currentEvent;
-(CGPoint)focusPosition;
-(void)focusEffectsController:(id)arg1 updateMovementDirection:(CGVector)arg2 ;
-(void)startGeneratingEvents;
-(void)stopGeneratingEvents;
-(BOOL)wantsSynchronizedUpdates;
-(void)setFocusPosition:(CGPoint)arg1 ;
@end

