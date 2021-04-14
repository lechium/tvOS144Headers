/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSMutableDictionary;

@interface ACUIAccountViewProvidersManager : NSObject {

	NSDictionary* _accountTypeToPluginNameMap;
	NSMutableDictionary* _pluginCache;

}
+(id)sharedInstance;
-(id)init;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1 ;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1 ;
-(BOOL)setDelegate:(id)arg1 forSignInController:(id)arg2 forAccountWithType:(id)arg3 ;
-(Class)controllerClassForCreatingAccountWithType:(id)arg1 ;
-(id)_accountViewProviderPluginForAccountTypeID:(id)arg1 ;
-(Class)viewControllerClassForViewingAccount:(id)arg1 ;
-(id)configurationInfoForViewingAccount:(id)arg1 ;
-(id)_loadAccountViewProviderPluginWithName:(id)arg1 ;
@end

