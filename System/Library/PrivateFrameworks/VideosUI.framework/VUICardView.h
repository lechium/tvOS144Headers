/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUICardViewLayoutFactory, UIView, NSArray, NSString;

@interface VUICardView : UIView {

	VUICardViewLayoutFactory* _layoutFactory;
	/*^block*/id _imageSize;
	UIView* _imageView;
	UIView* _appImageView;
	NSArray* _labelViews;
	UIView* _overlayView;
	UIView* _button;
	NSString* _debugString;

}

@property (nonatomic,readonly) VUICardViewLayoutFactory * layoutFactory;              //@synthesize layoutFactory=_layoutFactory - In the implementation block
@property (nonatomic,copy) id imageSize;                                              //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) UIView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * appImageView;                                   //@synthesize appImageView=_appImageView - In the implementation block
@property (nonatomic,copy) NSArray * labelViews;                                      //@synthesize labelViews=_labelViews - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                    //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * button;                                         //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) NSString * debugString;                                    //@synthesize debugString=_debugString - In the implementation block
-(void)dealloc;
-(UIView *)button;
-(void)setButton:(UIView *)arg1 ;
-(id)imageSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)debugString;
-(void)setDebugString:(NSString *)arg1 ;
-(UIView *)imageView;
-(void)layoutSubviews;
-(void)setImageSize:(id)arg1 ;
-(void)setImageView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(NSArray *)labelViews;
-(void)setLabelViews:(NSArray *)arg1 ;
-(void)prepareForCellReuse;
-(VUICardViewLayoutFactory *)layoutFactory;
-(void)_mainImageLoaded;
-(double)_maxTextWidthForImagePosition:(long long)arg1 width:(double)arg2 appImageLayout:(id)arg3 textLayout:(id)arg4 ;
-(id)_mainImage;
-(id)initWithFrame:(CGRect)arg1 layoutFactory:(id)arg2 ;
-(void)setAppImageView:(UIView *)arg1 ;
-(UIView *)appImageView;
@end

