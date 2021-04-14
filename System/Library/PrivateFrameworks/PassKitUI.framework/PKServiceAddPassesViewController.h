/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKNavigationController.h>
#import <libobjc.A.dylib/PKAddPassesCardStackViewControllerDelegate.h>
#import <libobjc.A.dylib/PKServiceAddPassesViewControllerProtocol.h>

@class PKAddPassesCardStackViewController, NSString;

@interface PKServiceAddPassesViewController : PKNavigationController <PKAddPassesCardStackViewControllerDelegate, PKServiceAddPassesViewControllerProtocol> {

	CGSize _screenSize;
	double _screenScale;
	BOOL _placeholderViewControllerDidCancel;
	PKAddPassesCardStackViewController* _cardStackViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(BOOL)_preventsAppearanceProxyCustomization;
+(id)_remoteViewControllerInterface;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(void)setDisplayPropertiesWithScreenSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)resetBrightness;
-(void)evaluateBrightness;
-(void)addPassesCardStackViewController:(id)arg1 didFinishAddingPasses:(id)arg2 ;
-(void)addPassesCardStackViewController:(id)arg1 didCancelAddingPasses:(id)arg2 ;
-(void)ingestPassesWithData:(id)arg1 fromPresentationSource:(unsigned long long)arg2 ;
@end

