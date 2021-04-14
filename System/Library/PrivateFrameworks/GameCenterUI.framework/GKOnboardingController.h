/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GKOnboardingFlowDelegate;
@interface GKOnboardingController : NSObject {

	id<GKOnboardingFlowDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GKOnboardingFlowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)shared;
-(id<GKOnboardingFlowDelegate>)delegate;
-(void)setDelegate:(id<GKOnboardingFlowDelegate>)arg1 ;
-(void)presentViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(unsigned long long)getPrivacyNoticeVersion;
-(void)presentProfilePrivacyScreen:(id)arg1 ;
-(void)presentPersonalizationScreen:(id)arg1 ;
-(BOOL)didShowPrivacyNotice;
@end
