/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject {

	SSXPCConnection* _connection;
	long long _manifestType;

}

@property (readonly) long long manifestType; 
-(id)init;
-(void)dealloc;
-(id)initWithManifestType:(long long)arg1 ;
-(void)_removeItemsWithAssetPaths:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getPathsForFilesWithClass:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)manifestType;
-(void)rebuildManifestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeItemWithAssetPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removeItemsWithAssetPaths:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

