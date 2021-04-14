/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKDiscoveryCardViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>
#import <libobjc.A.dylib/PKPGSVSectionSubheaderView.h>

@protocol PKPGSVSectionSubheaderDelegate;
@class NSMutableArray, NSArray, PKDiscoveryCardView, UIScrollView, UIPageControl, UIImage, NSString, PKDiscoveryDataSource;

@interface PKDiscoveryGalleryView : UIView <PKDiscoveryCardViewDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPGSVSectionSubheaderView> {

	NSMutableArray* _cardViews;
	NSArray* _displayedCardViews;
	NSMutableArray* _discoveryCardViews;
	id<PKPGSVSectionSubheaderDelegate> _subheaderDelegate;
	PKDiscoveryCardView* _passWelcomeView;
	PKDiscoveryCardView* _paymentWelcomeView;
	UIScrollView* _horizontalScrollView;
	UIPageControl* _pageControl;
	UIImage* _dismissImage;
	BOOL _needsUpdateAsHeaderSubview;
	unsigned long long _pendingDeletes;
	SCD_Struct_PK19 _layoutState;
	BOOL _welcomeCardStateIsDirty;
	NSString* _lastReportedDiscoveryItemIdentifier;
	SCD_Struct_PK5 _foregroundState;
	double _lastTimeForegroundActive;
	BOOL _articleLayoutsUpdatedAfterEnteringForegroundActive;
	BOOL _animatingCard;
	PKDiscoveryCardView* _pressedDiscoveryCardView;
	PKDiscoveryDataSource* _dataSource;

}

@property (nonatomic,__weak,readonly) PKDiscoveryCardView * pressedDiscoveryCardView;              //@synthesize pressedDiscoveryCardView=_pressedDiscoveryCardView - In the implementation block
@property (assign,getter=isAnimatingCard,nonatomic) BOOL animatingCard;                            //@synthesize animatingCard=_animatingCard - In the implementation block
@property (nonatomic,retain) PKDiscoveryDataSource * dataSource;                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)paymentWelcomeCardIsAvailable;
+(BOOL)isVisibileForPKPGSVLayoutState:(SCD_Struct_PK19)arg1 dataSource:(id)arg2 ;
+(id)passWelcomeCardMessageAttributedString;
-(void)dealloc;
-(BOOL)needsUpdate;
-(PKDiscoveryDataSource *)dataSource;
-(void)setDataSource:(PKDiscoveryDataSource *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)_contentSize;
-(void)layoutSubviews;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK5)arg2 ;
-(unsigned long long)displayIndex;
-(void)discoveryCardViewCTATapped:(id)arg1 callToAction:(id)arg2 ;
-(void)_pageControlChanged:(id)arg1 ;
-(void)setSubheaderDelegate:(id)arg1 ;
-(void)updateArticleLayouts:(id)arg1 ;
-(void)updatePageControlFrame;
-(void)updateForPKPGSVLayoutState:(SCD_Struct_PK19)arg1 ;
-(void)_updatePageControlVisibilityWithDelay:(double)arg1 ;
-(void)_updatePageControlWithDisplayIndex;
-(PKDiscoveryCardView *)pressedDiscoveryCardView;
-(id)cardViewForCardWithItemIdentifier:(id)arg1 ;
-(void)setAnimatingCard:(BOOL)arg1 ;
-(BOOL)isAnimatingCard;
-(void)discoveryCardViewTapped:(id)arg1 ;
-(void)discoveryCardViewRemoveTapped:(id)arg1 ;
-(double)_defaultHeight;
-(BOOL)_requestDismissalIfNecessaryAfterLayoutStateUpdate;
-(void)_updateDiscoveryCardViewsForUpdatedArticleLayouts:(id)arg1 overrideFrontmostCardToIdentifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateCardViewsAnimated:(BOOL)arg1 ;
-(unsigned long long)_indexForCardViewWithIdentifier:(id)arg1 ;
-(void)_updateCardViewsAnimated:(BOOL)arg1 overrideFrontmostCardToIdentifier:(id)arg2 ;
-(void)_updateScrollViewToCardIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_reportCurrentDiscoveryCardToDiscoveryService;
-(void)_updateCardViews;
-(id)_createPaymentWelcomeCardView;
-(id)_createPassWelcomeCardView;
-(void)_removeCardView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_appStorePressed;
-(void)_scanCodePressed;
@end

