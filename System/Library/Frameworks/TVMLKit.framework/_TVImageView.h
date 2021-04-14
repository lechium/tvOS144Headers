/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, UIColor, CAFilter, TVImageProxy, UIImageSymbolConfiguration;

@interface _TVImageView : UIView {

	BOOL _rendersImageAsTemplates;
	UIImage* _image;
	UIImageView* _imageView;
	UIColor* __focusedColor;
	long long _imageContentMode;
	UIImage* _flatImage;
	UIImage* _flatHighlightImage;
	BOOL _selected;
	double _cornerRadius;
	BOOL _continuousCorners;
	CAFilter* _highlightFilter;
	BOOL _imageContainsCornerRadius;
	BOOL _imageLoaded;
	BOOL __enableEdgeAntialiasingOnSelected;
	UIImage* _placeholderImage;
	TVImageProxy* _imageProxy;
	/*^block*/id _dynamicProxyProvider;
	/*^block*/id _completion;
	UIColor* __tintColor;
	UIColor* __darkTintColor;
	UIImageSymbolConfiguration* _preferredSymbolConfiguration;

}

@property (nonatomic,copy) id completion;                                                                                                     //@synthesize completion=_completion - In the implementation block
@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;                                                                           //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                                                                      //@synthesize _tintColor=__tintColor - In the implementation block
@property (setter=_setDarkTintColor:,nonatomic,retain) UIColor * _darkTintColor;                                                              //@synthesize _darkTintColor=__darkTintColor - In the implementation block
@property (setter=_setFocusedColor:,nonatomic,retain) UIColor * _focusedColor;                                                                //@synthesize _focusedColor=__focusedColor - In the implementation block
@property (assign,setter=_setEnableEdgeAntialiasingOnSelected:,nonatomic) BOOL _enableEdgeAntialiasingOnSelected;                             //@synthesize _enableEdgeAntialiasingOnSelected=__enableEdgeAntialiasingOnSelected - In the implementation block
@property (setter=_setPreferredSymbolConfiguration:,nonatomic,retain) UIImageSymbolConfiguration * preferredSymbolConfiguration;              //@synthesize preferredSymbolConfiguration=_preferredSymbolConfiguration - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * placeholderImage;                                                                                      //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) BOOL imageContainsCornerRadius;                                                                                  //@synthesize imageContainsCornerRadius=_imageContainsCornerRadius - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                                                                                       //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,copy) id dynamicProxyProvider;                                                                                           //@synthesize dynamicProxyProvider=_dynamicProxyProvider - In the implementation block
-(void)dealloc;
-(id)completion;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(long long)contentMode;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_setImage:(id)arg1 ;
-(UIColor *)_tintColor;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(double)_cornerRadius;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setContentMode:(long long)arg1 ;
-(BOOL)isImageLoaded;
-(id)_imageView;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_updateImageView;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_updateTintColor;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_continuousCornerRadius;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(void)_updateCornerRadius;
-(void)setImageContainsCornerRadius:(BOOL)arg1 ;
-(void)_setTintColor:(id)arg1 ;
-(void)_setDarkTintColor:(id)arg1 ;
-(void)_setFocusedColor:(id)arg1 ;
-(void)_setPreferredSymbolConfiguration:(id)arg1 ;
-(void)_loadImage;
-(void)setImageLoaded:(BOOL)arg1 ;
-(UIColor *)_darkTintColor;
-(void)_reloadImageForLayoutDirectionChange;
-(id)_imageProxyWithSize:(CGSize)arg1 ;
-(void)setImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setContentRectInPixels:(CGRect)arg1 forContentSize:(CGSize)arg2 ;
-(void)_resetContentRect;
-(BOOL)_enableEdgeAntialiasingOnSelected;
-(void)_updateFlatImageWithImage:(id)arg1 ;
-(void)_updateFlatHighlightImage;
-(BOOL)imageContainsCornerRadius;
-(id)dynamicProxyProvider;
-(void)setDynamicProxyProvider:(id)arg1 ;
-(UIColor *)_focusedColor;
-(void)_setEnableEdgeAntialiasingOnSelected:(BOOL)arg1 ;
@end

