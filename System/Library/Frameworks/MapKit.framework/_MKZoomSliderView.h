/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIView, UIImageView;

@interface _MKZoomSliderView : UIView {

	NSLayoutConstraint* _knobCenterYConstraint;
	UIView* _knob;
	double _zoomFraction;
	BOOL _active;
	UIImageView* _shadowImageView;
	double _lastTrackShadowImageScale;

}

@property (assign,nonatomic) double zoomFraction;                      //@synthesize zoomFraction=_zoomFraction - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(void)setZoomFraction:(double)arg1 ;
-(double)zoomFraction;
@end
