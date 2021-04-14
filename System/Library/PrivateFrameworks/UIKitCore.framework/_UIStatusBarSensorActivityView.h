/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UIView, UIAccessibilityHUDItem, NSString;

@interface _UIStatusBarSensorActivityView : UIView <_UIStatusBarDisplayable> {

	UIView* _sensorActivityView;

}

@property (nonatomic,retain) UIView * sensorActivityView;                                            //@synthesize sensorActivityView=_sensorActivityView - In the implementation block
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(UIView *)sensorActivityView;
-(void)setSensorActivityView:(UIView *)arg1 ;
-(void)configureSensorViewWithoutPortalIfNeeded;
-(void)configurePortalViewIfNeeded;
@end

