/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UITabBarController.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>
#import <libobjc.A.dylib/TVLFeedControllerJSMessaging.h>

@class TVLJSCallback, UIViewController, NSString;

@interface TVLMenuBarViewController : UITabBarController <ATVUpdatable, TVLFeedControllerJSMessaging> {

	TVLJSCallback* _lastEvent;

}

@property (nonatomic,readonly) UIViewController * currentViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)menuBarControllerForViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIViewController *)currentViewController;
-(void)updateWithFeedElement:(id)arg1 ;
-(void)tvl_saveStateWithCoder:(id)arg1 ;
-(void)tvl_restoreStateWithCoder:(id)arg1 ;
-(void)_buildProxyViewControllers;
-(void)setWasEverActivated:(BOOL)arg1 ;
-(BOOL)swapController:(id)arg1 forController:(id)arg2 ;
-(id)_proxyViewControllerForNavigationItemElement:(id)arg1 loadCompletion:(/*^block*/id)arg2 ;
-(void)_loadViewControllerForURLString:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_loadViewControllerForNavigationItemElement:(id)arg1 navigationScript:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_clearLastEventInContext:(OpaqueJSContextRef)arg1 ;
-(void)_loadViewControllerForXMLDocument:(id)arg1 sourceURL:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_setSelectedViewController:(id)arg1 ;
-(void)callJavaScriptFunction:(id)arg1 withArguments:(id)arg2 ;
-(id)initWithElement:(id)arg1 ;
@end

