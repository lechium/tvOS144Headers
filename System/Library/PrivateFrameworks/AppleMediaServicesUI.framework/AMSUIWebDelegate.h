/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSUIWebDelegate <NSObject>
@optional
-(void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(/*^block*/id)arg3;
-(void)webViewController:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3;
-(void)webViewController:(id)arg1 didEncodeNetworkRequest:(id)arg2;
-(void)webViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;

@end

