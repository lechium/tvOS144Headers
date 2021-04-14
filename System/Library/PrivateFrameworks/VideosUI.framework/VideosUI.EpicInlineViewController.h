/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVAppTemplateImpressionable.h>

@class NSArray;

@interface VideosUI.EpicInlineViewController : UIViewController <TVAppTemplateImpressionable> {

	 collectionImpressioner;
	 viewElement;
	 shelfViewModel;
	 horizontalCollectionViewModel;
	 lastViewWidth;
	 shelfViewController;
	 horizontalStackViewController;
	 scrollViewMonitor;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
@end

