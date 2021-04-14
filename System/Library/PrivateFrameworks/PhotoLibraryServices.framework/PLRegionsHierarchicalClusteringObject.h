/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLRegionsClusteringItem;
@interface PLRegionsHierarchicalClusteringObject : NSObject {

	id<PLRegionsClusteringItem> _object;
	unsigned long long _index;

}

@property (nonatomic,readonly) id<PLRegionsClusteringItem> object;              //@synthesize object=_object - In the implementation block
@property (assign) unsigned long long index;                                    //@synthesize index=_index - In the implementation block
+(id)clusterObjectWithObject:(id)arg1 index:(unsigned long long)arg2 ;
-(id<PLRegionsClusteringItem>)object;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
@end

