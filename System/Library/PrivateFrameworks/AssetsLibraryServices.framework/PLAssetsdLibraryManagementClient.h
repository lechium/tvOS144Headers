/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdLibraryManagementClient : PLAssetsdBaseClient
-(BOOL)setSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)removePhotoLibraryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)closeAndDeletePhotoLibraryAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)overrideSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2 ;
-(id)activePhotoLibraries:(id*)arg1 ;
-(void)getPhotoLibraryURLsWithReply:(/*^block*/id)arg1 ;
@end

