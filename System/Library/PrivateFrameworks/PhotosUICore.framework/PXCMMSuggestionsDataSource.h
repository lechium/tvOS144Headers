/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, PXCMMSuggestionsDataSourceState;

@interface PXCMMSuggestionsDataSource : PXSectionedDataSource {

	NSObject*<OS_dispatch_queue> _queue;
	PXCMMSuggestionsDataSourceState* __state;

}

@property (nonatomic,readonly) PXCMMSuggestionsDataSourceState * _state;              //@synthesize _state=__state - In the implementation block
-(PXCMMSuggestionsDataSourceState *)_state;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)initWithState:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(id)suggestionAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)_adjustedIndexFromIndex:(long long)arg1 ;
@end

