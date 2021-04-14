/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, SiriTVUITemplateLabel, UIImage, NSAttributedString;

@interface SiriTVUITabularDataRowCellTextItemView : UIView {

	UIImageView* _imageView;
	SiriTVUITemplateLabel* _textLabel;
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGSize imageSize;                               //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText; 
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)imageSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)layoutSubviews;
-(void)setImageSize:(CGSize)arg1 ;
@end
