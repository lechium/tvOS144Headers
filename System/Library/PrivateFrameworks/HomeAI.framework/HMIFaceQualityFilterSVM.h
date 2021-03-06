/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class MLModel, NSString;

@interface HMIFaceQualityFilterSVM : HMFObject <HMFLogging> {

	MLModel* _mlModel;
	MLModel* _scalerModel;

}

@property (readonly) MLModel * mlModel;                             //@synthesize mlModel=_mlModel - In the implementation block
@property (readonly) MLModel * scalerModel;                         //@synthesize scalerModel=_scalerModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)dataScalerInputName;
+(id)dataScalerOutputName;
+(id)svmInputName;
+(id)svmOutputName;
+(id)modelPathForResource:(id)arg1 ;
+(id)defaultRecognizabilityModelPath;
+(id)defaultRecognizabilityDataScalerPath;
+(id)defaultAestheticQualityModelPath;
+(id)defaultAestheticQualityDataScalerPath;
-(MLModel *)mlModel;
-(MLModel *)scalerModel;
-(id)initWithModelPath:(id)arg1 dataScalerPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)predict:(id)arg1 output:(double*)arg2 error:(id*)arg3 ;
@end

