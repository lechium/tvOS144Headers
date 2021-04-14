/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSDictionary, NSNumber, NSString;

@interface MLLoaderEvent : NSObject <CUTCoreAnalyticsMetric> {

	NSNumber* _modelType;
	NSNumber* _modelLoadTime;
	NSString* _modelVersion;
	NSString* _compilerVersion;
	NSNumber* _computeUnits;
	NSNumber* _modelOrigin;
	NSNumber* _modelLoadError;
	NSString* _bundleIdentifier;
	NSString* _modelName;
	NSNumber* _firstPartyExecutable;
	NSString* _modelHash;
	NSString* _nnModelNetHash;
	NSString* _nnModelShapeHash;
	NSString* _nnModelWeightsHash;
	NSNumber* _modelDimension;

}

@property (nonatomic,copy) NSString * modelHash;                           //@synthesize modelHash=_modelHash - In the implementation block
@property (nonatomic,copy) NSString * nnModelNetHash;                      //@synthesize nnModelNetHash=_nnModelNetHash - In the implementation block
@property (nonatomic,copy) NSString * nnModelShapeHash;                    //@synthesize nnModelShapeHash=_nnModelShapeHash - In the implementation block
@property (nonatomic,copy) NSString * nnModelWeightsHash;                  //@synthesize nnModelWeightsHash=_nnModelWeightsHash - In the implementation block
@property (nonatomic,copy) NSNumber * modelDimension;                      //@synthesize modelDimension=_modelDimension - In the implementation block
@property (nonatomic,copy) NSNumber * modelType;                           //@synthesize modelType=_modelType - In the implementation block
@property (nonatomic,copy) NSNumber * modelLoadTime;                       //@synthesize modelLoadTime=_modelLoadTime - In the implementation block
@property (nonatomic,copy) NSString * modelVersion;                        //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,copy) NSString * compilerVersion;                     //@synthesize compilerVersion=_compilerVersion - In the implementation block
@property (nonatomic,copy) NSNumber * computeUnits;                        //@synthesize computeUnits=_computeUnits - In the implementation block
@property (nonatomic,copy) NSNumber * modelOrigin;                         //@synthesize modelOrigin=_modelOrigin - In the implementation block
@property (nonatomic,copy) NSNumber * modelLoadError;                      //@synthesize modelLoadError=_modelLoadError - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * modelName;                           //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,copy) NSNumber * firstPartyExecutable;                //@synthesize firstPartyExecutable=_firstPartyExecutable - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(NSDictionary *)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setModelType:(NSNumber *)arg1 ;
-(NSNumber *)modelType;
-(void)setModelVersion:(NSString *)arg1 ;
-(NSString *)modelVersion;
-(NSNumber *)computeUnits;
-(void)setComputeUnits:(NSNumber *)arg1 ;
-(void)extractAndSetModelDetailsFromArchive:(MLModelInputArchiver*)arg1 ;
-(id)numberFromCString:(const char*)arg1 ;
-(NSNumber *)modelLoadTime;
-(void)setModelLoadTime:(NSNumber *)arg1 ;
-(NSString *)compilerVersion;
-(void)setCompilerVersion:(NSString *)arg1 ;
-(NSNumber *)modelOrigin;
-(void)setModelOrigin:(NSNumber *)arg1 ;
-(NSNumber *)modelLoadError;
-(void)setModelLoadError:(NSNumber *)arg1 ;
-(NSString *)modelName;
-(void)setModelName:(NSString *)arg1 ;
-(NSNumber *)firstPartyExecutable;
-(void)setFirstPartyExecutable:(NSNumber *)arg1 ;
-(NSString *)modelHash;
-(void)setModelHash:(NSString *)arg1 ;
-(NSString *)nnModelNetHash;
-(void)setNnModelNetHash:(NSString *)arg1 ;
-(NSString *)nnModelShapeHash;
-(void)setNnModelShapeHash:(NSString *)arg1 ;
-(NSString *)nnModelWeightsHash;
-(void)setNnModelWeightsHash:(NSString *)arg1 ;
-(NSNumber *)modelDimension;
-(void)setModelDimension:(NSNumber *)arg1 ;
@end

