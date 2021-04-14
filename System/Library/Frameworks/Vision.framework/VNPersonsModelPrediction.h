/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class VNFaceObservation;

@interface VNPersonsModelPrediction : NSObject <NSCopying, NSSecureCoding> {

	VNFaceObservation* _faceObservation;
	id<NSObject><NSCopying><NSSecureCoding> _predictedPersonUniqueIdentifier;
	float _confidence;

}

@property (nonatomic,readonly) VNFaceObservation * faceObservation;                                                       //@synthesize faceObservation=_faceObservation - In the implementation block
@property (nonatomic,copy,readonly) id<NSObject><NSCopying><NSSecureCoding> predictedPersonUniqueIdentifier;              //@synthesize predictedPersonUniqueIdentifier=_predictedPersonUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) float confidence;                                                                          //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)confidence;
-(id)initWithFaceObservation:(id)arg1 predictedPersonUniqueIdentifier:(id)arg2 confidence:(float)arg3 ;
-(VNFaceObservation *)faceObservation;
-(id<NSObject><NSCopying><NSSecureCoding>)predictedPersonUniqueIdentifier;
@end

