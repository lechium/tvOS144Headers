/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@protocol PXTouchingUIGestureRecognizerDelegate;
@interface PXTouchingUIGestureRecognizer : UIGestureRecognizer {

	BOOL __willBegin;
	BOOL __didBegin;
	double _minimumTouchDuration;
	double _maximumTouchMovement;
	id<PXTouchingUIGestureRecognizerDelegate> _touchDelegate;
	unsigned long long __touchCount;
	unsigned long long __beginRequestID;
	CGPoint __initialPointInView;

}

@property (assign,setter=_setTouchCount:,nonatomic) unsigned long long _touchCount;                       //@synthesize _touchCount=__touchCount - In the implementation block
@property (assign,setter=_setBeginRequestID:,nonatomic) unsigned long long _beginRequestID;               //@synthesize _beginRequestID=__beginRequestID - In the implementation block
@property (assign,setter=_setWillBegin:,nonatomic) BOOL _willBegin;                                       //@synthesize _willBegin=__willBegin - In the implementation block
@property (assign,setter=_setDidBegin:,nonatomic) BOOL _didBegin;                                         //@synthesize _didBegin=__didBegin - In the implementation block
@property (assign,setter=_setInitialPointInView:,nonatomic) CGPoint _initialPointInView;                  //@synthesize _initialPointInView=__initialPointInView - In the implementation block
@property (assign,nonatomic) double minimumTouchDuration;                                                 //@synthesize minimumTouchDuration=_minimumTouchDuration - In the implementation block
@property (assign,nonatomic) double maximumTouchMovement;                                                 //@synthesize maximumTouchMovement=_maximumTouchMovement - In the implementation block
@property (assign,nonatomic,__weak) id<PXTouchingUIGestureRecognizerDelegate> touchDelegate;              //@synthesize touchDelegate=_touchDelegate - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(BOOL)_willBegin;
-(BOOL)_didBegin;
-(unsigned long long)_touchCount;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)initialLocationInView:(id)arg1 ;
-(void)_incrementTouchesBy:(unsigned long long)arg1 ;
-(void)_decrementTouchesBy:(unsigned long long)arg1 ;
-(void)_setTouchCount:(unsigned long long)arg1 ;
-(void)_beginWithRequestID:(unsigned long long)arg1 ;
-(void)_setWillBegin:(BOOL)arg1 ;
-(void)_setDidBegin:(BOOL)arg1 ;
-(double)minimumTouchDuration;
-(void)setMinimumTouchDuration:(double)arg1 ;
-(double)maximumTouchMovement;
-(void)setMaximumTouchMovement:(double)arg1 ;
-(id<PXTouchingUIGestureRecognizerDelegate>)touchDelegate;
-(void)setTouchDelegate:(id<PXTouchingUIGestureRecognizerDelegate>)arg1 ;
-(unsigned long long)_beginRequestID;
-(void)_setBeginRequestID:(unsigned long long)arg1 ;
-(CGPoint)_initialPointInView;
-(void)_setInitialPointInView:(CGPoint)arg1 ;
@end

