/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXWidget.h>

@protocol PXWidgetDelegate;
@class PXWidgetSpec, UIView, PXPhotosDetailsContext, PXTilingController, NSString, PXSectionedSelectionManager;

@interface PXDemoViewWidget : NSObject <PXWidget> {

	BOOL _isExpanded;
	double _height;
	BOOL __didLoadContent;
	id<PXWidgetDelegate> _widgetDelegate;
	PXWidgetSpec* _spec;
	long long _contentViewAnchoringType;
	UIView* __containerView;
	UIView* __contentView;
	long long __animationCount;
	CGSize __contentSize;

}

@property (nonatomic,readonly) UIView * _containerView;                                                            //@synthesize _containerView=__containerView - In the implementation block
@property (nonatomic,readonly) UIView * _contentView;                                                              //@synthesize _contentView=__contentView - In the implementation block
@property (assign,setter=_setContentViewAnchoringType:,nonatomic) long long contentViewAnchoringType;              //@synthesize contentViewAnchoringType=_contentViewAnchoringType - In the implementation block
@property (assign,setter=_setContentSize:,nonatomic) CGSize _contentSize;                                          //@synthesize _contentSize=__contentSize - In the implementation block
@property (assign,setter=_setDidLoadContent:,nonatomic) BOOL _didLoadContent;                                      //@synthesize _didLoadContent=__didLoadContent - In the implementation block
@property (assign,setter=_setAnimationCount:,nonatomic) long long _animationCount;                                 //@synthesize _animationCount=__animationCount - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate;                                           //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate; 
@property (assign,nonatomic,__weak) id<PXWidgetEditingDelegate> widgetEditingDelegate; 
@property (nonatomic,retain) PXPhotosDetailsContext * context; 
@property (nonatomic,retain) PXWidgetSpec * spec;                                                                  //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) BOOL hasContentForCurrentInput; 
@property (nonatomic,readonly) double extraSpaceNeededAtContentBottom; 
@property (nonatomic,readonly) BOOL hasLoadedContentData; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> contentView; 
@property (nonatomic,readonly) PXTilingController * contentTilingController; 
@property (nonatomic,readonly) long long contentLayoutStyle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedCaption; 
@property (nonatomic,readonly) NSString * localizedDisclosureTitle; 
@property (nonatomic,readonly) BOOL allowUserInteractionWithSubtitle; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (nonatomic,readonly) BOOL supportsSelection; 
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (nonatomic,readonly) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled; 
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager; 
@property (nonatomic,readonly) BOOL wantsFocus; 
@property (nonatomic,readonly) BOOL isInEditMode; 
@property (assign,nonatomic) CGSize maxVisibleSizeInEditMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)localizedTitle;
-(NSObject*<PXAnonymousView>)contentView;
-(UIView *)_contentView;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)_contentSize;
-(PXWidgetSpec *)spec;
-(UIView *)_containerView;
-(void)setSpec:(PXWidgetSpec *)arg1 ;
-(double)preferredContentHeightForWidth:(double)arg1 ;
-(void)loadContentData;
-(void)contentViewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)userDidSelectDisclosureControl;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<PXWidgetDelegate>)arg1 ;
-(BOOL)hasContentForCurrentInput;
-(long long)contentViewAnchoringType;
-(NSString *)localizedDisclosureTitle;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(void)_loadViews;
-(void)_handleLongPressGestureRecognizer:(id)arg1 ;
-(CGRect)_contentViewFrameForSize:(CGSize)arg1 ;
-(void)_updateContentViewColor;
-(void)_setContentViewAnchoringType:(long long)arg1 ;
-(void)_setDidLoadContent:(BOOL)arg1 ;
-(void)_setAnimationCount:(long long)arg1 ;
-(void)_setContentSize:(CGSize)arg1 ;
-(BOOL)_didLoadContent;
-(long long)_animationCount;
@end

