/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKStoreExtensionServiceInterface.h>

@class NSString;

@interface SKStoreExtension : UIViewController <SKStoreExtensionServiceInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)serviceInterface;
+(id)clientInterface;
+(id)_remoteViewControllerInterface;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setupWithParameters:(id)arg1 ;
-(BOOL)shouldOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(void)presentRequestedViewControllerWithIdentifier:(id)arg1 ;
-(void)setTabIdentifier:(id)arg1 ;
-(void)setRequestedIdentifier:(id)arg1 ;
-(void)openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
@end
