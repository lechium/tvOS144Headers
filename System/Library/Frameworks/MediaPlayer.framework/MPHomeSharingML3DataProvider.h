/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPMediaLibraryDataProviderML3.h>

@protocol OS_dispatch_queue, MPArtworkDataSource;
@class HSHomeSharingLibrary, NSMutableDictionary, NSMutableSet, NSObject;

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3 {

	HSHomeSharingLibrary* _homeSharingLibrary;
	NSMutableDictionary* _tokenDataForDSIDs;
	NSMutableSet* _loadedContainerPIDs;
	NSMutableDictionary* _blocksForLoadingContainerPIDs;
	NSObject*<OS_dispatch_queue> _containerFillQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned _databaseID;
	id<MPArtworkDataSource> _artworkDataSource;

}

@property (nonatomic,readonly) HSHomeSharingLibrary * homeSharingLibrary;              //@synthesize homeSharingLibrary=_homeSharingLibrary - In the implementation block
@property (nonatomic,readonly) BOOL isSupportedSharingVersion; 
@property (assign,nonatomic) unsigned databaseID;                                      //@synthesize databaseID=_databaseID - In the implementation block
+(id)homeSharingGroupID;
+(void)beginScanningForLibraries;
+(void)endScanningForLibraries;
+(BOOL)isScanningForLibraries;
+(void)_determineHomeSharingGroupIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)name;
-(void)dealloc;
-(id)uniqueIdentifier;
-(void)disconnect;
-(BOOL)writable;
-(BOOL)requiresAuthentication;
-(id)artworkDataSource;
-(void)setDatabaseID:(unsigned)arg1 ;
-(unsigned)databaseID;
-(id)errorResolverForItem:(id)arg1 ;
-(id)protectedContentSupportStorageURL;
-(BOOL)hasGeniusMixes;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)connectWithAuthenticationData:(id)arg1 completionBlock:(/*^block*/id)arg2 progressHandler:(/*^block*/id)arg3 ;
-(id)itemResultSetForQueryCriteria:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(/*^block*/id)arg2 ;
-(id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3 ;
-(id)URLForItemDataRequest:(id)arg1 ;
-(id)initWithHomeSharingLibrary:(id)arg1 ;
-(void)setRentalPlaybackStartDateForItemID:(unsigned long long)arg1 ;
-(void)_homeSharingGroupIDDidChangeNotification:(id)arg1 ;
-(void)_homeSharingLibraryDidUpdateRevisionNumber:(id)arg1 ;
-(void)_homeSharingLibraryDidBecomeUnavailable:(id)arg1 ;
-(BOOL)isSupportedSharingVersion;
-(void)setTokenData:(id)arg1 forAuthorizedDSID:(unsigned long long)arg2 ;
-(void)_fetchTokensForAuthorizedDSIDs;
-(id)_tokenDataForAccountID:(unsigned long long)arg1 ;
-(void)_fillContainerForQueryCriteria:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(HSHomeSharingLibrary *)homeSharingLibrary;
@end

