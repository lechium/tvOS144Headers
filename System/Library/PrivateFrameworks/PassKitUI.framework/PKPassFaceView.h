/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/WLEasyToHitCustomView.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>

@protocol PKPassFaceViewDelegate;
@class PKPass, PKPassColorProfile, NSMutableSet, UIView, UIImageView, UIImage, CAFilter, NSMutableArray, PKLiveRenderedCardFaceView, PKTransactionDataOverlayCardFaceView, PKDynamicLayerView, PKPaymentService, NSData, PKPassFaceTemplate, PKPassBucketTemplate, NSArray, PKPassFaceViewRendererState, NSString;

@interface PKPassFaceView : WLEasyToHitCustomView <PKPaymentServiceDelegate, PKForegroundActiveArbiterObserver> {

	PKPass* _pass;
	PKPassColorProfile* _colorProfile;
	NSMutableSet* _headerInvariantViews;
	NSMutableSet* _bodyInvariantViews;
	NSMutableSet* _headerContentViews;
	NSMutableSet* _bodyContentViews;
	struct {
		unsigned showingHeader : 1;
		unsigned showingBody : 1;
		unsigned showsLiveRendering : 1;
		unsigned effectiveShowsLiveRendering : 1;
		unsigned showsBackgroundView : 1;
		unsigned effectiveShowsBackgroundView : 1;
		unsigned backgroundModeSet : 1;
		unsigned cachedFaceImageLoaded : 1;
		unsigned faceImageLoading : 1;
		unsigned partialFaceImageLoading : 1;
	}  _flags;
	UIView* _contentView;
	UIImageView* _backgroundPlaceholderView;
	UIImageView* _backgroundView;
	UIImageView* _shadowBackgroundView;
	UIImage* _placeholderFaceImage;
	UIImage* _faceImage;
	UIImage* _faceShadowImage;
	UIImage* _partialFaceImage;
	CAFilter* _dimmingFilter;
	double _dimmer;
	NSMutableArray* _headerBucketViews;
	NSMutableArray* _bodyBucketViews;
	NSMutableArray* _delayedAnimations;
	PKLiveRenderedCardFaceView* _liveBackgroundView;
	PKTransactionDataOverlayCardFaceView* _transactionDataOverlayView;
	PKDynamicLayerView* _dynamicCardView;
	unsigned long long _contentViewCreatedRegions;
	unsigned long long _invariantViewCreatedRegions;
	BOOL _foregroundActive;
	PKPaymentService* _paymentService;
	BOOL _invalidated;
	BOOL _paused;
	BOOL _clipsContent;
	BOOL _allowBackgroundPlaceholders;
	BOOL _liveMotionEnabled;
	BOOL _viewExpanded;
	long long _backgroundMode;
	unsigned long long _visibleRegions;
	double _clippedContentHeight;
	NSData* _dynamicBarcodeData;
	id<PKPassFaceViewDelegate> _delegate;
	long long _style;
	PKPassFaceTemplate* _faceTemplate;
	PKPassBucketTemplate* _headerBucketTemplate;
	NSArray* _buckets;

}

@property (assign,nonatomic) long long style;                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSMutableArray * headerBucketViews;                         //@synthesize headerBucketViews=_headerBucketViews - In the implementation block
@property (nonatomic,readonly) PKPassFaceTemplate * faceTemplate;                        //@synthesize faceTemplate=_faceTemplate - In the implementation block
@property (nonatomic,readonly) PKPassBucketTemplate * headerBucketTemplate;              //@synthesize headerBucketTemplate=_headerBucketTemplate - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) UIView * backgroundView;                                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) PKPass * pass; 
@property (nonatomic,readonly) PKPassColorProfile * colorProfile; 
@property (nonatomic,readonly) NSArray * buckets;                                        //@synthesize buckets=_buckets - In the implementation block
@property (assign,nonatomic) long long backgroundMode;                                   //@synthesize backgroundMode=_backgroundMode - In the implementation block
@property (assign,nonatomic) unsigned long long visibleRegions;                          //@synthesize visibleRegions=_visibleRegions - In the implementation block
@property (assign,nonatomic) BOOL clipsContent;                                          //@synthesize clipsContent=_clipsContent - In the implementation block
@property (assign,nonatomic) BOOL allowBackgroundPlaceholders;                           //@synthesize allowBackgroundPlaceholders=_allowBackgroundPlaceholders - In the implementation block
@property (assign,nonatomic) double clippedContentHeight;                                //@synthesize clippedContentHeight=_clippedContentHeight - In the implementation block
@property (nonatomic,readonly) BOOL bodyContentCreated; 
@property (nonatomic,readonly) UIEdgeInsets shadowInsets; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (assign,nonatomic) BOOL showsLiveRendering; 
@property (assign,nonatomic) BOOL liveMotionEnabled;                                     //@synthesize liveMotionEnabled=_liveMotionEnabled - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (nonatomic,readonly) PKPassFaceViewRendererState * rendererState; 
@property (assign,nonatomic) BOOL viewExpanded;                                          //@synthesize viewExpanded=_viewExpanded - In the implementation block
@property (nonatomic,copy) NSData * dynamicBarcodeData;                                  //@synthesize dynamicBarcodeData=_dynamicBarcodeData - In the implementation block
@property (assign,nonatomic,__weak) id<PKPassFaceViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_faceClassForStyle:(long long)arg1 ;
+(id)newFrontFaceViewForStyle:(long long)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id<PKPassFaceViewDelegate>)delegate;
-(void)setDelegate:(id<PKPassFaceViewDelegate>)arg1 ;
-(BOOL)isPaused;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(CGSize)contentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)contentBounds;
-(UIEdgeInsets)alignmentRectInsets;
-(UIView *)contentView;
-(NSArray *)buckets;
-(void)didAuthenticate;
-(PKPass *)pass;
-(void)layoutSubviews;
-(UIView *)backgroundView;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK1)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(PKPassColorProfile *)colorProfile;
-(PKPassFaceViewRendererState *)rendererState;
-(void)createBodyContentViews;
-(void)insertContentView:(id)arg1 ofType:(long long)arg2 ;
-(void)removeContentView:(id)arg1 ofType:(long long)arg2 ;
-(void)_handleTimeOrLocaleChange:(id)arg1 ;
-(UIEdgeInsets)shadowInsets;
-(id)_viewSetForContentViewType:(long long)arg1 ;
-(void)_createInvariantViewsForRegions:(unsigned long long)arg1 ;
-(void)_createContentViewsForRegions:(unsigned long long)arg1 ;
-(void)_setShowsHeaderViews:(BOOL)arg1 ;
-(void)_setShowsBodyViews:(BOOL)arg1 ;
-(void)_setShowsBackgroundView:(BOOL)arg1 ;
-(void)_loadFaceImageIfNecessary;
-(void)_createDimmingFilterIfNecessary;
-(void)_setContentViewsAlpha:(double)arg1 ;
-(UIEdgeInsets)shadowBackgroundInsets;
-(void)_presentDiffRecursivelyDiff:(id)arg1 forBucketAtIndex:(unsigned long long)arg2 withBuckets:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_createBucketsIfNecessary;
-(id)headerTemplate;
-(void)setShowsLiveRendering:(BOOL)arg1 rendererState:(id)arg2 ;
-(void)_updateEffectiveShowsBackgroundView;
-(void)createHeaderInvariantViews;
-(void)createBodyInvariantViews;
-(void)createHeaderContentViews;
-(id)passFaceTemplate;
-(id)_relevantBuckets;
-(void)_updateForeignBalances;
-(void)_setBalances:(id)arg1 ;
-(void)_recreateFieldDerivedContent;
-(void)_flushContentViewsForRegions:(unsigned long long)arg1 ;
-(void)setPass:(id)arg1 colorProfile:(id)arg2 ;
-(void)setVisibleRegions:(unsigned long long)arg1 ;
-(void)setClipsContent:(BOOL)arg1 ;
-(void)setBackgroundMode:(long long)arg1 ;
-(void)setAllowBackgroundPlaceholders:(BOOL)arg1 ;
-(void)setLiveMotionEnabled:(BOOL)arg1 ;
-(BOOL)bodyContentCreated;
-(void)setDimmer:(double)arg1 animated:(BOOL)arg2 ;
-(void)createContentViewsWithFade:(BOOL)arg1 ;
-(void)presentDiff:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateShadow:(double)arg1 animated:(BOOL)arg2 withDelay:(double)arg3 ;
-(BOOL)showsLiveRendering;
-(void)setShowsLiveRendering:(BOOL)arg1 ;
-(void)didTransact;
-(long long)backgroundMode;
-(unsigned long long)visibleRegions;
-(BOOL)clipsContent;
-(BOOL)allowBackgroundPlaceholders;
-(double)clippedContentHeight;
-(void)setClippedContentHeight:(double)arg1 ;
-(BOOL)liveMotionEnabled;
-(BOOL)viewExpanded;
-(void)setViewExpanded:(BOOL)arg1 ;
-(NSData *)dynamicBarcodeData;
-(void)setDynamicBarcodeData:(NSData *)arg1 ;
-(NSMutableArray *)headerBucketViews;
-(void)setHeaderBucketViews:(NSMutableArray *)arg1 ;
-(PKPassFaceTemplate *)faceTemplate;
-(PKPassBucketTemplate *)headerBucketTemplate;
@end
