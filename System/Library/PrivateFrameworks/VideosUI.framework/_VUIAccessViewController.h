/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class VUIAccessView_tvOS, VUIAppSpinnerView, NSArray, OBPrivacyLinkController, NSMutableArray, NSDictionary;

@interface _VUIAccessViewController : UIViewController {

	VUIAccessView_tvOS* _accessView;
	VUIAppSpinnerView* _loadingView;
	NSArray* _channels;
	OBPrivacyLinkController* _privacyController;
	NSMutableArray* _bundleIDs;
	NSDictionary* _options;
	BOOL _hasCalledCompletion;
	NSArray* _appInfos;
	NSArray* _appChannels;
	NSMutableArray* _channelIds;
	BOOL _hasOptedIn;
	BOOL _shouldDenyOnCancel;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(BOOL)_isHostedInRemoteViewService;
-(id)init;
-(void)_init;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(id)cappedTraitCollection;
-(void)_handleMenuGesture:(id)arg1 ;
-(id)_watchListAppIcon;
-(id)_imageForBundleID:(id)arg1 ;
-(void)_fetchRemoteAppInfo;
-(void)_setupAccessViews;
-(void)_toggleLoadingScreen;
-(void)_completeWithStatus:(unsigned long long)arg1 ;
-(void)_presentGenericErrorWithCompletion:(/*^block*/id)arg1 ;
-(void)_allow:(id)arg1 ;
-(void)_disallow:(id)arg1 ;
-(void)_handleSeeAllButton:(id)arg1 ;
-(void)_handleNackButton:(id)arg1 ;
-(id)initWithBundleIDs:(id)arg1 channels:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
