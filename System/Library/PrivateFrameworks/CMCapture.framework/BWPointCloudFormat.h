/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFormat.h>
#import <libobjc.A.dylib/BWDataBufferBackedFormat.h>

@class NSDictionary, NSString;

@interface BWPointCloudFormat : BWFormat <BWDataBufferBackedFormat> {

	unsigned long long _maxPoints;
	unsigned long long _dataBufferSize;
	unsigned _dataFormat;
	NSDictionary* _dataBufferAttributes;

}

@property (nonatomic,readonly) unsigned long long maxPoints;                     //@synthesize maxPoints=_maxPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long dataBufferSize;                //@synthesize dataBufferSize=_dataBufferSize - In the implementation block
@property (nonatomic,readonly) unsigned dataFormat;                              //@synthesize dataFormat=_dataFormat - In the implementation block
@property (nonatomic,readonly) NSDictionary * dataBufferAttributes;              //@synthesize dataBufferAttributes=_dataBufferAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)formatByResolvingRequirements:(id)arg1 ;
+(id)formatByResolvingRequirements:(id)arg1 printErrors:(BOOL)arg2 ;
+(id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)dealloc;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(unsigned)mediaType;
-(unsigned)dataFormat;
-(NSDictionary *)dataBufferAttributes;
-(unsigned long long)dataBufferSize;
-(unsigned long long)maxPoints;
-(id)_initWithResolvedFormatRequirements:(id)arg1 ;
@end

