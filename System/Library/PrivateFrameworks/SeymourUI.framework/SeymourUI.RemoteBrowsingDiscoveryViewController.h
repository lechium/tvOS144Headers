/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class UILabel;

@interface SeymourUI.RemoteBrowsingDiscoveryViewController : UIViewController <UICollectionViewDelegateFlowLayout> {

	 layout;
	 presenter;
	 dataSource;
	 collectionView;
	 currentlyConnectingCell;
	 titleLabel;
	 indicatorView;
	 menuGestureRecognizer;
	 playPauseGestureRecognizer;

}

@property (readonly,nonatomic) UILabel * accessibilityTitleLabel; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UILabel *)accessibilityTitleLabel;
-(void)handleKohnahmiCodeSequence;
-(void)handleMenuButtonTapped;
@end

