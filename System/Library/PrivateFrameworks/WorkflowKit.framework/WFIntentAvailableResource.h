/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAppInstalledResource.h>

@class INIntentExecutionInfo;

@interface WFIntentAvailableResource : WFAppInstalledResource {

	BOOL _intentIsSynced;
	BOOL _actionRequiresRemoteExecution;
	INIntentExecutionInfo* _executionInfo;

}

@property (nonatomic,readonly) INIntentExecutionInfo * executionInfo;              //@synthesize executionInfo=_executionInfo - In the implementation block
@property (nonatomic,readonly) BOOL intentIsSynced;                                //@synthesize intentIsSynced=_intentIsSynced - In the implementation block
@property (nonatomic,readonly) BOOL actionRequiresRemoteExecution;                 //@synthesize actionRequiresRemoteExecution=_actionRequiresRemoteExecution - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(void)refreshAvailability;
-(id)initWithDefinition:(id)arg1 intentExecutionInfo:(id)arg2 isSyncedFromOtherDevice:(BOOL)arg3 ;
-(BOOL)intentIsEligibleForRemoteExecution;
-(BOOL)intentIsLocallyAvailable;
-(void)updateAvailabilityWithUpdatedVersionRequirementError:(id)arg1 ;
-(INIntentExecutionInfo *)executionInfo;
-(BOOL)intentIsSynced;
-(BOOL)actionRequiresRemoteExecution;
@end

