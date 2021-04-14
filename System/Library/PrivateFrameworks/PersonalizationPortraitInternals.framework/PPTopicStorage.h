/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PPSQLDatabase, PPDKStorage, PPRecordStorageHelper, PPSourceStorage, NSObject;

@interface PPTopicStorage : NSObject {

	PPSQLDatabase* _db;
	PPDKStorage* _dkStorage;
	id _deletionObserver;
	PPRecordStorageHelper* _storageHelper;
	PPSourceStorage* _sourceStorage;
	NSObject*<OS_dispatch_queue> _populateDatabaseQueue;

}
+(id)_loadTrieFromLocalAsset:(id)arg1 ;
+(double)_scoreTopicWithInitialScore:(double)arg1 decayRate:(double)arg2 extractionDate:(id)arg3 scoringDate:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)iterTopicRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithDatabase:(id)arg1 maxRecords:(unsigned)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(BOOL)arg4 ;
-(id)_createRecordWithStatement:(id)arg1 txnWitness:(id)arg2 ;
-(BOOL)_shouldSuppressRepeatedImpressions:(id)arg1 ;
-(id)decayedFeedbackCountsForClusterIdentifier:(id)arg1 ;
-(BOOL)decayFeedbackCountsWithDecayRate:(double)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
-(id)_deletionQueue;
-(void)_asyncProcessNewDKEventDeletions;
-(void)processNewDKEventDeletions;
-(void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned)arg1 txnWitness:(id)arg2 ;
-(void)_asyncPopulateDatabaseFromDKEventsIfNecessary;
-(void)_importDKEventsWithLimit:(unsigned)arg1 remoteEventsOnly:(BOOL)arg2 isComplete:(BOOL*)arg3 ;
-(void)_importDKEventsWithShouldContinueBlock:(unsigned)arg1 remoteEventsOnly:(BOOL)arg2 isComplete:(BOOL*)arg3 shouldContinueBlock:(/*^block*/id)arg4 ;
-(void)exportRecordsToDKWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(id)_generateExportRowIdsWithBatchSize:(unsigned)arg1 isComplete:(BOOL*)arg2 ;
-(void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(void)fixupDKEventsWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(void)fixupDKEventsMetadataWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(PASDBIterAction_)_populateEvents:(id)arg1 statement:(id)arg2 txnWitness:(id)arg3 ;
-(void)disableSyncForBundleIds:(id)arg1 ;
-(unsigned)duetReadBatchSize;
-(unsigned)duetWriteBatchSize;
-(double)duetWriteBatchInterval;
-(id)sourceStatsWithExcludedAlgorithms:(id)arg1 ;
-(id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2 ;
-(id)clusterIdentifiersExistingBeforeDate:(id)arg1 ;
-(unsigned)uniqueClusterIdentifierCount;
-(id)thirdPartyBundleIdsFromToday;
-(id)lastDonationTimeForSourcesBeforeDate:(id)arg1 ;
-(id)_updatePreexistingTopicsMatchingTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 txnWitness:(id)arg4 ;
-(PASDBIterAction_)_populateUpdates:(id)arg1 statement:(id)arg2 source:(id)arg3 weightMultiplier:(double)arg4 topicToScoredTopic:(id)arg5 ;
-(BOOL)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 exactMatchesInSourceText:(id)arg7 error:(id*)arg8 ;
-(BOOL)_donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 exactMatchesInSourceText:(id)arg7 txnWitness:(id)arg8 ;
-(void)_prepareDonationStatement:(id)arg1 scoredTopic:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 occurrencesInSource:(unsigned short)arg7 algorithmResultPosition:(unsigned short)arg8 algorithmResultCount:(unsigned short)arg9 exactMatchInSourceText:(BOOL)arg10 weightMultiplier:(double)arg11 sourceRowId:(long long)arg12 ;
-(BOOL)donateTopicFeedback:(id)arg1 ;
-(BOOL)deleteAllTopicsOlderThanDate:(id)arg1 atLeastOneTopicRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg1 atLeastOneTopicRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg1 algorithm:(unsigned long long)arg2 atLeastOneTopicRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneTopicRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned long long)arg3 atLeastOneTopicRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneTopicRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned long long)arg3 atLeastOneTopicRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 atLeastOneTopicRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 algorithm:(unsigned long long)arg2 atLeastOneTopicRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneTopicRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 algorithm:(unsigned long long)arg4 atLeastOneTopicRemoved:(BOOL*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7 ;
-(BOOL)deleteAllTopicFeedbackCountRecordsOlderThanDate:(id)arg1 ;
-(BOOL)pruneOrphanedTopicFeedbackCountRecordsWithLimit:(long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(BOOL*)arg4 ;
-(void)importRemotelyGeneratedTopicDKEventsWithLimit:(unsigned)arg1 isComplete:(BOOL*)arg2 shouldContinueBlock:(/*^block*/id)arg3 ;
-(void)_dkEventImportToDatabaseWithEvent:(id)arg1 eventUUIDBlob:(id)arg2 txnWitness:(id)arg3 ;
@end

