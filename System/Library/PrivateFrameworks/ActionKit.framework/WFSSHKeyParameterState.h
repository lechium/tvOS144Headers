/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/WFParameterState.h>

@class NSString;

@interface WFSSHKeyParameterState : NSObject <WFParameterState>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)processingValueClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializedRepresentation;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)containedVariables;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
@end

