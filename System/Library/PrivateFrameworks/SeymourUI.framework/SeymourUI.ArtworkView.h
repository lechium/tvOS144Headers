/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <SeymourUI/SeymourUI.NoIntrinsicImageView.h>

@class UIImage;

@interface SeymourUI.ArtworkView : SeymourUI.NoIntrinsicImageView {

	 completedIconView;
	 iconConstraints;
	 recencyIconView;
	 layoutHandler;
	 shelfArtworkIconSafeAreaInsets;
	 layout;
	 style;

}

@property (retain,nonatomic) UIImage * image; 
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
@end

