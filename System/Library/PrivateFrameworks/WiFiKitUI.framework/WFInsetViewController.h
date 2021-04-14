/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UITableView;

@interface WFInsetViewController : UIViewController {

	BOOL _sectionContentInsetInitialized;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
-(void)setTableView:(UITableView *)arg1 ;
-(void)loadView;
-(UITableView *)tableView;
-(BOOL)_isRegularWidth;
-(void)viewDidLayoutSubviews;
-(void)_updateSectionContentInsetWithAnimation:(BOOL)arg1 ;
@end
