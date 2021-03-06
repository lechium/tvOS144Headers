/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface AFUIPasscodeBlurView : UIView {

	UIView* _materialView;
	UIView* _lightenSourceOverView;
	UIView* _plusDView;

}

@property (nonatomic,retain) UIView * materialView;                       //@synthesize materialView=_materialView - In the implementation block
@property (nonatomic,retain) UIView * lightenSourceOverView;              //@synthesize lightenSourceOverView=_lightenSourceOverView - In the implementation block
@property (nonatomic,retain) UIView * plusDView;                          //@synthesize plusDView=_plusDView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)materialView;
-(void)setMaterialView:(UIView *)arg1 ;
-(void)_setPlusDBackgroundColorWithWeighting:(double)arg1 ;
-(UIView *)lightenSourceOverView;
-(void)setLightenSourceOverView:(UIView *)arg1 ;
-(UIView *)plusDView;
-(void)setPlusDView:(UIView *)arg1 ;
@end

