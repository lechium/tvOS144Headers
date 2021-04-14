/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVAppTemplateImpressionable.h>

@class IKViewElement, VUIProductBannerView, NSString;

@interface VUIProductBannerViewController : UIViewController <TVAppTemplateImpressionable> {

	BOOL _shouldAutoHighlight;
	IKViewElement* _viewElement;
	VUIProductBannerView* _bannerView;

}

@property (assign,nonatomic) BOOL shouldAutoHighlight;                       //@synthesize shouldAutoHighlight=_shouldAutoHighlight - In the implementation block
@property (nonatomic,retain) VUIProductBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                    //@synthesize viewElement=_viewElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)preferredFocusEnvironments;
-(IKViewElement *)viewElement;
-(VUIProductBannerView *)bannerView;
-(void)setBannerView:(VUIProductBannerView *)arg1 ;
-(void)tv_setShowcaseConfig:(TVShowcaseConfig)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)_configureViewSubviews;
-(BOOL)shouldAutoHighlight;
-(void)setShouldAutoHighlight:(BOOL)arg1 ;
@end

