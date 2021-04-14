/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <TVKit/TVPreviewTableViewController.h>
#import <libobjc.A.dylib/TVLPreviewFactoryDelegate.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLMenuElement, TVLListViewDataSource, TVLPreviewFactory, UIView, NSIndexPath, NSString;

@interface TVLGenericCollectionViewController : TVPreviewTableViewController <TVLPreviewFactoryDelegate, ATVUpdatable> {

	TVLMenuElement* _menuElement;
	BOOL _ignoreInitialSelection;
	TVLListViewDataSource* _dataSource;
	TVLPreviewFactory* _previewFactory;
	UIView* _xmlBannerView;
	NSIndexPath* _currentFocusedIndexPath;

}

@property (nonatomic,retain) TVLListViewDataSource * dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) TVLPreviewFactory * previewFactory;                 //@synthesize previewFactory=_previewFactory - In the implementation block
@property (nonatomic,retain) UIView * xmlBannerView;                             //@synthesize xmlBannerView=_xmlBannerView - In the implementation block
@property (assign,nonatomic) BOOL ignoreInitialSelection;                        //@synthesize ignoreInitialSelection=_ignoreInitialSelection - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentFocusedIndexPath;              //@synthesize currentFocusedIndexPath=_currentFocusedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TVLListViewDataSource *)dataSource;
-(void)setDataSource:(TVLListViewDataSource *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)_headerElement;
-(void)setCurrentFeedElement:(id)arg1 ;
-(void)tableView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(void)didUpdateFeedElementRequiringUserInterfaceUpdate:(BOOL)arg1 previousElement:(id)arg2 ;
-(void)tvl_saveStateWithCoder:(id)arg1 ;
-(void)tvl_restoreStateWithCoder:(id)arg1 ;
-(NSIndexPath *)currentFocusedIndexPath;
-(void)previewFactory:(id)arg1 didLoadPreviewViewController:(id)arg2 ;
-(void)previewFactory:(id)arg1 didFailToLoadPreviewWithError:(id)arg2 ;
-(void)setCurrentFocusedIndexPath:(NSIndexPath *)arg1 ;
-(void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2 ;
-(TVLPreviewFactory *)previewFactory;
-(void)setPreviewFactory:(TVLPreviewFactory *)arg1 ;
-(id)initWithGenericCollectionElement:(id)arg1 ;
-(CGRect)_frameForTable;
-(CGRect)_frameForHeaderView;
-(CGRect)_frameForPreview;
-(id)initWithItemCollectionWithImageHeaderElement:(id)arg1 ;
-(id)_initialSelectionIndexPath;
-(id)_xmlHeaderElement;
-(UIView *)xmlBannerView;
-(BOOL)_isValidIndexPath:(id)arg1 ;
-(CGRect)adjustedFrameForPreviewFrame:(CGRect)arg1 ;
-(void)evaluateJavascriptForEvent:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setXmlBannerView:(UIView *)arg1 ;
-(BOOL)ignoreInitialSelection;
-(void)setIgnoreInitialSelection:(BOOL)arg1 ;
@end

