/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject>

@property (nonatomic,readonly) unsigned long long countOfQueuedBatches; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEmpty;
-(unsigned long long)scopeType;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)hasSomeChangeWithScopedIdentifier:(id)arg1 ;
-(unsigned long long)countOfQueuedBatches;
-(BOOL)hasQueuedBatches;
-(BOOL)appendChangeBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)popChangeBatch:(id*)arg1 error:(id*)arg2 ;
-(id)nextBatch;
-(BOOL)popNextBatchWithError:(id*)arg1 ;
-(BOOL)hasSomeChangeInScopesWithIdentifiers:(id)arg1 ;
-(BOOL)hasSomeChangeWithScopeFilter:(id)arg1 ;
-(BOOL)deleteAllChangeBatchesWithError:(id*)arg1 ;
-(BOOL)deleteAllChangesWithScopeFilter:(id)arg1 error:(id*)arg2 ;
-(BOOL)compactChangeBatchesWithError:(id*)arg1 ;
-(id)popAllChangeBatchesWithError:(id*)arg1 ;
-(id)allChangeBatches;
@end

