/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class PLAssetsdClientXPCConnection, NSObject, PLAssetsdSystemLibraryURLReadOnlyClient, PLAssetsdLibraryManagementClient, PLAssetsdDemoClient, PLAssetsdPrivacySupportClient;

@interface PLNonBindingAssetsdClient : NSObject {

	PLAssetsdClientXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	PLAssetsdSystemLibraryURLReadOnlyClient* _systemLibraryURLReadOnlyClient;
	PLAssetsdLibraryManagementClient* _libraryManagementClient;
	PLAssetsdDemoClient* _demoClient;
	PLAssetsdPrivacySupportClient* _privacySupportClient;

}

@property (readonly) PLAssetsdSystemLibraryURLReadOnlyClient * systemLibraryURLReadOnlyClient; 
@property (readonly) PLAssetsdLibraryManagementClient * libraryManagementClient; 
@property (readonly) PLAssetsdDemoClient * demoClient; 
@property (readonly) PLAssetsdPrivacySupportClient * privacySupportClient; 
-(id)init;
-(PLAssetsdSystemLibraryURLReadOnlyClient *)systemLibraryURLReadOnlyClient;
-(PLAssetsdLibraryManagementClient *)libraryManagementClient;
-(PLAssetsdDemoClient *)demoClient;
-(PLAssetsdPrivacySupportClient *)privacySupportClient;
-(void)_updateLibraryStateConnectionInterrupted:(id)arg1 ;
@end

