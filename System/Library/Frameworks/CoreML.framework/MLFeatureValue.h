/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSObject, NSString, MLMultiArray, NSDictionary, MLSequence;

@interface MLFeatureValue : NSObject <NSCopying, NSSecureCoding> {

	BOOL _undefined;
	long long _type;
	id _value;
	NSObject* _objectValue;

}

@property (retain) id value;                                                   //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSObject * objectValue;                           //@synthesize objectValue=_objectValue - In the implementation block
@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (getter=isUndefined,nonatomic,readonly) BOOL undefined;              //@synthesize undefined=_undefined - In the implementation block
@property (nonatomic,readonly) long long int64Value; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,readonly) MLMultiArray * multiArrayValue; 
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,readonly) CVBufferRef imageBufferValue; 
@property (nonatomic,readonly) MLSequence * sequenceValue; 
+(BOOL)supportsSecureCoding;
+(id)featureValueWithPixelBuffer:(CVBufferRef)arg1 ;
+(id)featureValueWithMultiArray:(id)arg1 ;
+(id)undefinedFeatureValueWithType:(long long)arg1 ;
+(id)featureValueWithInt64:(long long)arg1 ;
+(id)featureValueWithDouble:(double)arg1 ;
+(id)featureValueWithString:(id)arg1 ;
+(id)featureValueWithSequence:(id)arg1 ;
+(id)featureValueWithDictionary:(id)arg1 error:(id*)arg2 ;
+(id)featureValueWithStringKeyDictionary:(id)arg1 ;
+(id)featureValueWithInt64KeyDictionary:(id)arg1 ;
+(id)featureValueOfType:(long long)arg1 fromObject:(id)arg2 error:(id*)arg3 ;
+(id)featureValueWithImageAtURL:(id)arg1 constraint:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(CGRect)cropRectFromOptions:(id)arg1 ;
+(unsigned long long)visionCropAndScaleOptionFromOptions:(id)arg1 ;
+(id)featureValueWithCGImage:(CGImageRef)arg1 constraint:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)featureValueWithImageAtURL:(id)arg1 pixelsWide:(long long)arg2 pixelsHigh:(long long)arg3 pixelFormatType:(unsigned)arg4 options:(id)arg5 error:(id*)arg6 ;
+(id)featureValueWithCGImage:(CGImageRef)arg1 pixelsWide:(long long)arg2 pixelsHigh:(long long)arg3 pixelFormatType:(unsigned)arg4 options:(id)arg5 error:(id*)arg6 ;
+(id)featureValueWithImageAtURL:(id)arg1 orientation:(unsigned)arg2 pixelsWide:(long long)arg3 pixelsHigh:(long long)arg4 pixelFormatType:(unsigned)arg5 options:(id)arg6 error:(id*)arg7 ;
+(id)featureValueWithImageAtURL:(id)arg1 orientation:(unsigned)arg2 constraint:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)featureValueWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 pixelsWide:(long long)arg3 pixelsHigh:(long long)arg4 pixelFormatType:(unsigned)arg5 options:(id)arg6 error:(id*)arg7 ;
+(id)featureValueWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 constraint:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(double)doubleValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)type;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSDictionary *)dictionaryValue;
-(id)debugQuickLookObject;
-(CVBufferRef)imageBufferValue;
-(MLMultiArray *)multiArrayValue;
-(BOOL)isUndefined;
-(id)initWithValue:(id)arg1 type:(long long)arg2 ;
-(NSObject *)objectValue;
-(id)initWithUndefinedValueAndType:(long long)arg1 ;
-(long long)int64Value;
-(MLSequence *)sequenceValue;
-(BOOL)isEqualToFeatureValue:(id)arg1 ;
-(id)getFeatureSize:(id*)arg1 ;
-(id)getFeatureSize:(id*)arg1 ndArrayMode:(BOOL)arg2 ;
-(void)setObjectValue:(NSObject *)arg1 ;
@end

