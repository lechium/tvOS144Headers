/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>
#import <libobjc.A.dylib/PLAssetsdPhotoKitChangesRequestClient.h>

@interface PLAssetsdPhotoKitClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>
+(BOOL)sendChangesRequest:(id)arg1 usingProxyFactory:(id)arg2 error:(id*)arg3 ;
+(void)sendChangesRequest:(id)arg1 usingProxyFactory:(id)arg2 reply:(/*^block*/id)arg3 ;
+(BOOL)inTransactionProxy;
+(void)setInTransactionProxy:(BOOL)arg1 queue:(id)arg2 ;
-(id)clientName;
-(void)sendChangesRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)sendChangesRequest:(id)arg1 error:(id*)arg2 ;
-(id)getUUIDsForCloudIdentifiers:(id)arg1 error:(id*)arg2 ;
@end

