/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFVariableSerialization.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFVariableString, WFPropertyListParameterValue, NSString;

@interface WFDictionaryParameterKeyValuePair : NSObject <WFVariableSerialization, NSCopying> {

	WFVariableString* _key;
	WFPropertyListParameterValue* _value;

}

@property (nonatomic,readonly) WFVariableString * key;                            //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) WFPropertyListParameterValue * value;              //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(WFPropertyListParameterValue *)value;
-(WFVariableString *)key;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(id)serializedRepresentation;
-(id)containedVariables;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)getProcessedPair:(/*^block*/id)arg1 context:(id)arg2 userInputRequiredHandler:(/*^block*/id)arg3 ;
@end

