/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/ML3Entity.h>

@interface ML3Track : ML3Entity
+(void)initialize;
+(id)allProperties;
+(id)databaseTable;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(long long)revisionTrackingCode;
+(id)flattenedChapterDataFromDAAPInfoDictionary:(id)arg1 trackPersistentID:(long long)arg2 ;
+(id)persistentIDColumnForTable:(id)arg1 ;
+(BOOL)trackWithPersistentID:(long long)arg1 existsInLibraryWithConnection:(id)arg2 ;
+(id)unsettableProperties;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)foreignColumnForProperty:(id)arg1 ;
+(id)extraTablesToInsert;
+(id)predicateByOptimizingComparisonPredicate:(id)arg1 ;
+(BOOL)libraryContentsChangeForProperty:(id)arg1 ;
+(BOOL)assistantLibraryContentsChangeForProperty:(id)arg1 ;
+(BOOL)libraryDynamicChangeForProperty:(id)arg1 ;
+(BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5 ;
+(id)extraTablesToDelete;
+(id)collectionClassesToUpdateBeforeDelete;
+(BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 ;
+(id)predisambiguatedProperties;
+(id)subselectStatementForProperty:(id)arg1 ;
+(id)subselectPropertyForProperty:(id)arg1 ;
+(id)defaultOrderingTerms;
+(id)sectionPropertyForProperty:(id)arg1 ;
+(BOOL)removeFromMyLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 ;
+(id)containerQueryWithContainer:(id)arg1 ;
+(BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletionType:(int)arg3 deletedFileSize:(long long*)arg4 ;
+(BOOL)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)arg1 ;
+(void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(BOOL)_writeSyncDeletesToPlistWithLibrary:(id)arg1 forPersistentIDs:(id)arg2 ;
+(void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 ;
+(BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletedFileSize:(long long*)arg3 ;
+(BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 ;
+(BOOL)clearPlaybackKeysFromLibrary:(id)arg1 persistentIDs:(id)arg2 ;
+(BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 disableKeepLocal:(BOOL)arg3 ;
+(BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 disableKeepLocal:(BOOL)arg3 usingConnection:(id)arg4 ;
+(void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
+(id)albumsDefaultOrderingTerms;
+(id)albumsByAlbumArtistDefaultOrderingTerms;
+(id)genresDefaultOrderingTerms;
+(id)podcastsDefaultOrderingTerms;
+(id)artistAllAlbumsDefaultOrderingTerms;
+(id)artistsDefaultOrderingTerms;
+(id)albumAllArtistsDefaultOrderingTerms;
+(id)albumAndArtistDefaultOrderingTerms;
+(id)composersDefaultOrderingTerms;
+(id)podcastsEpisodesDefaultOrderingTerms;
+(id)TVShowEpisodesDefaultOrderingTerms;
+(BOOL)trackWithPersistentID:(long long)arg1 existsInLibrary:(id)arg2 ;
+(BOOL)trackWithPersistentID:(long long)arg1 visibleInLibrary:(id)arg2 ;
+(BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 ;
+(BOOL)trackValueAreInTheCloud:(id)arg1 ;
+(void)updateAllBookmarkableStoreBookmarkMetadataIdentifiersOnConnection:(id)arg1 ;
+(BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3 ;
+(id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 ;
+(id)orderingTermsForITTGTrackOrder:(unsigned)arg1 descending:(BOOL)arg2 ;
+(id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 ;
+(id)flattenedChapterDataFromSyncInfoDictionaries:(id)arg1 trackPersistentID:(long long)arg2 ;
+(id)_normalizedImportChapters:(id)arg1 trackPersistentID:(long long)arg2 ;
+(id)flattenedChapterDataWithImportChapters:(id)arg1 library:(id)arg2 trackPersistentID:(long long)arg3 ;
+(id)importChaptersByParsingAsset:(id)arg1 ;
-(BOOL)needsVideoSnapshot;
-(void)createVideoSnapshotAtTime:(double)arg1 ;
-(id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4 ;
-(id)multiverseIdentifier;
-(id)chapterTOC;
-(id)absoluteFilePath;
-(BOOL)updateIntegrity;
-(id)rawIntegrity;
-(id)artworkTokenAtPlaybackTime:(double)arg1 ;
-(void)updateCollectionCloudStatus;
-(id)computeSHA256OfAudioPacketDataInLocalAsset;
-(void)updateStoreBookmarkMetadataIdentifier;
-(void)populateLocationPropertiesWithPath:(id)arg1 protectionType:(long long)arg2 ;
-(BOOL)_populateLocationPropertiesWithPath:(id)arg1 protectionType:(long long)arg2 fromLibrary:(id)arg3 usingConnection:(id)arg4 ;
-(void)populateChapterDataWithImportChapters:(id)arg1 ;
-(BOOL)populateArtworkCacheWithArtworkData:(id)arg1 ;
-(void)populateLocationPropertiesWithPath:(id)arg1 ;
-(void)populateLocationPropertiesWithPath:(id)arg1 isProtected:(BOOL)arg2 ;
-(void)populateLocationPropertiesWithPath:(id)arg1 protectionType:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)multiverseIdentifierLibraryOnly:(BOOL)arg1 ;
-(id)protocolItem;
-(id)protocolItemForDynamicUpdate;
@end

