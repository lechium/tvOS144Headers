/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLKMeansClustering : PLDataClustering {

	unsigned long long _k;

}

@property (assign,k,nonatomic) unsigned long long k;              //@synthesize k=_k - In the implementation block
-(void)setK:(unsigned long long)arg1 ;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(unsigned long long)k;
-(id)performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)_performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(double*)_dataArray:(id)arg1 featureCount:(unsigned)arg2 useKeypaths:(BOOL)arg3 ;
@end

