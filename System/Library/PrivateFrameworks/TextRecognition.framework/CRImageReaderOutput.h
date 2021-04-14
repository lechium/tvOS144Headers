/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CRImageReaderOutput : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isTitle;
	int _confidence;
	float _baselineAngle;
	NSString* _type;
	NSString* _stringValue;
	NSArray* _candidates;
	NSArray* _components;
	CGPoint _topLeft;
	CGPoint _topRight;
	CGPoint _bottomRight;
	CGPoint _bottomLeft;
	CGSize _imageSize;
	CGRect _boundingBox;

}

@property (retain) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (assign) int confidence;                      //@synthesize confidence=_confidence - In the implementation block
@property (assign) float baselineAngle;                 //@synthesize baselineAngle=_baselineAngle - In the implementation block
@property (assign) CGSize imageSize;                    //@synthesize imageSize=_imageSize - In the implementation block
@property (assign) BOOL isTitle;                        //@synthesize isTitle=_isTitle - In the implementation block
@property (readonly) NSString * type;                   //@synthesize type=_type - In the implementation block
@property (readonly) CGRect boundingBox;                //@synthesize boundingBox=_boundingBox - In the implementation block
@property (readonly) CGPoint topLeft;                   //@synthesize topLeft=_topLeft - In the implementation block
@property (readonly) CGPoint topRight;                  //@synthesize topRight=_topRight - In the implementation block
@property (readonly) CGPoint bottomRight;               //@synthesize bottomRight=_bottomRight - In the implementation block
@property (readonly) CGPoint bottomLeft;                //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (readonly) NSArray * candidates;              //@synthesize candidates=_candidates - In the implementation block
@property (readonly) NSArray * components;              //@synthesize components=_components - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)outputWithType:(id)arg1 textFeature:(id)arg2 imageSize:(CGSize)arg3 isTitle:(BOOL)arg4 confidenceThresholdProvider:(id)arg5 ;
+(int)confidenceLevelForConfidenceScore:(double)arg1 confidenceThresholdProvider:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSString *)type;
-(int)confidence;
-(id)dataRepresentation;
-(NSArray *)components;
-(CGPoint)topLeft;
-(CGPoint)bottomLeft;
-(CGPoint)bottomRight;
-(CGPoint)topRight;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(CGSize)imageSize;
-(CGRect)boundingBox;
-(NSArray *)candidates;
-(void)setImageSize:(CGSize)arg1 ;
-(BOOL)isTitle;
-(void)setIsTitle:(BOOL)arg1 ;
-(id)cornersForCharacterRange:(NSRange)arg1 error:(id*)arg2 ;
-(float)baselineAngle;
-(void)setBaselineAngle:(float)arg1 ;
-(id)initWithType:(id)arg1 textFeature:(id)arg2 withCandidates:(BOOL)arg3 imageSize:(CGSize)arg4 isTitle:(BOOL)arg5 confidenceThresholdProvider:(id)arg6 ;
-(id)initWithType:(id)arg1 textFeature:(id)arg2 imageSize:(CGSize)arg3 isTitle:(BOOL)arg4 confidenceThresholdProvider:(id)arg5 ;
-(CGPoint)_rotatePointIfNeccessary:(CGPoint)arg1 anchor:(CGPoint)arg2 angle:(double)arg3 ;
-(id)encodingDataForString:(id)arg1 ;
-(id)encodingDataForOutputsArray:(id)arg1 ;
-(id)initV2WithDataRepresentation:(id)arg1 ;
-(id)initV1WithCoder:(id)arg1 ;
-(id)decodeStringFromData:(id)arg1 offset:(unsigned long long*)arg2 ;
-(BOOL)_checkValidRange:(NSRange)arg1 forDataLength:(unsigned long long)arg2 ;
-(id)decodeOutputsArrayFromData:(id)arg1 offset:(unsigned long long*)arg2 version:(long long)arg3 ;
-(BOOL)isEqualToImageReaderOutput:(id)arg1 ;
@end

