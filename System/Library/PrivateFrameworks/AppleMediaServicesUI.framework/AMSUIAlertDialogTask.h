/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest, UIViewController;

@interface AMSUIAlertDialogTask : AMSTask {

	AMSDialogRequest* _request;
	UIViewController* _presentingViewController;

}

@property (nonatomic,readonly) AMSDialogRequest * request;                               //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
+(long long)_keyboardTypeFromType:(long long)arg1 ;
+(id)_convertTextField:(id)arg1 ;
-(AMSDialogRequest *)request;
-(id)present;
-(UIViewController *)presentingViewController;
-(id)initWithRequest:(id)arg1 presentingViewController:(id)arg2 ;
-(id)_createIOSViewControllerFromRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

