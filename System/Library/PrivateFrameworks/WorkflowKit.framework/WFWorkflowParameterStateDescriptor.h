/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface WFWorkflowParameterStateDescriptor : MTLModel <MTLJSONSerializing, NSSecureCoding> {

	BOOL _isSelf;
	NSString* _workflowName;
	NSString* _workflowIdentifier;
	NSString* _cachedDisplayName;

}

@property (nonatomic,readonly) NSString * cachedDisplayName;                     //@synthesize cachedDisplayName=_cachedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * workflowName;                     //@synthesize workflowName=_workflowName - In the implementation block
@property (nonatomic,copy,readonly) NSString * workflowIdentifier;               //@synthesize workflowIdentifier=_workflowIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isSelf;                                      //@synthesize isSelf=_isSelf - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1 ;
-(NSString *)cachedDisplayName;
-(NSString *)workflowIdentifier;
-(NSString *)workflowName;
-(id)initWithWorkflowName:(id)arg1 workflowIdentifier:(id)arg2 isSelf:(BOOL)arg3 ;
-(id)initWithWorkflowReference:(id)arg1 isSelf:(BOOL)arg2 ;
-(id)displayNameWithDatabase:(id)arg1 containingWorkflow:(id)arg2 ;
-(id)matchingWorkflowInDatabase:(id)arg1 containingWorkflow:(id)arg2 ;
-(BOOL)isSelf;
@end

