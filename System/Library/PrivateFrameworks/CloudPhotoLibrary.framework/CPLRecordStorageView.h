/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CPLRecordStorageView : NSObject
-(BOOL)hasRecordWithScopedIdentifier:(id)arg1 ;
-(id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 recordClass:(Class*)arg3 error:(id*)arg4 ;
-(unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(id)compactedBatchFromExpandedBatch:(id)arg1 ;
-(id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id*)arg3 ;
-(id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 ;
-(id)recordViewWithScopedIdentifier:(id)arg1 ;
-(id)recordViewsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
@end

