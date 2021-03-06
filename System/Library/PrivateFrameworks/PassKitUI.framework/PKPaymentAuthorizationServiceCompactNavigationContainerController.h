/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKCompactNavigationContainerController.h>

@interface PKPaymentAuthorizationServiceCompactNavigationContainerController : PKCompactNavigationContainerController {

	unsigned char _rotationCount;
	BOOL _attemptedSecondaryViewCreation;
	BOOL _showPhysicalButtonIndicator;

}

@property (assign,nonatomic) BOOL showPhysicalButtonIndicator;              //@synthesize showPhysicalButtonIndicator=_showPhysicalButtonIndicator - In the implementation block
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)_createSecondaryViewsIfNecessary;
-(void)setShowPhysicalButtonIndicator:(BOOL)arg1 ;
-(BOOL)_effectiveShowPhysicalButtonIndicator;
-(BOOL)showPhysicalButtonIndicator;
@end

