/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HBUITopShelfParadeBackgroundViewControllerDelegate.h>
#import <libobjc.A.dylib/HBUITopShelfParadeContentViewControllerDelegate.h>

@protocol HBUITopShelfParadeBackgroundViewController, HBUITopShelfParadeContentViewController, HBUITopShelfParadeContentCoordinatorDelegate, HBUITopShelfParadeItem;
@class UIViewController, UIView, UIImageView, HBUITopShelfParadeStandardTitleView, HBUITopShelfImageView, HBUITopShelfParadePromotionTitleView, HBUITopShelfParadeMusicTitleView, HBUITopShelfParadePhotosTitleView, NSString;

@interface HBUITopShelfParadeContentCoordinator : NSObject <HBUITopShelfParadeBackgroundViewControllerDelegate, HBUITopShelfParadeContentViewControllerDelegate> {

	BOOL _contentHidden;
	BOOL _standardTitleHidden;
	unsigned long long _contentOptions;
	UIViewController*<HBUITopShelfParadeBackgroundViewController> _backgroundViewController;
	UIViewController*<HBUITopShelfParadeContentViewController> _contentViewController;
	UIView* _backgroundContainerView;
	UIView* _contentContainerView;
	id<HBUITopShelfParadeContentCoordinatorDelegate> _delegate;
	id<HBUITopShelfParadeItem> _paradeItem;
	UIImageView* _standardTitleGradientView;
	UIImageView* _contentGradientView;
	UIImageView* _photosGradientView;
	HBUITopShelfParadeStandardTitleView* _standardTitleView;
	HBUITopShelfImageView* _standardTitleImageView;
	HBUITopShelfParadePromotionTitleView* _promotionTitleView;
	HBUITopShelfParadeMusicTitleView* _musicTitleView;
	HBUITopShelfParadePhotosTitleView* _photosTitleView;

}

@property (nonatomic,readonly) UIImageView * standardTitleGradientView;                                                             //@synthesize standardTitleGradientView=_standardTitleGradientView - In the implementation block
@property (nonatomic,readonly) UIImageView * contentGradientView;                                                                   //@synthesize contentGradientView=_contentGradientView - In the implementation block
@property (nonatomic,readonly) UIImageView * photosGradientView;                                                                    //@synthesize photosGradientView=_photosGradientView - In the implementation block
@property (nonatomic,readonly) HBUITopShelfParadeStandardTitleView * standardTitleView;                                             //@synthesize standardTitleView=_standardTitleView - In the implementation block
@property (nonatomic,readonly) HBUITopShelfImageView * standardTitleImageView;                                                      //@synthesize standardTitleImageView=_standardTitleImageView - In the implementation block
@property (nonatomic,readonly) HBUITopShelfParadePromotionTitleView * promotionTitleView;                                           //@synthesize promotionTitleView=_promotionTitleView - In the implementation block
@property (nonatomic,readonly) HBUITopShelfParadeMusicTitleView * musicTitleView;                                                   //@synthesize musicTitleView=_musicTitleView - In the implementation block
@property (nonatomic,readonly) HBUITopShelfParadePhotosTitleView * photosTitleView;                                                 //@synthesize photosTitleView=_photosTitleView - In the implementation block
@property (nonatomic,readonly) unsigned long long contentOptions;                                                                   //@synthesize contentOptions=_contentOptions - In the implementation block
@property (nonatomic,readonly) UIViewController*<HBUITopShelfParadeBackgroundViewController> backgroundViewController;              //@synthesize backgroundViewController=_backgroundViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<HBUITopShelfParadeContentViewController> contentViewController;                    //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) UIView * backgroundContainerView;                                                                    //@synthesize backgroundContainerView=_backgroundContainerView - In the implementation block
@property (nonatomic,readonly) UIView * contentContainerView;                                                                       //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (assign,nonatomic,__weak) id<HBUITopShelfParadeContentCoordinatorDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<HBUITopShelfParadeItem> paradeItem;                                                                 //@synthesize paradeItem=_paradeItem - In the implementation block
@property (assign,getter=isContentHidden,nonatomic) BOOL contentHidden;                                                             //@synthesize contentHidden=_contentHidden - In the implementation block
@property (assign,getter=isStandardTitleHidden,nonatomic) BOOL standardTitleHidden;                                                 //@synthesize standardTitleHidden=_standardTitleHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HBUITopShelfParadeContentCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<HBUITopShelfParadeContentCoordinatorDelegate>)arg1 ;
-(UIViewController*<HBUITopShelfParadeContentViewController>)contentViewController;
-(UIView *)contentContainerView;
-(void)setContentHidden:(BOOL)arg1 ;
-(BOOL)isContentHidden;
-(void)paradeContentViewController:(id)arg1 didSelectAction:(id)arg2 forItem:(id)arg3 ;
-(id<HBUITopShelfParadeItem>)paradeItem;
-(void)setParadeItem:(id<HBUITopShelfParadeItem>)arg1 ;
-(void)_configureContentGradientViewWithImage:(id)arg1 ;
-(void)_updateStandardAndPromotionTitleViewAlpha;
-(void)_updateActionsDetailsViewAlpha;
-(void)_updateStandardTitleView;
-(BOOL)_promotionVideoIsPlaying;
-(void)paradeBackgroundViewControllerContentStateDidChange:(id)arg1 ;
-(void)paradeBackgroundViewControllerDidFinish:(id)arg1 ;
-(id)initWithContentOptions:(unsigned long long)arg1 ;
-(void)setStandardTitleHidden:(BOOL)arg1 ;
-(unsigned long long)contentOptions;
-(UIViewController*<HBUITopShelfParadeBackgroundViewController>)backgroundViewController;
-(UIView *)backgroundContainerView;
-(BOOL)isStandardTitleHidden;
-(UIImageView *)standardTitleGradientView;
-(UIImageView *)contentGradientView;
-(UIImageView *)photosGradientView;
-(HBUITopShelfParadeStandardTitleView *)standardTitleView;
-(HBUITopShelfImageView *)standardTitleImageView;
-(HBUITopShelfParadePromotionTitleView *)promotionTitleView;
-(HBUITopShelfParadeMusicTitleView *)musicTitleView;
-(HBUITopShelfParadePhotosTitleView *)photosTitleView;
@end

