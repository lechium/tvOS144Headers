/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _PSBehaviorRuleRankingUtilities : NSObject
+(id)loadMLModelConfigurationWithConfigDict:(id)arg1 ;
+(id)getAdaptedModelRecipeVersionFilePath;
+(id)getAdaptedCompiledMLModelPath;
+(id)loadMLModel:(id)arg1 modelConfig:(id)arg2 ;
+(id)getTrialCompiledMLModelPath;
+(id)getDeployedCompiledMLModelPath;
+(id)reformatFeaturesInFeaturizedBehaviorRuleArray:(id)arg1 ;
+(id)batchPredictWithMLModel:(id)arg1 featureArrayDict:(id)arg2 ;
+(id)batchPredictWithAdaptedMLModel:(id)arg1 psConfigForAdaptableModel:(id)arg2 featurizedRules:(id)arg3 ;
+(id)loadAdaptableModelConfig:(id)arg1 ;
+(id)getTrialCompiledAdaptableMLModelPath;
+(BOOL)removeFolderAtPath:(id)arg1 ;
+(id)unzipFileWithPath:(id)arg1 toFileName:(id)arg2 toFolderPath:(id)arg3 ;
+(id)getDeployedAdaptableCompiledMLModelPath;
+(id)getZippedDefaultAdaptableModelPath;
+(id)getIntermediateAdaptableCompiledMLModel;
+(id)getArchivedDefaultAdaptableModelPath;
+(id)reformatFeaturesInFeatureDictArray:(id)arg1 ;
+(id)predictWithMLModel:(id)arg1 featureDictArray:(id)arg2 ;
+(id)batchPredictWithAdaptedMLModel:(id)arg1 psConfigForAdaptableModel:(id)arg2 featureDictArray:(id)arg3 ;
+(BOOL)copyFileFromURL:(id)arg1 toURL:(id)arg2 ;
+(id)compileMLModelAtPath:(id)arg1 ;
+(BOOL)copyZippedAdaptableModel:(id)arg1 ;
+(BOOL)loadDeployedAdaptableModelUnderDirectory:(id)arg1 ;
@end

