/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MKPictureItemContainerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKPictureItemContainerDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol _MKInfoCardAnalyticsDelegate, MKAnnotatedItemListViewControllerDelegate;
@class UIViewController, GEOMapItemAttribution, NSString, UIView;

@interface MKAnnotatedItemListViewController : UIViewController <MKPictureItemContainerAnalyticsDelegate, MKPictureItemContainerDelegate, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {

	id<_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
	id<MKAnnotatedItemListViewControllerDelegate> _delegate;
	UIViewController* _annotatedItemListViewController;
	GEOMapItemAttribution* _attribution;
	NSString* _headerTitle;
	UIView* _topHairlineSeparator;
	UIView* _bottomHairlineSeparator;
	double _viewControllerTopPadding;
	double _viewControllerBottomPadding;
	double _headerTopPadding;

}

@property (nonatomic,readonly) UIViewController * annotatedItemListViewController;                       //@synthesize annotatedItemListViewController=_annotatedItemListViewController - In the implementation block
@property (nonatomic,readonly) GEOMapItemAttribution * attribution;                                      //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerTitle;                                              //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,readonly) UIView * topHairlineSeparator;                                            //@synthesize topHairlineSeparator=_topHairlineSeparator - In the implementation block
@property (nonatomic,readonly) UIView * bottomHairlineSeparator;                                         //@synthesize bottomHairlineSeparator=_bottomHairlineSeparator - In the implementation block
@property (nonatomic,readonly) double viewControllerTopPadding;                                          //@synthesize viewControllerTopPadding=_viewControllerTopPadding - In the implementation block
@property (nonatomic,readonly) double viewControllerBottomPadding;                                       //@synthesize viewControllerBottomPadding=_viewControllerBottomPadding - In the implementation block
@property (nonatomic,readonly) double headerTopPadding;                                                  //@synthesize headerTopPadding=_headerTopPadding - In the implementation block
@property (assign,getter=isTopSeparatorHidden,nonatomic) BOOL topSeparatorHidden; 
@property (assign,getter=isBottomSeparatorHidden,nonatomic) BOOL bottomSeparatorHidden; 
@property (assign,nonatomic,__weak) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;                  //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MKAnnotatedItemListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MKAnnotatedItemListViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKAnnotatedItemListViewControllerDelegate>)arg1 ;
-(GEOMapItemAttribution *)attribution;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)infoCardThemeChanged;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(void)updateUIForTheme:(id)arg1 ;
-(void)captureUserAction:(int)arg1 ;
-(id)initWithChildViewController:(id)arg1 title:(id)arg2 attribution:(id)arg3 ;
-(UIView *)topHairlineSeparator;
-(UIView *)bottomHairlineSeparator;
-(NSString *)headerTitle;
-(void)openAttribution;
-(UIViewController *)annotatedItemListViewController;
-(double)headerTopPadding;
-(double)viewControllerTopPadding;
-(double)viewControllerBottomPadding;
-(void)pictureItemContainerRequestsSceneActivationWithPhotoGallery:(id)arg1 ;
-(id)initWithPictureItemContainer:(id)arg1 title:(id)arg2 attribution:(id)arg3 presentingProtocol:(id)arg4 ;
-(id)initWithTextItemContainer:(id)arg1 title:(id)arg2 attribution:(id)arg3 ;
-(void)setTopSeparatorHidden:(BOOL)arg1 ;
-(void)setBottomSeparatorHidden:(BOOL)arg1 ;
-(BOOL)isTopSeparatorHidden;
-(BOOL)isBottomSeparatorHidden;
@end

