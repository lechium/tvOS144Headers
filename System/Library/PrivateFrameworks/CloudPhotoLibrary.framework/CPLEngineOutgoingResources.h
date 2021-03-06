/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineOutgoingResources : CPLEngineStorage <CPLAbstractObject>

@property (nonatomic,readonly) unsigned long long countOfOriginalImages; 
@property (nonatomic,readonly) unsigned long long countOfOriginalVideos; 
@property (nonatomic,readonly) unsigned long long countOfOriginalOthers; 
@property (nonatomic,readonly) unsigned long long sizeOfResourcesToUpload; 
@property (nonatomic,readonly) unsigned long long sizeOfOriginalResourcesToUpload; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)openWithError:(id*)arg1 ;
-(unsigned long long)scopeType;
-(unsigned long long)sizeOfResourcesToUpload;
-(unsigned long long)sizeOfOriginalResourcesToUpload;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)storeResourcesToUpload:(id)arg1 withUploadIdentifier:(id)arg2 shouldCheckResources:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)deleteResourcesToUploadWithUploadIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)resourceTypesToUploadForUploadIdentifier:(id)arg1 ;
-(unsigned long long)availableResourceSizeForUploadIdentifier:(id)arg1 ;
-(BOOL)shouldUploadResource:(id)arg1 ;
-(unsigned long long)countOfOriginalImages;
-(unsigned long long)countOfOriginalVideos;
-(unsigned long long)countOfOriginalOthers;
@end

