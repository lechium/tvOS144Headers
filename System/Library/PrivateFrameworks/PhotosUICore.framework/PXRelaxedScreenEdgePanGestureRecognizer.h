/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>

@interface PXRelaxedScreenEdgePanGestureRecognizer : UIPanGestureRecognizer {

	CGPoint _initialTouchLocation;
	unsigned long long _edges;
	double _minAngleToEdge;
	unsigned long long _trackingEdge;
	UIEdgeInsets _edgeAllowances;

}

@property (assign,nonatomic) unsigned long long trackingEdge;              //@synthesize trackingEdge=_trackingEdge - In the implementation block
@property (assign,nonatomic) unsigned long long edges;                     //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeAllowances;                  //@synthesize edgeAllowances=_edgeAllowances - In the implementation block
@property (assign,nonatomic) double minAngleToEdge;                        //@synthesize minAngleToEdge=_minAngleToEdge - In the implementation block
@property (assign,nonatomic) double minTranslation; 
-(unsigned long long)edges;
-(void)setEdges:(unsigned long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumNumberOfTouches:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfTouches:(unsigned long long)arg1 ;
-(double)minTranslation;
-(void)setMinTranslation:(double)arg1 ;
-(double)translationDistanceInView:(id)arg1 ;
-(UIEdgeInsets)edgeAllowances;
-(void)setEdgeAllowances:(UIEdgeInsets)arg1 ;
-(double)minAngleToEdge;
-(void)setMinAngleToEdge:(double)arg1 ;
-(unsigned long long)trackingEdge;
-(void)setTrackingEdge:(unsigned long long)arg1 ;
@end

