/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PVPersistenceDelegate <NSObject>
@property (assign,nonatomic) unsigned faceAlgorithmUmbrellaVersion; 
@property (assign,nonatomic) unsigned sceneAlgorithmUmbrellaVersion; 
@required
-(unsigned long long)countOfClusteringEligibleFaces;
-(BOOL)deleteEmptyGroupsAndReturnError:(id*)arg1;
-(BOOL)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 canceler:(id)arg3 error:(id*)arg4;
-(BOOL)cleanupUngroupedFacesWithNonZeroClusterSequenceNumbersWithCanceler:(id)arg1 error:(id*)arg2;
-(unsigned long long)countOfFaces;
-(unsigned long long)countOfUnclusteredClusteringEligibleFaces;
-(unsigned long long)countOfClusteredFaces;
-(id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id*)arg1;
-(id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned)arg2 groupingIdentifiers:(id)arg3;
-(id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned)arg2;
-(id)facesFromAsset:(id)arg1;
-(id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg1 canceler:(id)arg2 error:(id*)arg3;
-(BOOL)persistFaces:(id)arg1 deleteFaces:(id)arg2 forAsset:(id)arg3 persistedFaces:(id*)arg4 error:(id*)arg5;
-(BOOL)ungroupFaceClusterSequenceNumbers:(id)arg1 batchSizeForUnclusteringFaces:(unsigned long long)arg2 canceler:(id)arg3 error:(id*)arg4;
-(BOOL)cleanupGroupedFacesWithClusterSequenceNumberSetToZeroWithCanceler:(id)arg1 error:(id*)arg2;
-(BOOL)updateFaceprint:(id)arg1 ofPersistedFace:(id)arg2 error:(id*)arg3;
-(BOOL)persistGeneratedFaceCrops:(id)arg1 error:(id*)arg2;
-(id)dirtyFaceCropsWithLimit:(unsigned long long)arg1;
-(BOOL)clearDirtyStateOnFaceCrops:(id)arg1 error:(id*)arg2;
-(id)associateFace:(id)arg1 withFaceCrop:(id)arg2 error:(id*)arg3;
-(id)faceAssociatedWithFaceCrop:(id)arg1;
-(id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id*)arg2;
-(BOOL)persistChangesToAlgorithmicFaceGroups:(id)arg1 faceCSNByLocalIdentifierForNewlyClusteredFaces:(id)arg2 faceCSNsOfUnclusteredFaces:(id)arg3 localIdentifiersOfUnclusteredFaces:(id)arg4 persistenceCompletionBlock:(/*^block*/id)arg5 canceler:(id)arg6 error:(id*)arg7;
-(BOOL)resetLibraryClustersWithCanceler:(id)arg1 error:(id*)arg2;
-(BOOL)recordNeedToPersonBuildOnFaceGroupContainingFace:(id)arg1 error:(id*)arg2;
-(BOOL)needsPersonBuilding;
-(void)buildPersonsWithFaceClusterer:(id)arg1 keyFaceUpdateBlock:(/*^block*/id)arg2 canceler:(id)arg3 context:(id)arg4 extendTimeoutBlock:(/*^block*/id)arg5;
-(id)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(id)arg1 faceClusterer:(id)arg2 canceler:(id)arg3 context:(id)arg4 error:(id*)arg5;
-(void)logPVErrorMessage:(id)arg1;
-(void)logPVWarningMessage:(id)arg1;
-(void)logPVInfoMessage:(id)arg1;
-(void)logPVDebugMessage:(id)arg1;
-(unsigned)faceAlgorithmUmbrellaVersion;
-(void)setFaceAlgorithmUmbrellaVersion:(unsigned)arg1;
-(unsigned)sceneAlgorithmUmbrellaVersion;
-(void)setSceneAlgorithmUmbrellaVersion:(unsigned)arg1;

@end

