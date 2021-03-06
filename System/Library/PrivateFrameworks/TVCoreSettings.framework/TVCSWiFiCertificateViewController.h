/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVCoreSettings/TVCoreSettings-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol TVCSWiFiCertificateTrustDelegate;
@class UILabel, NSString;

@interface TVCSWiFiCertificateViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, WFNetworkView> {

	id<TVCSWiFiCertificateTrustDelegate> _delegate;
	id _trust;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) id trust;                                                        //@synthesize trust=_trust - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) id<TVCSWiFiCertificateTrustDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
-(id<TVCSWiFiCertificateTrustDelegate>)delegate;
-(void)setDelegate:(id<TVCSWiFiCertificateTrustDelegate>)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(id)trust;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)wantsModalPresentation;
-(void)_didPressMenu:(id)arg1 ;
@end

