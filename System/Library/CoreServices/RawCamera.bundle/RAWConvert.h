/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, NSArray, NSNumber, CIVector;

@interface RAWConvert : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSArray* inputNeutral;
	NSNumber* inputRange;
	NSNumber* inputFactor;
	NSNumber* inputCalibrationIlluminant1;
	NSNumber* inputCalibrationIlluminant2;
	NSArray* inputXYZtoCamera1;
	NSArray* inputXYZtoCamera2;
	NSArray* inputCameraCalibration1;
	NSArray* inputCameraCalibration2;
	NSArray* inputReduction1;
	NSArray* inputReduction2;
	NSArray* inputForwardMatrix1;
	NSArray* inputForwardMatrix2;
	NSNumber* inputShouldUseForwardMatrix;
	NSNumber* inputShouldRecoverHighlights;
	NSNumber* inputShouldLinearize;
	CIVector* inputBlacks;

}

@property (nonatomic,readonly) CCameraProfile* cameraProfile; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
-(void)setInputNeutral:(id)arg1 ;
-(id)blendFactor;
-(CCameraProfile*)cameraProfile;
-(id)outputMatrix;
-(CWhitePoint)neutralWhitePointWithProfile:(CCameraProfile*)arg1 ;
-(CMatrix*)matrixFromArray:(id)arg1 rowCount:(unsigned long long)arg2 columnCount:(unsigned long long)arg3 ;
-(id)inputNeutralXY;
@end

