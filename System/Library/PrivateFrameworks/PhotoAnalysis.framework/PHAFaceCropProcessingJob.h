/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>
#import <libobjc.A.dylib/PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate.h>

@class NSOperationQueue, PHAFaceCropProcessingJobProcessFaceCropsOperation, NSString;

@interface PHAFaceCropProcessingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> {

	NSOperationQueue* _operationQueue;
	PHAFaceCropProcessingJobProcessFaceCropsOperation* _processingOperation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)completionScore;
-(BOOL)startJob:(id*)arg1 ;
-(BOOL)stopJob:(id*)arg1 ;
-(void)operation:(id)arg1 didProcessFaceCrop:(id)arg2 withError:(id)arg3 ;
-(id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2 dirtyFaceCrops:(id)arg3 ;
@end

