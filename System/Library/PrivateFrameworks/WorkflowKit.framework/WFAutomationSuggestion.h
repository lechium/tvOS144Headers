/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFTrigger, NSString, NSData, WFWorkflow;

@interface WFAutomationSuggestion : NSObject <NSCopying> {

	WFTrigger* _trigger;
	NSString* _bundleIdentifier;
	NSData* _serializedSuggestion;
	WFWorkflow* _workflow;
	NSString* _activityType;
	NSString* _intentType;
	NSString* _trialID;

}

@property (nonatomic,readonly) WFTrigger * trigger;                        //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * serializedSuggestion;              //@synthesize serializedSuggestion=_serializedSuggestion - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                      //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) NSString * activityType;                    //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSString * intentType;                      //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,readonly) NSString * trialID;                         //@synthesize trialID=_trialID - In the implementation block
+(id)generateTestSuggestions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)activityType;
-(WFTrigger *)trigger;
-(NSString *)intentType;
-(WFWorkflow *)workflow;
-(NSString *)trialID;
-(id)initWithIntent:(id)arg1 trigger:(id)arg2 bundleIdentifier:(id)arg3 serializedSuggestion:(id)arg4 trialID:(id)arg5 ;
-(id)initWithUserActivity:(id)arg1 trigger:(id)arg2 bundleIdentifier:(id)arg3 serializedSuggestion:(id)arg4 trialID:(id)arg5 ;
-(id)initWithShortcut:(id)arg1 trigger:(id)arg2 bundleIdentifier:(id)arg3 serializedSuggestion:(id)arg4 trialID:(id)arg5 ;
-(NSData *)serializedSuggestion;
@end

