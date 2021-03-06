/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSSet;

@interface _UITouchesObservingGestureRecognizer : UIGestureRecognizer {

	NSSet* _touches;

}

@property (nonatomic,copy) NSSet * touches;              //@synthesize touches=_touches - In the implementation block
+(BOOL)_shouldDefaultToTouches;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(NSSet *)touches;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(BOOL)_wantsPartialTouchSequences;
-(void)setTouches:(NSSet *)arg1 ;
-(void)_updateTouchesFromEvent:(id)arg1 ;
-(BOOL)_allTouchesAreEndedOrCancelled:(id)arg1 ;
@end

