/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel;

@interface _TVLTextEntryContentView : UIView {

	UIView* _textEntryView;
	UILabel* _footnoteLabel;

}

@property (nonatomic,retain) UIView * textEntryView;                 //@synthesize textEntryView=_textEntryView - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteLabel;              //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)footnoteLabel;
-(UIView *)textEntryView;
-(void)setTextEntryView:(UIView *)arg1 ;
@end

