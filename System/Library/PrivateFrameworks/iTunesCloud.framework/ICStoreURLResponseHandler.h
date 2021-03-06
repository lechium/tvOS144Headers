/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICURLResponseHandler.h>

@interface ICStoreURLResponseHandler : ICURLResponseHandler
+(void)_updateDefaultStorefrontIdentifier:(id)arg1 usingIdentityStore:(id)arg2 ;
-(void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_verifyMescalSignatureForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performAuthenticationForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_processDialogResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

