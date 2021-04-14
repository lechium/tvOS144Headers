/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXOneUpPresentationImplementationDelegate, PXOneUpPresentationDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class UIContextMenuInteraction, UIViewController, PXAssetsDataSourceManager, PXUIMediaProvider, PXGestureProvider, PXPhotosDetailsContext, PXAssetReference, PXAssetActionManager, UIScrollView;

@interface PXOneUpPresentation : NSObject {

	struct {
		BOOL respondsToPhotosDetailsContext;
		BOOL respondsToInitialAssetReference;
		BOOL respondsToCanStartPreviewingForContextMenuInteraction;
		BOOL respondsToAllowsActionsForContextMenuInteraction;
		BOOL respondsToAllowsPreviewCommitingForContextMenuInteraction;
		BOOL respondsToCommitPreviewForContextMenuInteraction;
		BOOL respondsToWillStartPreviewingForContextMenuInteraction;
		BOOL respondsToDidEndPreviewingForContextMenuInteraction;
		BOOL respondsToCurrentImageForAssetReference;
		BOOL respondsToRegionOfInterestForAssetReference;
		BOOL respondsToScrollAssetReferenceToVisible;
		BOOL respondsToSetHiddenAssetReferences;
		BOOL respondsToShouldAutoPlay;
		BOOL respondsToPreventShowInAllPhotos;
		BOOL respondsToActionManager;
		BOOL respondsToActionManagerForPreviewing;
		BOOL respondsToActionContext;
		BOOL respondsToGestureProvider;
		BOOL respondsToImportStatusManager;
		BOOL respondsToOrigin;
		BOOL respondsToScrollView;
	}  _delegateFlags;
	SCD_Struct_PX44 _implementationDelegateFlags;
	BOOL _isContextMenuInteractionActive;
	BOOL _enabled;
	id<PXOneUpPresentationImplementationDelegate> __implementationDelegate;
	id<PXOneUpPresentationDelegate> _delegate;
	UIContextMenuInteraction* _contextMenuInteraction;
	UIViewController* _presentingViewController;
	UIViewController* _originalPresentingViewController;
	id<PXOneUpPresentationImplementationDelegate> _implementationDelegate;

}

@property (assign,setter=_setImplementationDelegate:,nonatomic,__weak) id<PXOneUpPresentationImplementationDelegate> _implementationDelegate;              //@synthesize _implementationDelegate=__implementationDelegate - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;                                                                         //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) long long origin; 
@property (assign,nonatomic,__weak) UIViewController * originalPresentingViewController;                                                                   //@synthesize originalPresentingViewController=_originalPresentingViewController - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                                //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<PXOneUpPresentationImplementationDelegate> implementationDelegate;                                                  //@synthesize implementationDelegate=_implementationDelegate - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * dataSourceManager; 
@property (nonatomic,readonly) PXUIMediaProvider * mediaProvider; 
@property (nonatomic,readonly) PXGestureProvider * gestureProvider; 
@property (nonatomic,readonly) PXPhotosDetailsContext * photosDetailsContext; 
@property (nonatomic,readonly) PXAssetReference * initialAssetReference; 
@property (nonatomic,readonly) PXAssetActionManager * actionManager; 
@property (nonatomic,readonly) PXAssetActionManager * actionManagerForPreviewing; 
@property (nonatomic,readonly) long long actionContext; 
@property (nonatomic,readonly) id<PXAssetImportStatusManager> importStatusManager; 
@property (nonatomic,readonly) BOOL shouldAutoPlay; 
@property (nonatomic,readonly) BOOL preventShowInAllPhotosAction; 
@property (nonatomic,readonly) BOOL wantsShowInLibraryButton; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) id<PXOneUpPresentationDelegate> delegate;                                                                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL canStart; 
@property (nonatomic,readonly) BOOL canStop; 
@property (nonatomic,readonly) UIContextMenuInteraction * contextMenuInteraction;                                                                          //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (nonatomic,readonly) BOOL isContextMenuInteractionActive;                                                                                        //@synthesize isContextMenuInteractionActive=_isContextMenuInteractionActive - In the implementation block
-(id)init;
-(id<PXOneUpPresentationDelegate>)delegate;
-(void)setDelegate:(id<PXOneUpPresentationDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(long long)origin;
-(UIViewController *)presentingViewController;
-(id)initWithPresentingViewController:(id)arg1 ;
-(UIScrollView *)scrollView;
-(PXUIMediaProvider *)mediaProvider;
-(PXAssetsDataSourceManager *)dataSourceManager;
-(PXAssetReference *)initialAssetReference;
-(PXAssetActionManager *)actionManager;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)commitPreviewViewController:(id)arg1 ;
-(id<PXAssetImportStatusManager>)importStatusManager;
-(id)regionOfInterestForAssetReference:(id)arg1 ;
-(id<PXOneUpPresentationImplementationDelegate>)_implementationDelegate;
-(void)_updateImplementationDelegate;
-(void)_setImplementationDelegate:(id)arg1 ;
-(id<PXOneUpPresentationImplementationDelegate>)implementationDelegate;
-(void)setImplementationDelegate:(id<PXOneUpPresentationImplementationDelegate>)arg1 ;
-(BOOL)isContextMenuInteractionActive;
-(void)presentingViewControllerViewWillAppear:(BOOL)arg1 ;
-(void)presentingViewControllerViewDidAppear:(BOOL)arg1 ;
-(void)presentingViewControllerViewWillDisappear:(BOOL)arg1 ;
-(void)presentingViewControllerViewDidDisappear:(BOOL)arg1 ;
-(BOOL)canStart;
-(void)waitUntilPresentationCanStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)startAnimated:(BOOL)arg1 interactiveMode:(long long)arg2 ;
-(id)previewViewControllerAllowingActions:(BOOL)arg1 ;
-(BOOL)canStop;
-(void)stopAnimated:(BOOL)arg1 ;
-(void)invalidatePresentingGeometry;
-(BOOL)handlePresentingPinchGestureRecognizer:(id)arg1 ;
-(PXGestureProvider *)gestureProvider;
-(PXPhotosDetailsContext *)photosDetailsContext;
-(PXAssetActionManager *)actionManagerForPreviewing;
-(long long)actionContext;
-(BOOL)shouldAutoPlay;
-(BOOL)preventShowInAllPhotosAction;
-(BOOL)wantsShowInLibraryButton;
-(id)currentImageForAssetReference:(id)arg1 ;
-(void)scrollAssetReferenceToVisible:(id)arg1 ;
-(void)setHiddenAssetReferences:(id)arg1 ;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(UIViewController *)originalPresentingViewController;
-(void)setOriginalPresentingViewController:(UIViewController *)arg1 ;
@end

