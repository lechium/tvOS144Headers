/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableFooterView.h>

@class SiriUIKeyline, SiriUIContentButton;

@interface SiriUITwoButtonFooterView : SiriUIReusableFooterView {

	SiriUIKeyline* _verticalKeyline;
	SiriUIKeyline* _horizontalKeyline;
	SiriUIContentButton* _leftButton;
	SiriUIContentButton* _rightButton;

}

@property (nonatomic,readonly) SiriUIContentButton * leftButton;               //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) SiriUIContentButton * rightButton;              //@synthesize rightButton=_rightButton - In the implementation block
+(double)defaultHeight;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SiriUIContentButton *)leftButton;
-(SiriUIContentButton *)rightButton;
@end

