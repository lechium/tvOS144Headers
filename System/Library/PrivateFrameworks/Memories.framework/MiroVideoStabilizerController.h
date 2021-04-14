/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class Project;

@interface MiroVideoStabilizerController : NSObject {

	Project* _project;

}

@property (nonatomic,retain) Project * project;              //@synthesize project=_project - In the implementation block
+(id)stabilizerFactory;
+(BOOL)testStabilizationAgainWith:(id)arg1 ;
-(Project *)project;
-(void)setProject:(Project *)arg1 ;
-(void)writeStabilizationDataMovie:(id)arg1 timedStabConfigs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)requestStablizationFromInertiaCam:(id)arg1 assetFPS:(float)arg2 cropFraction:(float)arg3 clip:(id)arg4 ;
-(id)candidateAssetsforStabilizationFromProject;
-(id)candidateAssetsFromAssetCollection:(id)arg1 ;
-(id)generateTestMADRecipesForAssets:(id)arg1 ;
-(id)timedMetadataFromFrameInstructions:(id)arg1 withClip:(id)arg2 ;
-(id)proVideoTimedObjectMapFromRecipes:(id)arg1 ;
-(void)writeStabilizationDataMoviesToFolder:(id)arg1 assetIDMetadataTimedObjects:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)fetchAndFormatStabilizationMetadata;
-(id)computeInertiaCamL1Stabilization;
-(id)requestMediaAnalysisStabilizationService;
-(BOOL)canGenerateTestMADRecipesForAssets:(id)arg1 ;
-(BOOL)test_inputMADRecipeToPVTimedStabilizationConfigForAssets:(id)arg1 ;
-(BOOL)test_cleanApertureRectBasisMatchesPhotosForAssets:(id)arg1 ;
-(BOOL)test_applyHomographyTransformForAssets:(id)arg1 ;
-(BOOL)test_deNormalizedCropRect;
@end
