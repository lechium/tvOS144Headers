/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemMenuUI/TVSMBaseViewController.h>

@class UIImage, NSString, UIColor, TVSMProgressView, TVSMCAPackageView;

@interface TVSMButtonViewController : TVSMBaseViewController {

	BOOL _toggledOn;
	UIImage* _image;
	NSString* _imageSymbolName;
	NSString* _titleText;
	NSString* _secondaryText;
	UIColor* _titleTintColor;
	UIColor* _subtitleTintColor;
	UIColor* _symbolTintColor;
	TVSMProgressView* _progressView;
	TVSMCAPackageView* _caPackageView;

}

@property (nonatomic,copy) UIColor * titleTintColor;                       //@synthesize titleTintColor=_titleTintColor - In the implementation block
@property (nonatomic,copy) UIColor * subtitleTintColor;                    //@synthesize subtitleTintColor=_subtitleTintColor - In the implementation block
@property (nonatomic,copy) UIColor * symbolTintColor;                      //@synthesize symbolTintColor=_symbolTintColor - In the implementation block
@property (nonatomic,retain) TVSMProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,copy) TVSMCAPackageView * caPackageView;              //@synthesize caPackageView=_caPackageView - In the implementation block
@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * imageSymbolName;                     //@synthesize imageSymbolName=_imageSymbolName - In the implementation block
@property (nonatomic,copy) NSString * titleText;                           //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                       //@synthesize secondaryText=_secondaryText - In the implementation block
@property (assign,nonatomic) BOOL toggledOn;                               //@synthesize toggledOn=_toggledOn - In the implementation block
+(Class)contentViewClass;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)loadView;
-(id)buttonView;
-(void)_buttonPressed:(id)arg1 ;
-(TVSMProgressView *)progressView;
-(void)setProgressView:(TVSMProgressView *)arg1 ;
-(NSString *)imageSymbolName;
-(void)setImageSymbolName:(NSString *)arg1 ;
-(BOOL)toggledOn;
-(void)setCaPackageView:(TVSMCAPackageView *)arg1 ;
-(void)setTitleTintColor:(UIColor *)arg1 ;
-(void)setSubtitleTintColor:(UIColor *)arg1 ;
-(void)setSymbolTintColor:(UIColor *)arg1 ;
-(void)setToggledOn:(BOOL)arg1 ;
-(TVSMCAPackageView *)caPackageView;
-(UIColor *)titleTintColor;
-(UIColor *)subtitleTintColor;
-(UIColor *)symbolTintColor;
@end

