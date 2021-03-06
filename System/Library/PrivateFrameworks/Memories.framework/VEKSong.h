/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPMediaItem, FMSong, NSString, NSSet;

@interface VEKSong : NSObject <NSCopying> {

	unsigned long long _iTunesID;
	MPMediaItem* _iTunesMediaItem;
	FMSong* _fmSong;

}

@property (assign,nonatomic) unsigned long long iTunesID;                //@synthesize iTunesID=_iTunesID - In the implementation block
@property (nonatomic,retain) MPMediaItem * iTunesMediaItem;              //@synthesize iTunesMediaItem=_iTunesMediaItem - In the implementation block
@property (nonatomic,retain) FMSong * fmSong;                            //@synthesize fmSong=_fmSong - In the implementation block
@property (nonatomic,readonly) id songID; 
@property (nonatomic,readonly) BOOL isSmartMusic; 
@property (nonatomic,readonly) BOOL isiTunesMusic; 
@property (nonatomic,readonly) NSString * songName; 
@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSString * artworkPath; 
@property (nonatomic,readonly) NSSet * genres; 
@property (nonatomic,readonly) long long mood; 
@property (nonatomic,readonly) BOOL isLocal; 
+(void)initialize;
+(id)availableSmartSongs;
+(id)featuredSmartSongsForMood:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)mood;
-(BOOL)isLocal;
-(NSString *)artistName;
-(NSSet *)genres;
-(id)songID;
-(NSString *)artworkPath;
-(id)initWithSmartMusicID:(id)arg1 ;
-(BOOL)isSmartMusic;
-(BOOL)isiTunesMusic;
-(id)initWithiTunesMusicID:(unsigned long long)arg1 ;
-(NSString *)songName;
-(void)setFmSong:(FMSong *)arg1 ;
-(FMSong *)fmSong;
-(void)setITunesID:(unsigned long long)arg1 ;
-(id)_fetchMediaItemForMediaID:(unsigned long long)arg1 ;
-(void)setITunesMediaItem:(MPMediaItem *)arg1 ;
-(unsigned long long)iTunesID;
-(MPMediaItem *)iTunesMediaItem;
-(id)fetchSmartSongArtwork;
-(long long)moodForMoodString:(id)arg1 ;
-(id)previewPlayerItemForDuration:(SCD_Struct_TV3)arg1 normalizedVolume:(double*)arg2 ;
@end

