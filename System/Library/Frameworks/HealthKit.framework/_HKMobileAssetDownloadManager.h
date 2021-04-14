/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableSet, NSObject, NSString, MADownloadOptions;

@interface _HKMobileAssetDownloadManager : NSObject {

	NSMutableArray* _pendingOperations;
	NSMutableSet* _downloadingQueryParams;
	NSObject*<OS_dispatch_queue> _queue;
	_HKMobileAssetDownloadManager* _retainedSelf;
	BOOL _shouldQueryLocalAssetsFirst;
	BOOL _shouldAutoDownloadRemoteAssets;
	long long _maxNumberOfRetriesAllowed;
	NSString* _mobileAssetTypeName;
	/*^block*/id _errorHandler;
	MADownloadOptions* _mobileAssetDownloadOptions;
	/*^block*/id _mobileAssetDownloadCompletionHandler;

}

@property (assign,nonatomic) BOOL shouldQueryLocalAssetsFirst;                          //@synthesize shouldQueryLocalAssetsFirst=_shouldQueryLocalAssetsFirst - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoDownloadRemoteAssets;                       //@synthesize shouldAutoDownloadRemoteAssets=_shouldAutoDownloadRemoteAssets - In the implementation block
@property (assign,nonatomic) long long maxNumberOfRetriesAllowed;                       //@synthesize maxNumberOfRetriesAllowed=_maxNumberOfRetriesAllowed - In the implementation block
@property (nonatomic,copy,readonly) NSString * mobileAssetTypeName;                     //@synthesize mobileAssetTypeName=_mobileAssetTypeName - In the implementation block
@property (nonatomic,copy) id errorHandler;                                             //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) MADownloadOptions * mobileAssetDownloadOptions;              //@synthesize mobileAssetDownloadOptions=_mobileAssetDownloadOptions - In the implementation block
@property (nonatomic,copy) id mobileAssetDownloadCompletionHandler;                     //@synthesize mobileAssetDownloadCompletionHandler=_mobileAssetDownloadCompletionHandler - In the implementation block
-(id)description;
-(void)dealloc;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)_errorWithDomain:(id)arg1 code:(long long)arg2 ;
-(void)_queue_fetchAssetsWithLocalInformation:(BOOL)arg1 shouldRequery:(BOOL)arg2 queryParams:(id)arg3 ;
-(id)_generateAssetQueryFromQueryParams:(id)arg1 ;
-(void)_queue_fetchAssetsWithQuery:(id)arg1 onlyLocal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_downloadAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_callErrorHandlerWithError:(id)arg1 ;
-(void)_callDownloadCompletionHandlerWithAssets:(id)arg1 queryParams:(id)arg2 ;
-(long long)maxNumberOfRetriesAllowed;
-(id)initWithMobileAssetTypeName:(id)arg1 queue:(id)arg2 ;
-(void)downloadAssetsWithQueryParams:(id)arg1 ;
-(void)fetchAssetsWithQueryParams:(id)arg1 onlyLocal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)downloadMobileAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeMobileAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldQueryLocalAssetsFirst;
-(void)setShouldQueryLocalAssetsFirst:(BOOL)arg1 ;
-(BOOL)shouldAutoDownloadRemoteAssets;
-(void)setShouldAutoDownloadRemoteAssets:(BOOL)arg1 ;
-(void)setMaxNumberOfRetriesAllowed:(long long)arg1 ;
-(NSString *)mobileAssetTypeName;
-(MADownloadOptions *)mobileAssetDownloadOptions;
-(void)setMobileAssetDownloadOptions:(MADownloadOptions *)arg1 ;
-(id)mobileAssetDownloadCompletionHandler;
-(void)setMobileAssetDownloadCompletionHandler:(id)arg1 ;
@end

