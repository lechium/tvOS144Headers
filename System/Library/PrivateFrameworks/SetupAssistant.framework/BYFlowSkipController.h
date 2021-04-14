/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BYFlowSkipController : NSObject
+(id)sharedInstance;
+(id)_supportedIdentifiers;
+(id)flowSkipIdentifiersFromFollowUpAction:(id)arg1 ;
-(id)init;
-(void)observeFinishSetupTriggers;
-(void)setBasicFunctionalityEnabled:(BOOL)arg1 ;
-(BOOL)_isBasicFunctionalityEnabled;
-(void)didSkipFlow:(id)arg1 ;
-(void)didCompleteFlow:(id)arg1 ;
-(void)cancelPendingFlows;
-(void)passcodeDidChange;
-(void)revisePendingFollowUpsForcingRepost:(BOOL)arg1 ;
-(void)registerActivities;
@end

