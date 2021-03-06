/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMDPersistence/IMDPersistence-Structs.h>
@class NSMutableOrderedSet;

@interface IMDCoreSpotlightManager : NSObject {

	NSMutableOrderedSet* _blocklistMessageGUIDs;

}

@property (nonatomic,retain) NSMutableOrderedSet * blocklistMessageGUIDs;              //@synthesize blocklistMessageGUIDs=_blocklistMessageGUIDs - In the implementation block
+(id)sharedInstance;
+(id)chatStyleCustomKey;
-(void)dealloc;
-(id)searchableIndex;
-(void)deleteChatSearchableItemForChatGUID:(id)arg1 ;
-(id)newSearchableItemsForMessageGUID:(id)arg1 reindexing:(BOOL)arg2 ;
-(void)setNeedsMessageReindexingWithCompletion:(/*^block*/id)arg1 ;
-(void)indexNextMessageBatchIfNeeded:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableOrderedSet *)blocklistMessageGUIDs;
-(id)newSearchableItemsForMessage:(IMDMessageRecordStruct*)arg1 reindexing:(BOOL)arg2 ;
-(void)setMessageGUIDUnderScrutiny:(id)arg1 ;
-(id)_spotlightIndexingQueue;
-(void)_postProcessIndexingForItem:(id)arg1 chatDictionary:(id)arg2 isReindexing:(BOOL)arg3 ;
-(void)clearMessageGUIDFromScrutiny:(id)arg1 ;
-(id)newChatSearchableItemForChatDictionary:(id)arg1 optionalLastMessageDate:(id)arg2 ;
-(id)_donationManager;
-(void)_updateItem:(id)arg1 withGeoMapItem:(id)arg2 ;
-(id)_chatDictionaryForChatGUID:(id)arg1 ;
-(long long)maxRowID;
-(void)_setNeedsIndexing:(BOOL)arg1 ;
-(void)_setNeedsDeferredIndexing:(BOOL)arg1 ;
-(void)_setLastIndexedRowID:(unsigned long long)arg1 ;
-(void)_setMaxIndexRowID:(unsigned long long)arg1 ;
-(void)_setCurrentIndexVersion:(unsigned long long)arg1 ;
-(void)_setBypassIndexVersionCheck;
-(void)indexChats;
-(void)_sanitizeIndexesForCurrentVersionIfNeeded:(/*^block*/id)arg1 ;
-(BOOL)_bypassIndexVersionCheck;
-(unsigned long long)_currentIndexVersion;
-(unsigned long long)_expectedIndexVersion;
-(id)_newSearchableChatItemsForChats:(CFArrayRef)arg1 ;
-(void)_indexSearchableChatItems:(id)arg1 withIndex:(id)arg2 ;
-(long long)_chatCountForChats:(id)arg1 ;
-(id)_chatDictionaryForChatAtIndex:(unsigned long long)arg1 withChats:(id)arg2 ;
-(BOOL)_shouldIndexNextBatchForBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)_lastIndexedRowID;
-(unsigned long long)_batchSizeForTargetBatchSize:(unsigned long long)arg1 lastIndexedRowID:(unsigned long long)arg2 lastBatch:(BOOL*)arg3 ;
-(CFArrayRef)_copyMessagesForIndexingWithLastRowID:(unsigned long long)arg1 batchSize:(unsigned long long)arg2 ;
-(id)_newSearchableIndexesForMessages:(CFArrayRef)arg1 ;
-(void)_indexSearchableItems:(id)arg1 lastIndexedRowID:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 lastBatch:(BOOL)arg4 withIndex:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_newLegacySearchableIndexesForMessages:(CFArrayRef)arg1 ;
-(BOOL)_shouldBypassForTesting;
-(void)_geocodeItems:(id)arg1 ;
-(void)setBlocklistMessageGUIDs:(NSMutableOrderedSet *)arg1 ;
@end

