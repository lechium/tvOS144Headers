/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface _TVPlayerResumeMenuView : UIView {

	UIButton* _resumeButton;
	UIButton* _startFromBeginningButton;

}

@property (nonatomic,__weak,readonly) UIButton * resumeButton;                          //@synthesize resumeButton=_resumeButton - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * startFromBeginningButton;              //@synthesize startFromBeginningButton=_startFromBeginningButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIButton *)resumeButton;
-(UIButton *)startFromBeginningButton;
@end

