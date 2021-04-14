/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDiagnosticsEnvironment.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXForYouSuggestionGadgetDelegate, PXDisplaySuggestion, PXDisplayAsset;
@class PXGadgetSpec, PXUIMediaProvider, PXForYouSuggestionGadgetContentView, NSString, UIImage, PXRegionOfInterest;

@interface PXForYouSuggestionGadget : NSObject <PXDiagnosticsEnvironment, PXGadget> {

	BOOL _contentHidden;
	BOOL _blursDegradedContent;
	BOOL _shouldSuppressSelectionAnimation;
	BOOL _contentViewVisible;
	unsigned short _suggestionType;
	PXGadgetSpec* _gadgetSpec;
	long long _priority;
	id<PXForYouSuggestionGadgetDelegate> _delegate;
	id<PXDisplaySuggestion> _suggestion;
	PXUIMediaProvider* _mediaProvider;
	id<PXDisplayAsset> _keyAsset;
	PXForYouSuggestionGadgetContentView* _contentView;
	NSString* _title;
	NSString* _subtitle;
	CGSize _cachedHeightForWidth;
	CGRect _visibleContentRect;

}

@property (nonatomic,retain) PXUIMediaProvider * mediaProvider;                                      //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) id<PXDisplayAsset> keyAsset;                                            //@synthesize keyAsset=_keyAsset - In the implementation block
@property (assign,nonatomic) CGSize cachedHeightForWidth;                                            //@synthesize cachedHeightForWidth=_cachedHeightForWidth - In the implementation block
@property (nonatomic,retain) PXForYouSuggestionGadgetContentView * contentView;                      //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL contentViewVisible;                                                //@synthesize contentViewVisible=_contentViewVisible - In the implementation block
@property (nonatomic,copy) NSString * title;                                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned short suggestionType;                                          //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,retain) id<PXDisplaySuggestion> suggestion;                                     //@synthesize suggestion=_suggestion - In the implementation block
@property (assign,nonatomic,__weak) id<PXForYouSuggestionGadgetDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isContentHidden,nonatomic) BOOL contentHidden;                              //@synthesize contentHidden=_contentHidden - In the implementation block
@property (nonatomic,readonly) UIImage * currentImage; 
@property (assign,nonatomic) BOOL blursDegradedContent;                                              //@synthesize blursDegradedContent=_blursDegradedContent - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressSelectionAnimation;                                  //@synthesize shouldSuppressSelectionAnimation=_shouldSuppressSelectionAnimation - In the implementation block
@property (nonatomic,readonly) PXRegionOfInterest * regionOfInterestForOneUpTransition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                              //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                     //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect;                                              //@synthesize visibleContentRect=_visibleContentRect - In the implementation block
+(void)preloadResources;
+(id)fetchQueue;
-(id)init;
-(void)dealloc;
-(id<PXForYouSuggestionGadgetDelegate>)delegate;
-(void)setDelegate:(id<PXForYouSuggestionGadgetDelegate>)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSuggestionType:(unsigned short)arg1 ;
-(unsigned short)suggestionType;
-(PXForYouSuggestionGadgetContentView *)contentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(PXForYouSuggestionGadgetContentView *)arg1 ;
-(void)setKeyAsset:(id<PXDisplayAsset>)arg1 ;
-(id<PXDisplayAsset>)keyAsset;
-(id)debugDictionary;
-(void)setSuggestion:(id<PXDisplaySuggestion>)arg1 ;
-(id<PXDisplaySuggestion>)suggestion;
-(id)initWithSuggestion:(id)arg1 ;
-(PXUIMediaProvider *)mediaProvider;
-(void)_updateTitleAndSubtitle;
-(void)contentViewWillAppear;
-(void)contentViewDidDisappear;
-(unsigned long long)gadgetType;
-(void)setMediaProvider:(PXUIMediaProvider *)arg1 ;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)commitPreviewViewController:(id)arg1 ;
-(void)userDidSelectGadget;
-(id)debugURLsForDiagnostics;
-(id)uniqueGadgetIdentifier;
-(void)contentHasBeenSeen;
-(void)gadgetControllerHasAppeared;
-(id)targetPreviewViewForLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(CGRect)visibleContentRect;
-(void)setVisibleContentRect:(CGRect)arg1 ;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(UIImage *)currentImage;
-(void)setBlursDegradedContent:(BOOL)arg1 ;
-(BOOL)blursDegradedContent;
-(PXRegionOfInterest *)regionOfInterestForOneUpTransition;
-(void)setContentHidden:(BOOL)arg1 ;
-(void)_updateContentViewMode;
-(id)_contentViewIfLoaded;
-(void)setContentViewVisible:(BOOL)arg1 ;
-(void)_handleDismiss;
-(void)_markSuggestionAsActive;
-(void)_markSuggestionAsDeclined;
-(void)_updateKeyAsset;
-(BOOL)isContentHidden;
-(BOOL)shouldSuppressSelectionAnimation;
-(void)setShouldSuppressSelectionAnimation:(BOOL)arg1 ;
-(CGSize)cachedHeightForWidth;
-(void)setCachedHeightForWidth:(CGSize)arg1 ;
-(BOOL)contentViewVisible;
@end

