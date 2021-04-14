/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUILibraryMenuDataSource.h>

@class NSString, NSArray, VUIMediaAPIClient;

@interface VUIFamilySharingMenuDataSource : VUILibraryMenuDataSource {

	BOOL _hasFetchedGenres;
	BOOL _hasFetchedRecentPurchases;
	BOOL _hasFetchedMovies;
	BOOL _hasFetchedShows;
	BOOL _hasRecentPurchases;
	BOOL _hasMovies;
	BOOL _hasShows;
	NSString* _ownerIdentifier;
	NSArray* _genres;
	VUIMediaAPIClient* _mediaClient;

}

@property (nonatomic,retain) NSArray * genres;                             //@synthesize genres=_genres - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedGenres;                        //@synthesize hasFetchedGenres=_hasFetchedGenres - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedRecentPurchases;               //@synthesize hasFetchedRecentPurchases=_hasFetchedRecentPurchases - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedMovies;                        //@synthesize hasFetchedMovies=_hasFetchedMovies - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedShows;                         //@synthesize hasFetchedShows=_hasFetchedShows - In the implementation block
@property (assign,nonatomic) BOOL hasRecentPurchases;                      //@synthesize hasRecentPurchases=_hasRecentPurchases - In the implementation block
@property (assign,nonatomic) BOOL hasMovies;                               //@synthesize hasMovies=_hasMovies - In the implementation block
@property (assign,nonatomic) BOOL hasShows;                                //@synthesize hasShows=_hasShows - In the implementation block
@property (nonatomic,retain) VUIMediaAPIClient * mediaClient;              //@synthesize mediaClient=_mediaClient - In the implementation block
@property (nonatomic,retain) NSString * ownerIdentifier;                   //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
-(void)setOwnerIdentifier:(NSString *)arg1 ;
-(NSString *)ownerIdentifier;
-(NSArray *)genres;
-(void)setGenres:(NSArray *)arg1 ;
-(BOOL)hasMovies;
-(void)startFetch;
-(id)getGenreByGenreTitle:(id)arg1 ;
-(id)initWithValidCategories:(id)arg1 ;
-(VUIMediaAPIClient *)mediaClient;
-(void)setMediaClient:(VUIMediaAPIClient *)arg1 ;
-(void)_fetchGenres;
-(void)_fetchRecentPurchases;
-(void)_fetchMovies;
-(void)_fetchShows;
-(void)setHasFetchedGenres:(BOOL)arg1 ;
-(BOOL)_hasCompletedAllFetches;
-(id)_constructVUIMenuDataSource;
-(void)_notifyDelegatesFetchDidComplete;
-(void)setHasFetchedRecentPurchases:(BOOL)arg1 ;
-(void)setHasRecentPurchases:(BOOL)arg1 ;
-(void)setHasFetchedMovies:(BOOL)arg1 ;
-(void)setHasMovies:(BOOL)arg1 ;
-(void)setHasFetchedShows:(BOOL)arg1 ;
-(void)setHasShows:(BOOL)arg1 ;
-(id)_constructMainMenuItems;
-(id)_constructGenreMenuItems;
-(BOOL)hasRecentPurchases;
-(BOOL)hasShows;
-(/*^block*/id)_categoryTypesSortComparator;
-(BOOL)hasFetchedGenres;
-(BOOL)hasFetchedRecentPurchases;
-(BOOL)hasFetchedMovies;
-(BOOL)hasFetchedShows;
@end
