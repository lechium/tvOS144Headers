/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFRemoteExecutionRequest.h>

@class NSString, NSArray, NSDictionary, NSMutableArray;

@interface WFRemoteExecutionAskWhenRunRequest : WFRemoteExecutionRequest {

	NSString* _associatedRunRequestIdentifier;
	NSArray* _parameterKeys;
	NSDictionary* _parameterKeysAndStates;
	NSString* _actionIdentifier;
	NSDictionary* _actionSerializedParameters;
	NSDictionary* _possibleStatesByParameterKey;
	NSMutableArray* _parameterKeysAndStatesData;
	NSMutableArray* _possibleStatesByParameterKeyData;

}

@property (nonatomic,retain) NSMutableArray * parameterKeysAndStatesData;                    //@synthesize parameterKeysAndStatesData=_parameterKeysAndStatesData - In the implementation block
@property (nonatomic,retain) NSMutableArray * possibleStatesByParameterKeyData;              //@synthesize possibleStatesByParameterKeyData=_possibleStatesByParameterKeyData - In the implementation block
@property (nonatomic,readonly) NSString * associatedRunRequestIdentifier;                    //@synthesize associatedRunRequestIdentifier=_associatedRunRequestIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * parameterKeys;                                      //@synthesize parameterKeys=_parameterKeys - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameterKeysAndStates;                        //@synthesize parameterKeysAndStates=_parameterKeysAndStates - In the implementation block
@property (nonatomic,readonly) NSString * actionIdentifier;                                  //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionSerializedParameters;                    //@synthesize actionSerializedParameters=_actionSerializedParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * possibleStatesByParameterKey;                  //@synthesize possibleStatesByParameterKey=_possibleStatesByParameterKey - In the implementation block
+(long long)version;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(NSString *)actionIdentifier;
-(NSArray *)parameterKeys;
-(BOOL)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(id)initWithAction:(id)arg1 parameters:(id)arg2 associatedRunRequestIdentifier:(id)arg3 possibleStatesByParameterKey:(id)arg4 ;
-(void)inflateParameterStatesWithAction:(id)arg1 ;
-(NSString *)associatedRunRequestIdentifier;
-(NSDictionary *)parameterKeysAndStates;
-(NSDictionary *)actionSerializedParameters;
-(NSDictionary *)possibleStatesByParameterKey;
-(NSMutableArray *)parameterKeysAndStatesData;
-(void)setParameterKeysAndStatesData:(NSMutableArray *)arg1 ;
-(NSMutableArray *)possibleStatesByParameterKeyData;
-(void)setPossibleStatesByParameterKeyData:(NSMutableArray *)arg1 ;
@end

