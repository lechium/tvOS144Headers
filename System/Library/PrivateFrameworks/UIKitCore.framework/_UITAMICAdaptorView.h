/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIGeometryChangeObserver.h>

@class UIView, NSLayoutConstraint, UILayoutGuide, NSString;

@interface _UITAMICAdaptorView : UIView <_UIGeometryChangeObserver> {

	UIView* _view;
	NSLayoutConstraint* _width;
	NSLayoutConstraint* _height;
	CGSize _layoutSize;
	BOOL _inLayout;
	float _sizingPriority;
	UILayoutGuide* _sizingLayoutGuide;

}

@property (nonatomic,readonly) UIView * view;                                //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) float sizingPriority;                           //@synthesize sizingPriority=_sizingPriority - In the implementation block
@property (nonatomic,retain) UILayoutGuide * sizingLayoutGuide;              //@synthesize sizingLayoutGuide=_sizingLayoutGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldWrapView:(id)arg1 ;
-(UIView *)view;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(id)initWithView:(id)arg1 ;
-(void)_geometryChanged:(const SCD_Struct_UI23*)arg1 forAncestor:(id)arg2 ;
-(void)updateForAvailableSize;
-(void)setSizingLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setSizingPriority:(float)arg1 ;
-(float)sizingPriority;
-(UILayoutGuide *)sizingLayoutGuide;
@end

