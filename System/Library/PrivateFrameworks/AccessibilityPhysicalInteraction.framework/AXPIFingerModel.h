/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXPIFingerModelDelegate;
#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@interface AXPIFingerModel : NSObject {

	BOOL _pressed;
	BOOL _selected;
	double _force;
	unsigned long long _shape;
	id<AXPIFingerModelDelegate> _delegate;
	CGPoint _location;

}

@property (nonatomic,retain) id<AXPIFingerModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGPoint location;                                  //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double force;                                      //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) unsigned long long shape;                          //@synthesize shape=_shape - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                     //@synthesize pressed=_pressed - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                   //@synthesize selected=_selected - In the implementation block
+(id)fingerModelForLocation:(CGPoint)arg1 ;
-(id)description;
-(id<AXPIFingerModelDelegate>)delegate;
-(void)setDelegate:(id<AXPIFingerModelDelegate>)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(CGPoint)location;
-(unsigned long long)shape;
-(void)setShape:(unsigned long long)arg1 ;
-(void)setLocation:(CGPoint)arg1 ;
-(double)force;
-(void)setForce:(double)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)isPressed;
-(void)setPressed:(BOOL)arg1 sendDelegateCallback:(BOOL)arg2 ;
-(void)updateWithPropertiesFromFingerModel:(id)arg1 ;
@end

