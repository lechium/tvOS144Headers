/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKBusinessChatContext;
@class PKInstallmentPlan;

@interface PKAccountServiceAccountResolutionCofiguration : NSObject {

	PKInstallmentPlan* _earlyInstallmentPlan;
	id<PKBusinessChatContext> _businessChatContext;

}

@property (nonatomic,retain) PKInstallmentPlan * earlyInstallmentPlan;                   //@synthesize earlyInstallmentPlan=_earlyInstallmentPlan - In the implementation block
@property (nonatomic,retain) id<PKBusinessChatContext> businessChatContext;              //@synthesize businessChatContext=_businessChatContext - In the implementation block
-(id)description;
-(PKInstallmentPlan *)earlyInstallmentPlan;
-(id<PKBusinessChatContext>)businessChatContext;
-(void)setEarlyInstallmentPlan:(PKInstallmentPlan *)arg1 ;
-(void)setBusinessChatContext:(id<PKBusinessChatContext>)arg1 ;
@end

