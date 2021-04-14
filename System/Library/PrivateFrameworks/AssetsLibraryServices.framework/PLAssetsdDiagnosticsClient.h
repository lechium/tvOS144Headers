/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdDiagnosticsClient : PLAssetsdBaseClient
-(BOOL)dumpCloudPhotosStatusIncludingDaemon:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)dumpPhotoAnalysisStatusWithOutputFilePath:(id*)arg1 error:(id*)arg2 ;
-(BOOL)incompleteRestoreProcesses:(id*)arg1 error:(id*)arg2 ;
-(BOOL)getPhotosXPCEndpoint:(id*)arg1 error:(id*)arg2 ;
-(void)setPhotosXPCEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSharedMemoryForDeferredLogging:(id)arg1 ;
@end

