/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface ML3MigrationMisgroupedAlbum : NSObject {

	NSMutableArray* _misgroupedTracks;
	long long _albumPID;
	long long _albumArtistPID;

}

@property (nonatomic,readonly) long long albumPID;                      //@synthesize albumPID=_albumPID - In the implementation block
@property (nonatomic,readonly) long long albumArtistPID;                //@synthesize albumArtistPID=_albumArtistPID - In the implementation block
@property (nonatomic,readonly) NSArray * misgroupedTracks; 
-(id)initWithAlbumPID:(long long)arg1 albumArtistPID:(long long)arg2 ;
-(void)addMisgroupedTrack:(id)arg1 ;
-(NSArray *)misgroupedTracks;
-(long long)albumArtistPID;
-(long long)albumPID;
@end

