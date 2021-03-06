/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class UIImage, NSString, UIImageView, UILabel;

@interface VUIAppCell : UICollectionViewCell {

	UIImage* _image;
	NSString* _title;
	BOOL _didLayout;
	UIImageView* _imageView;
	UILabel* _titleLabel;

}
-(void)setTitle:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
@end

