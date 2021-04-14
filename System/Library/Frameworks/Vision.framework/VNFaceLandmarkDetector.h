/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>
#import <libobjc.A.dylib/VNDetectorKeyProviding.h>

@class NSString;

@interface VNFaceLandmarkDetector : VNEspressoModelFileBasedDetector <VNDetectorKeyProviding> {

	shared_ptr<vision::mod::LandmarkAttributes>* _faceAttributesPupilRefiner;
	BOOL _modelFilesWereMemmapped;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
+(Geometry2D_point2D_)computeCentroidUsingPoints:(const Geometry2D_point2D_*)arg1 indicies:(const int*)arg2 numberOfIndicies:(int)arg3 ;
+(const LandmarkDetector_faceMeshParts_*)landmarksMeshPartsForConstellation:(unsigned long long)arg1 ;
+(const vector<int, std::__1::allocator<int> >*)allLandmarksPointsIndexesForConstellation:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadRefinersAndReturnError:(id*)arg1 ;
-(CVBufferRef)createLumaPixelBufferFrom:(id)arg1 forFaceBBox:(Geometry2D_rect2D_)arg2 initializeVImage:(vImage_Buffer*)arg3 initializeRect2D:(Geometry2D_rect2D_*)arg4 initializeIgnoreCropAndScaleFlag:(BOOL*)arg5 initializeLumaScaleFromOriginal:(float*)arg6 options:(id)arg7 error:(id*)arg8 ;
-(void)calculatePupilLocationAndUpdateLandmarkPoints:(vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> >*)arg1 ;
-(id)computeLandmarksScoreOnImage:(const vImage_Buffer*)arg1 withFaceBoundingBox:(const Geometry2D_rect2D_*)arg2 andLandmarks:(const void*)arg3 error:(id*)arg4 ;
-(BOOL)postprocessLandmarkResultsForLandmarks:(const vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> >*)arg1 imageBuffer:(id)arg2 outputFace:(id)arg3 options:(id)arg4 warningRecorder:(id)arg5 error:(id*)arg6 ;
-(CGRect)normalizedFaceBBoxForLandmarks:(id)arg1 ;
-(BOOL)detectBlinkOnFaceImage:(const vImage_Buffer*)arg1 faceObservation:(id)arg2 lumaRec2DInImageCoordinates:(Geometry2D_rect2D_*)arg3 landmarks:(const void*)arg4 warningRecorder:(id)arg5 error:(id*)arg6 ;
@end
