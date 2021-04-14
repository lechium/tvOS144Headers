/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/RLMObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, RLMLinkingObjects;

@interface WFRealmWorkflowIcon : RLMObject <NSCopying> {

	long long _backgroundColorValue;
	long long _glyphNumber;
	NSData* _customImageData;
	RLMLinkingObjects* _workflows;

}

@property (assign,nonatomic) long long backgroundColorValue;              //@synthesize backgroundColorValue=_backgroundColorValue - In the implementation block
@property (assign,nonatomic) long long glyphNumber;                       //@synthesize glyphNumber=_glyphNumber - In the implementation block
@property (nonatomic,copy) NSData * customImageData;                      //@synthesize customImageData=_customImageData - In the implementation block
@property (readonly) RLMLinkingObjects * workflows;                       //@synthesize workflows=_workflows - In the implementation block
+(id)className;
+(id)requiredProperties;
+(id)defaultPropertyValues;
+(id)linkingObjectsProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)backgroundColorValue;
-(RLMLinkingObjects *)workflows;
-(NSData *)customImageData;
-(void)setCustomImageData:(NSData *)arg1 ;
-(void)setGlyphNumber:(long long)arg1 ;
-(void)setBackgroundColorValue:(long long)arg1 ;
-(long long)glyphNumber;
@end

