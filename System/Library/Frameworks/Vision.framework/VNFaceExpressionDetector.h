/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNFaceExpressionDetector : VNDetector {

	shared_ptr<vision::mod::LandmarkAttributes>* m_FaceAttributesImpl;
	BOOL _modelFilesWereMemmapped;

}
+(int)expressionTypeFromString:(id)arg1 ;
+(id)createExpressionAndConfidencesDictionaryFromScores:(id)arg1 ;
+(id)createExpressionDetectionDictionaryFromScores:(id)arg1 ;
-(void)dealloc;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
@end

