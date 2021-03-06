/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription, NSDictionary, MLModelConfiguration;

@interface _MLVNDetectionPrintCustomModel : NSObject <MLCustomModel> {

	MLModelDescription* _modelDescription;
	unsigned long long _detectionPrintRequestRevision;
	NSDictionary* _expectedOutputShapeV1;
	MLModelConfiguration* _configuration;

}

@property (nonatomic,readonly) MLModelDescription * modelDescription;                         //@synthesize modelDescription=_modelDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long detectionPrintRequestRevision;              //@synthesize detectionPrintRequestRevision=_detectionPrintRequestRevision - In the implementation block
@property (nonatomic,readonly) NSDictionary * expectedOutputShapeV1;                          //@synthesize expectedOutputShapeV1=_expectedOutputShapeV1 - In the implementation block
@property (nonatomic,readonly) MLModelConfiguration * configuration;                          //@synthesize configuration=_configuration - In the implementation block
-(MLModelConfiguration *)configuration;
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(id)featureValueFromDetectionPrint:(id)arg1 featureName:(id)arg2 ;
-(unsigned long long)detectionPrintRequestRevision;
-(NSDictionary *)expectedOutputShapeV1;
@end

