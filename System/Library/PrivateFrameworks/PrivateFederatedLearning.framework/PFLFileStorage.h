/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PFLFileStorage : NSObject
+(void)initialize;
+(BOOL)fileExistsAtPath:(id)arg1 ;
+(id)_fileManager;
+(BOOL)removeFileAtPath:(id)arg1 ;
+(id)savedStateSave:(id)arg1 forTaskId:(id)arg2 ;
+(id)_localCacheModelsPath;
+(id)_localCacheSavedStatesPath;
+(id)_localCacheUploadResultsPath;
+(id)_listFilesAtPath:(id)arg1 ;
+(id)_modelFileName:(id)arg1 ;
+(id)_compiledModelFileName:(id)arg1 ;
+(BOOL)savedStateRemoveForTaskId:(id)arg1 ;
+(id)_savedStateFileName:(id)arg1 ;
+(BOOL)uploadResultsRemoveForTaskId:(id)arg1 ;
+(id)_uploadResultsFileName:(id)arg1 ;
+(id)_modelsFolder;
+(id)_uploadResultsFolder;
+(id)_savedStatesFolder;
+(void)cleanUnusedResourcesExceptActiveModels:(id)arg1 activeTasks:(id)arg2 ;
+(id)modelMoveToLocalCache:(id)arg1 from:(id)arg2 ;
+(id)modelRetrieveForModelId:(id)arg1 ;
+(BOOL)modelExistsForModelId:(id)arg1 ;
+(id)compiledModelMoveToLocalCache:(id)arg1 from:(id)arg2 ;
+(id)compiledModelRetrieveForModelId:(id)arg1 ;
+(BOOL)compiledModelExistsForModelId:(id)arg1 ;
+(BOOL)compiledModelRemoveForModelId:(id)arg1 ;
+(id)savedStateRetrieveForTaskId:(id)arg1 ;
+(BOOL)savedStateExistsForTaskId:(id)arg1 ;
+(id)uploadResultsSave:(id)arg1 forTaskId:(id)arg2 ;
+(id)uploadResultsRetrieveForTaskId:(id)arg1 ;
+(BOOL)uploadResultsExistsForTaskId:(id)arg1 ;
@end

