/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PLVideoViewDelegate.h>
#import <libobjc.A.dylib/PLPhotoTileViewControllerDelegate.h>
#import <libobjc.A.dylib/PLCropOverlayDelegate.h>

@class PLManagedAsset, UIImage, PLCropOverlay, PLPhotoTileViewController, PLVideoView, PLVideoRemaker, PLProgressView, NSURL, NSString;

@interface PLUIImageViewController : UIViewController <PLVideoViewDelegate, PLPhotoTileViewControllerDelegate, PLCropOverlayDelegate> {

	PLManagedAsset* _photo;
	CGImageRef _imageRef;
	UIImage* _image;
	CGRect _cropRect;
	PLCropOverlay* _cropOverlay;
	PLPhotoTileViewController* _imageTile;
	PLVideoView* _videoView;
	PLVideoRemaker* _remaker;
	PLProgressView* _progressView;
	NSURL* _videoURL;
	long long _previousStatusBarStyle;
	long long _newStatusBarStyle;
	unsigned _allowEditing : 1;
	unsigned _statusBarWasHidden : 1;
	unsigned _isVideo : 1;
	unsigned _isDisappearing : 1;
	unsigned _remaking : 1;

}

@property (nonatomic,readonly) NSString * localizedUseButtonTitle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)localizedTitle;
-(unsigned short)imageFormat;
-(id)initWithPhoto:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithVideoURL:(id)arg1 ;
-(id)exportPreset;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(id)videoQuality;
-(id)customBackgroundColor;
-(id)cancelButtonTitle;
-(BOOL)forceNativeScreenScale;
-(BOOL)force1XCroppedImage;
-(id)maxZoomScaleOverride;
-(void)videoRemakerDidBeginRemaking:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(unsigned long long)_contentAutoresizingMask;
-(unsigned long long)_tileAutoresizingMask;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2 ;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(int)cropOverlayMode;
-(Class)_viewClass;
-(BOOL)_displaysFullScreen;
-(id)_trimMessage;
-(void)didChooseVideoAtURL:(id)arg1 options:(id)arg2 ;
-(CGRect)previewFrame;
-(double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2 ;
-(BOOL)videoViewCanCreateMetadata:(id)arg1 ;
-(void)cropOverlayPlay:(id)arg1 ;
-(void)cropOverlayPause:(id)arg1 ;
-(BOOL)photoTileViewControllerAllowsEditing:(id)arg1 ;
-(void)photoTileViewController:(id)arg1 willAppear:(BOOL)arg2 ;
-(void)photoTileViewController:(id)arg1 didAppear:(BOOL)arg2 ;
-(void)photoTileViewController:(id)arg1 didDisappear:(BOOL)arg2 ;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg1 ;
-(void)photoTileViewControllerRequestsFullSizeImage:(id)arg1 ;
-(void)photoTileViewControllerCancelImageRequests:(id)arg1 ;
-(void)photoTileViewControllerSingleTap:(id)arg1 ;
-(void)photoTileViewControllerDoubleTap:(id)arg1 ;
-(void)photoTileViewControllerWillBeginGesture:(id)arg1 ;
-(void)photoTileViewControllerDidEndGesture:(id)arg1 ;
-(BOOL)videoViewCanBeginPlayback:(id)arg1 ;
-(void)videoViewIsReadyToBeginPlayback:(id)arg1 ;
-(void)videoViewDidBeginPlayback:(id)arg1 ;
-(void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2 ;
-(id)initWithImage:(CGImageRef)arg1 cropRect:(CGRect)arg2 ;
-(id)initWithUIImage:(id)arg1 cropRect:(CGRect)arg2 ;
-(id)initWithImageData:(id)arg1 cropRect:(CGRect)arg2 ;
-(id)cropOverlay;
-(void)setCropOverlayDone;
-(CGRect)_viewFrame;
-(NSString *)localizedUseButtonTitle;
-(BOOL)clientIsWallpaper;
-(BOOL)wantsAutoloopUI;
-(BOOL)wantsLegacyImageUI;
-(void)setupNavigationItem;
-(BOOL)wantsStatusBarVisible;
-(long long)desiredStatusBarAnimation;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(BOOL)isDisplayedInPhotoPicker;
-(long long)_imagePickerStatusBarStyle;
-(void)attachScrubberPalette;
-(void)_removedAsTopViewController;
-(void)_editabilityChanged:(id)arg1 ;
-(void)_updateGestureSettings;
-(void)_enableCropOverlayIfNecessary;
-(void)_enableCropOverlay;
-(void)_handleVideoSelected;
-(void)beginDisplayingProgress;
-(void)handleAutoloopSelected;
-(void)videoView:(id)arg1 scrubberWasCreated:(id)arg2 slalomRegionEditor:(id)arg3 ;
-(void)videoViewDidPausePlayback:(id)arg1 didFinish:(BOOL)arg2 ;
-(BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg1 ;
-(long long)_preferredWhitePointAdaptivityStyle;
-(void)handleMediaSelectionUsingTile:(id)arg1 managedAsset:(id)arg2 args:(id)arg3 includeEditing:(BOOL)arg4 ;
-(void)handleVideoSelectionWithURL:(id)arg1 args:(id)arg2 ;
-(BOOL)doNotTranscode;
-(BOOL)viewImageBeforeSelecting;
-(id)videoMaximumDuration;
-(BOOL)disableVideoTrimMessage;
-(id)chooseButtonTitle;
-(BOOL)imagePickerAllowsEditing;
-(unsigned long long)imagePickerSavingOptions;
@end

