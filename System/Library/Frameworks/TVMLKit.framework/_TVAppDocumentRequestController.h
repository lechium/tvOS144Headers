/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVAppDocumentController.h>
#import <libobjc.A.dylib/IKDocumentServiceRequestDelegate.h>
#import <TVMLKit/TVTemplateFeaturesManagerDelegate.h>
#import <TVMLKit/TVMediaControllerDelegate.h>
#import <TVMLKit/TVMediaPlaying.h>
#import <libobjc.A.dylib/IKServiceRequestDelegate.h>
#import <TVMLKit/TVMediaControllerHosting.h>
#import <TVMLKit/TVObserving.h>
#import <TVMLKit/TVMediaPlaybackManagerDelegate.h>

@protocol TVMediaController, TVShowcasing, TVMediaProviding;
@class UIImage, IKDocumentServiceRequest, UIViewController, TVMediaPlaybackManager, TVMediaInfo, TVTemplateFeaturesManager, _TVSwipeUpMessageView, TVObservableEventController, IKUpdateServiceRequest, NSString;

@interface _TVAppDocumentRequestController : _TVAppDocumentController <IKDocumentServiceRequestDelegate, TVTemplateFeaturesManagerDelegate, TVMediaControllerDelegate, TVMediaPlaying, IKServiceRequestDelegate, TVMediaControllerHosting, TVObserving, TVMediaPlaybackManagerDelegate> {

	struct {
		BOOL initialRequestSent;
		BOOL shouldHideUI;
	}  _flags;
	struct {
		BOOL hasSelectedMediaInfoDidChange;
		BOOL hasDidHideUI;
		BOOL hasShowcaseFactorDidChange;
		BOOL hasDidCompleteDocumentCreation;
	}  _adrcDelegateFlags;
	IKDocumentServiceRequest* _documentServiceRequest;
	UIViewController*<TVMediaController> _mediaController;
	TVMediaPlaybackManager* _mediaPlaybackManager;
	TVMediaInfo* _selectedMediaInfo;
	double _showcaseFactor;
	double _showcaseInset;
	TVTemplateFeaturesManager* _featuresManager;
	id<TVShowcasing> _showcasingController;
	id<TVMediaProviding> _mediaProvider;
	_TVSwipeUpMessageView* _swipeUpMessageView;
	TVObservableEventController* _observableEventController;
	IKUpdateServiceRequest* _updateServiceRequest;

}

@property (nonatomic,readonly) TVTemplateFeaturesManager * featuresManager;                        //@synthesize featuresManager=_featuresManager - In the implementation block
@property (nonatomic,retain) TVMediaPlaybackManager * mediaPlaybackManager;                        //@synthesize mediaPlaybackManager=_mediaPlaybackManager - In the implementation block
@property (assign,nonatomic,__weak) id<TVShowcasing> showcasingController;                         //@synthesize showcasingController=_showcasingController - In the implementation block
@property (assign,nonatomic,__weak) id<TVMediaProviding> mediaProvider;                            //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) _TVSwipeUpMessageView * swipeUpMessageView;                           //@synthesize swipeUpMessageView=_swipeUpMessageView - In the implementation block
@property (nonatomic,retain) TVObservableEventController * observableEventController;              //@synthesize observableEventController=_observableEventController - In the implementation block
@property (nonatomic,retain) IKUpdateServiceRequest * updateServiceRequest;                        //@synthesize updateServiceRequest=_updateServiceRequest - In the implementation block
@property (nonatomic,readonly) IKDocumentServiceRequest * documentServiceRequest;                  //@synthesize documentServiceRequest=_documentServiceRequest - In the implementation block
@property (nonatomic,retain) UIViewController*<TVMediaController> mediaController;                 //@synthesize mediaController=_mediaController - In the implementation block
@property (nonatomic,readonly) TVMediaInfo * selectedMediaInfo;                                    //@synthesize selectedMediaInfo=_selectedMediaInfo - In the implementation block
@property (nonatomic,readonly) double showcaseFactor;                                              //@synthesize showcaseFactor=_showcaseFactor - In the implementation block
@property (nonatomic,readonly) BOOL isUIHidden; 
@property (assign,nonatomic) double showcaseInset;                                                 //@synthesize showcaseInset=_showcaseInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIImage * coverImage; 
@property (nonatomic,readonly) BOOL isPlaying; 
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isPlaying;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(void)documentDidChangeForDocumentServiceRequest:(id)arg1 ;
-(void)serviceRequest:(id)arg1 didCompleteWithStatus:(long long)arg2 errorDictionary:(id)arg3 ;
-(UIViewController*<TVMediaController>)mediaController;
-(id<TVMediaProviding>)mediaProvider;
-(void)setMediaProvider:(id<TVMediaProviding>)arg1 ;
-(void)setMediaController:(UIViewController*<TVMediaController>)arg1 ;
-(void)setAppDelegate:(id)arg1 ;
-(id)initWithAppDocument:(id)arg1 ;
-(id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(BOOL)arg2 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2 ;
-(double)showcaseFactor;
-(id)initWithDocumentServiceRequest:(id)arg1 ;
-(void)didChangeDocumentContext;
-(void)addObserver:(id)arg1 forEvent:(id)arg2 ;
-(void)removeObserver:(id)arg1 forEvent:(id)arg2 ;
-(double)showcaseInset;
-(void)setShowcaseInset:(double)arg1 ;
-(TVObservableEventController *)observableEventController;
-(void)showcaseFactorDidChange;
-(void)mediaInfoDidChange;
-(UIImage *)coverImage;
-(IKDocumentServiceRequest *)documentServiceRequest;
-(void)setShowcasingController:(id<TVShowcasing>)arg1 ;
-(TVMediaPlaybackManager *)mediaPlaybackManager;
-(void)setMediaPlaybackManager:(TVMediaPlaybackManager *)arg1 ;
-(void)_updateShowcaseFactor;
-(void)_updateMediaInfo;
-(BOOL)automaticallyProvidesMediaController;
-(void)_hostMediaControllerIfPossible;
-(_TVSwipeUpMessageView *)swipeUpMessageView;
-(TVTemplateFeaturesManager *)featuresManager;
-(TVMediaInfo *)selectedMediaInfo;
-(void)shouldHideSupplementaryUI:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_hostingFocusEnvironment;
-(void)setSwipeUpMessageView:(_TVSwipeUpMessageView *)arg1 ;
-(void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2 ;
-(IKUpdateServiceRequest *)updateServiceRequest;
-(void)setUpdateServiceRequest:(IKUpdateServiceRequest *)arg1 ;
-(BOOL)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id*)arg4 ;
-(id<TVShowcasing>)showcasingController;
-(void)featuresManager:(id)arg1 currentContextDidChangeForFeature:(id)arg2 ;
-(void)coverImageDidChangeForMediaController:(id)arg1 ;
-(void)stateDidChangeForMediaController:(id)arg1 ;
-(id)relinquishOwnership;
-(void)adoptMediaController:(id)arg1 ;
-(void)handleEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3 ;
-(void)mediaPlaybackManager:(id)arg1 shouldHideUI:(BOOL)arg2 animated:(BOOL)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)evaluateSwipeUpMessageForMediaPlaybackManager:(id)arg1 ;
-(BOOL)isUIHidden;
-(void)sendInitialRequestIfNeeded;
-(void)willHostTemplateViewController:(id)arg1 usesTransitions:(BOOL*)arg2 ;
-(id)tv_featuresManagerForDocument:(id)arg1 ;
-(BOOL)tv_handleEventForDocument:(id)arg1 eventName:(id)arg2 targetResponder:(id)arg3 viewElement:(id)arg4 extraInfo:(id*)arg5 ;
-(void)setObservableEventController:(TVObservableEventController *)arg1 ;
@end

