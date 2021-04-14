/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccountUI/AAUIGenericTermsRemoteUI.h>

@class AKDevice, NSString;

@interface AAUIProxiedTermsRemoteUI : AAUIGenericTermsRemoteUI {

	AKDevice* _proxiedDevice;
	NSString* _appProvidedContext;

}
-(id)sessionConfigurationForLoader:(id)arg1 ;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_sendAcceptedTermsInfo:(id)arg1 ;
-(void)_agreeToTermsWithURLString:(id)arg1 preferPassword:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_authContextForRenewCredentials;
-(id)initWithAuthResults:(id)arg1 ;
-(id)initWithAuthResults:(id)arg1 proxiedDevice:(id)arg2 appProvidedContext:(id)arg3 ;
@end
