/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFAirDropActivityViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class SFAirDropActivityViewController, NSArray, NSString;

@interface SFAirDropSharingViewControllerTV : UIViewController <SFAirDropActivityViewControllerDelegate, UIViewControllerTransitioningDelegate> {

	/*^block*/id completionHandler;
	SFAirDropActivityViewController* _airDropActivityControllerViewController;
	NSArray* _itemsToShare;

}

@property (nonatomic,retain) SFAirDropActivityViewController * airDropActivityControllerViewController;              //@synthesize airDropActivityControllerViewController=_airDropActivityControllerViewController - In the implementation block
@property (nonatomic,copy) NSArray * itemsToShare;                                                                   //@synthesize itemsToShare=_itemsToShare - In the implementation block
@property (nonatomic,copy) id completionHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)preferredFocusEnvironments;
-(void)_callCompletionHandlerWithError:(id)arg1 ;
-(void)_handleMenuButton:(id)arg1 ;
-(void)airDropActivityRequestingSharedItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)airDropActivityDidSuccessfullyCompleteTransfer;
-(void)airDropActivityDidSuccessfullyStartTransfer;
-(void)airDropActivityDoneButtonPressed;
-(void)airDropActivityDidFailToStartTransfer;
-(id)initWithSharingItems:(id)arg1 ;
-(SFAirDropActivityViewController *)airDropActivityControllerViewController;
-(void)setAirDropActivityControllerViewController:(SFAirDropActivityViewController *)arg1 ;
-(NSArray *)itemsToShare;
-(void)setItemsToShare:(NSArray *)arg1 ;
@end
