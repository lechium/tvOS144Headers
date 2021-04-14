/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class INCodableAttribute, INStringLocalizer, NSString;

@interface WFCodableAttributeBackedSubstitutableState : WFVariableSubstitutableParameterState {

	INCodableAttribute* _codableAttribute;
	INStringLocalizer* _stringLocalizer;
	NSString* _readableTitle;
	NSString* _readableSubtitle;

}

@property (nonatomic,readonly) INCodableAttribute * codableAttribute;              //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,readonly) INStringLocalizer * stringLocalizer;                //@synthesize stringLocalizer=_stringLocalizer - In the implementation block
@property (nonatomic,copy) NSString * readableTitle;                               //@synthesize readableTitle=_readableTitle - In the implementation block
@property (nonatomic,copy) NSString * readableSubtitle;                            //@synthesize readableSubtitle=_readableSubtitle - In the implementation block
+(id)processingValueClasses;
-(id)serializedRepresentation;
-(INCodableAttribute *)codableAttribute;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(INStringLocalizer *)stringLocalizer;
-(NSString *)readableTitle;
-(NSString *)readableSubtitle;
-(id)initWithValue:(id)arg1 codableAttribute:(id)arg2 stringLocalizer:(id)arg3 ;
-(void)setReadableTitle:(NSString *)arg1 ;
-(void)setReadableSubtitle:(NSString *)arg1 ;
@end

