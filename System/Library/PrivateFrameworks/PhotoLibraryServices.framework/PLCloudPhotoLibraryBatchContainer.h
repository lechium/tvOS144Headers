/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject {

	BOOL _wasSplit;
	BOOL _reachedMinSplit;
	BOOL _wasFixed;
	CPLChangeBatch* _batch;
	unsigned long long _retryCount;

}

@property (nonatomic,retain) CPLChangeBatch * batch;                     //@synthesize batch=_batch - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) BOOL wasSplit;                              //@synthesize wasSplit=_wasSplit - In the implementation block
@property (assign,nonatomic) BOOL reachedMinSplit;                       //@synthesize reachedMinSplit=_reachedMinSplit - In the implementation block
@property (assign,nonatomic) BOOL wasFixed;                              //@synthesize wasFixed=_wasFixed - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(void)addRecord:(id)arg1 ;
-(CPLChangeBatch *)batch;
-(void)setBatch:(CPLChangeBatch *)arg1 ;
-(id)batchesSplitForError;
-(void)incrementRetryCount;
-(void)setWasFixed:(BOOL)arg1 ;
-(BOOL)wasSplit;
-(BOOL)wasFixed;
-(id)lastAddedRecord;
-(void)setWasSplit:(BOOL)arg1 ;
-(BOOL)reachedMinSplit;
-(void)setReachedMinSplit:(BOOL)arg1 ;
@end

