/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3QueryResultSet.h>

@class ML3QueryResultSet_BackingStore;

@interface ML3ContainerQueryResultSet : ML3QueryResultSet {

	BOOL _needsSorting;
	BOOL _needsReversing;
	ML3QueryResultSet_BackingStore* _sortedBackingStore;
	long long _containerPID;
	unsigned long long _entityLimit;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(long long)persistentIDAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)entityLimit;
-(BOOL)_updateToLibraryCurrentRevision;
-(void)_loadCurrentFullResults;
-(id)sortedBackingStoreForDisplayOrdering;
@end

