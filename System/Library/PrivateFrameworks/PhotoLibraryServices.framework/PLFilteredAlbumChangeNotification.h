/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>
#import <libobjc.A.dylib/PLIndexMapperDataSource.h>
#import <libobjc.A.dylib/PLDerivedNotification.h>

@class PLFilteredAlbum, NSIndexSet, PLIndexMapper, PLAssetContainerChangeNotification, NSString;

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLIndexMapperDataSource, PLDerivedNotification> {

	PLFilteredAlbum* _album;
	NSIndexSet* _oldFilteredIndexes;
	NSIndexSet* _filteredIndexes;
	PLIndexMapper* _indexMapper;
	PLAssetContainerChangeNotification* _backingNotification;

}

@property (nonatomic,retain,readonly) NSIndexSet * updatedFilteredIndexes; 
@property (nonatomic,copy) NSIndexSet * filteredIndexes; 
@property (nonatomic,retain,readonly) PLIndexMapper * indexMapper; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(NSString *)description;
-(id)init;
-(id)object;
-(id)_changedObjects;
-(id)album;
-(BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1 ;
-(NSIndexSet *)filteredIndexes;
-(PLIndexMapper *)indexMapper;
-(BOOL)shouldReload;
-(BOOL)titleDidChange;
-(BOOL)keyAssetDidChange;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_diffDescription;
-(id)initWithFilteredAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3 ;
-(BOOL)countDidChange;
-(NSIndexSet *)updatedFilteredIndexes;
-(void)setFilteredIndexes:(NSIndexSet *)arg1 ;
@end

