/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>
#import <libobjc.A.dylib/AMSRequestPresentationDelegate.h>

@protocol AMSBagProtocol;
@class ACAccount, NSArray, UIViewController, AMSAutomaticDownloadKindsSetTask, NSString;

@interface AMSUIAutomaticDownloadKindsSetTask : AMSTask <AMSBagConsumer, AMSRequestPresentationDelegate> {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSArray* _enabledMediaKinds;
	UIViewController* _viewController;
	AMSAutomaticDownloadKindsSetTask* _task;

}

@property (nonatomic,retain) AMSAutomaticDownloadKindsSetTask * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                    //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                             //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSArray * enabledMediaKinds;                        //@synthesize enabledMediaKinds=_enabledMediaKinds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(id)createBagForSubProfile;
-(AMSAutomaticDownloadKindsSetTask *)task;
-(void)setTask:(AMSAutomaticDownloadKindsSetTask *)arg1 ;
-(ACAccount *)account;
-(id)perform;
-(id<AMSBagProtocol>)bag;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(NSArray *)enabledMediaKinds;
-(void)handleAuthenticateRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDialogRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithEnabledMediaKinds:(id)arg1 account:(id)arg2 bag:(id)arg3 viewController:(id)arg4 ;
@end

