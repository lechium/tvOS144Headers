/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXEnumerator.h>

@class NSNumber, PXSectionedDataSource, PXIndexPathSet;

@interface PXSectionedDataSourceEnumerator : PXEnumerator {

	NSNumber* _cachedCount;
	long long _currentPhase;
	PXSimpleIndexPath _lastIndexPath;
	PXSectionedDataSource* _dataSource;
	PXIndexPathSet* _indexPathSet;
	unsigned long long _enumeratedTypes;

}

@property (nonatomic,readonly) PXSectionedDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) PXIndexPathSet * indexPathSet;                   //@synthesize indexPathSet=_indexPathSet - In the implementation block
@property (nonatomic,readonly) unsigned long long enumeratedTypes;              //@synthesize enumeratedTypes=_enumeratedTypes - In the implementation block
-(id)init;
-(unsigned long long)count;
-(id)nextObject;
-(void)reset;
-(PXSectionedDataSource *)dataSource;
-(id)initWithDataSource:(id)arg1 indexPathSet:(id)arg2 enumeratedTypes:(unsigned long long)arg3 ;
-(void)_setToInitialState;
-(PXSimpleIndexPath)_nextSectionIndexPathFromIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)_nextItemIndexPathFromIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)_nextSubitemIndexPathFromIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_transitionToNextPhase;
-(PXIndexPathSet *)indexPathSet;
-(unsigned long long)enumeratedTypes;
@end

