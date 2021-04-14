/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CPLBatchExtractionStrategyStorage <NSObject>
@required
-(id)changeWithScopedIdentifier:(id)arg1;
-(id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(BOOL)arg3;
-(id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3;
-(id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;
-(id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;
-(id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2;
-(id)allChangesWithScopeIdentifier:(id)arg1;
-(BOOL)removeChange:(id)arg1 error:(id*)arg2;
-(BOOL)hasChangesInScopeWithIdentifier:(id)arg1;
-(unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:(id)arg1;

@end

