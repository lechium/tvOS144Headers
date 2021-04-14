/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class NSData, NSDictionary;

@interface AVCameraCalibrationDataInternal : NSObject {

	SCD_Struct_AV27 intrinsicMatrix;
	CGSize intrinsicMatrixReferenceDimensions;
	SCD_Struct_AV28 extrinsicMatrix;
	float pixelSize;
	NSData* lensDistortionCoefficients;
	NSData* inverseLensDistortionCoefficients;
	CGPoint lensDistortionCenter;
	NSData* lensDistortionLookupTable;
	NSData* inverseLensDistortionLookupTable;
	NSDictionary* cameraCalibrationDataDictionary;

}
@end

