/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNSequencedRequestSupporting.h>

@protocol MLFeatureProvider;
@class NSString, MLModel, MLObjectBoundingBoxOutputDescription;

@interface VNCoreMLModel : NSObject <VNSequencedRequestSupporting> {

	NSString* _uuidStringForCacheIdentifier;
	int _modelType;
	unsigned _inputImageFormat;
	id<MLFeatureProvider> _featureProvider;
	MLModel* _model;
	NSString* _inputImageKey;
	NSString* _predictedFeatureKey;
	NSString* _predictedProbabilitiesKey;
	MLObjectBoundingBoxOutputDescription* _boundingBoxOutputDescription;
	unsigned long long _inputImageWidth;
	unsigned long long _inputImageHeight;
	unsigned long long _scenePrintRevision;
	NSString* _inputScenePrintKey;
	long long _inputScenePrintMLMultiArrayDataType;

}

@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachingIdentifier; 
@property (retain) MLModel * model;                                                                    //@synthesize model=_model - In the implementation block
@property (assign) int modelType;                                                                      //@synthesize modelType=_modelType - In the implementation block
@property (retain) NSString * inputImageKey;                                                           //@synthesize inputImageKey=_inputImageKey - In the implementation block
@property (retain) NSString * predictedFeatureKey;                                                     //@synthesize predictedFeatureKey=_predictedFeatureKey - In the implementation block
@property (readonly) NSString * predictedProbabilitiesKey;                                             //@synthesize predictedProbabilitiesKey=_predictedProbabilitiesKey - In the implementation block
@property (readonly) MLObjectBoundingBoxOutputDescription * boundingBoxOutputDescription;              //@synthesize boundingBoxOutputDescription=_boundingBoxOutputDescription - In the implementation block
@property (readonly) unsigned long long inputImageWidth;                                               //@synthesize inputImageWidth=_inputImageWidth - In the implementation block
@property (readonly) unsigned long long inputImageHeight;                                              //@synthesize inputImageHeight=_inputImageHeight - In the implementation block
@property (readonly) unsigned inputImageFormat;                                                        //@synthesize inputImageFormat=_inputImageFormat - In the implementation block
@property (readonly) unsigned long long scenePrintRevision;                                            //@synthesize scenePrintRevision=_scenePrintRevision - In the implementation block
@property (retain) NSString * inputScenePrintKey;                                                      //@synthesize inputScenePrintKey=_inputScenePrintKey - In the implementation block
@property (readonly) long long inputScenePrintMLMultiArrayDataType;                                    //@synthesize inputScenePrintMLMultiArrayDataType=_inputScenePrintMLMultiArrayDataType - In the implementation block
@property (nonatomic,copy) NSString * inputImageFeatureName; 
@property (nonatomic,retain) id<MLFeatureProvider> featureProvider;                                    //@synthesize featureProvider=_featureProvider - In the implementation block
+(id)modelForMLModel:(id)arg1 error:(id*)arg2 ;
-(MLModel *)model;
-(void)setModelType:(int)arg1 ;
-(int)modelType;
-(void)setModel:(MLModel *)arg1 ;
-(id)sequencedRequestPreviousObservationsKey;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(id)initWithMLModel:(id)arg1 error:(id*)arg2 ;
-(void)setInputImageFeatureName:(NSString *)arg1 ;
-(NSString *)inputImageFeatureName;
-(BOOL)setupInputImageFromModelDescription:(id)arg1 ;
-(void)_updateModelWithFlexibleImageConstraintUsingWidth:(long long)arg1 height:(long long)arg2 ;
-(id)predictWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictWithScenePrint:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id<NSObject><NSCopying>)cachingIdentifier;
-(id<MLFeatureProvider>)featureProvider;
-(void)setFeatureProvider:(id<MLFeatureProvider>)arg1 ;
-(NSString *)inputImageKey;
-(void)setInputImageKey:(NSString *)arg1 ;
-(NSString *)predictedFeatureKey;
-(void)setPredictedFeatureKey:(NSString *)arg1 ;
-(NSString *)predictedProbabilitiesKey;
-(MLObjectBoundingBoxOutputDescription *)boundingBoxOutputDescription;
-(unsigned long long)inputImageWidth;
-(unsigned long long)inputImageHeight;
-(unsigned)inputImageFormat;
-(unsigned long long)scenePrintRevision;
-(NSString *)inputScenePrintKey;
-(void)setInputScenePrintKey:(NSString *)arg1 ;
-(long long)inputScenePrintMLMultiArrayDataType;
@end

