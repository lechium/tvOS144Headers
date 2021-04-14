/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVInfoPanelContentViewController.h>

@class AVInfoPanelDescriptionViewController, AVInfoPanelNavigationCollectionViewController, UIVisualEffectView;

@interface AVInfoPanelMetadataViewController : AVInfoPanelContentViewController {

	AVInfoPanelDescriptionViewController* _descriptionViewController;
	AVInfoPanelNavigationCollectionViewController* _navigationViewController;
	UIVisualEffectView* _dividerView;
	BOOL _suppressDescription;

}

@property (assign,nonatomic) BOOL suppressDescription;                                                      //@synthesize suppressDescription=_suppressDescription - In the implementation block
@property (readonly) AVInfoPanelDescriptionViewController * descriptionViewController; 
@property (readonly) AVInfoPanelNavigationCollectionViewController * navigationViewController; 
+(id)_titleForInfo;
+(id)_titleForNavigationOnly;
+(BOOL)_preventsAppearanceProxyCustomization;
-(id)init;
-(BOOL)hasContent;
-(void)loadView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(AVInfoPanelDescriptionViewController *)descriptionViewController;
-(AVInfoPanelNavigationCollectionViewController *)navigationViewController;
-(void)setSuppressDescription:(BOOL)arg1 ;
-(id)_navigationFlowLayout;
-(BOOL)suppressDescription;
@end

