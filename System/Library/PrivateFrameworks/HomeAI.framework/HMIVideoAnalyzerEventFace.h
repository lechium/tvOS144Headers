/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoAnalyzerEvent.h>

@class HMIFaceRecognition, NSNumber;

@interface HMIVideoAnalyzerEventFace : HMIVideoAnalyzerEvent {

	HMIFaceRecognition* _faceRecognition;
	NSNumber* _yaw;
	NSNumber* _roll;

}

@property (readonly) NSNumber * yaw;                                    //@synthesize yaw=_yaw - In the implementation block
@property (readonly) NSNumber * roll;                                   //@synthesize roll=_roll - In the implementation block
@property (readonly) HMIFaceRecognition * faceRecognition;              //@synthesize faceRecognition=_faceRecognition - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(NSNumber *)yaw;
-(NSNumber *)roll;
-(id)attributeDescriptions;
-(HMIFaceRecognition *)faceRecognition;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 yaw:(id)arg3 roll:(id)arg4 faceRecognition:(id)arg5 userInfo:(id)arg6 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 faceRecognition:(id)arg3 ;
@end

