/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNPixelBufferObservation.h>

@class VNImageSignature, LKTOpticalFlow;

@interface VNOpticalFlowObservation : VNPixelBufferObservation {

	VNImageSignature* _targetImageSignature;
	LKTOpticalFlow* _opticalFlow;

}

@property (nonatomic,retain) VNImageSignature * targetImageSignature;              //@synthesize targetImageSignature=_targetImageSignature - In the implementation block
@property (nonatomic,retain) LKTOpticalFlow * opticalFlow;                         //@synthesize opticalFlow=_opticalFlow - In the implementation block
-(VNImageSignature *)targetImageSignature;
-(void)setTargetImageSignature:(VNImageSignature *)arg1 ;
-(LKTOpticalFlow *)opticalFlow;
-(void)setOpticalFlow:(LKTOpticalFlow *)arg1 ;
@end

