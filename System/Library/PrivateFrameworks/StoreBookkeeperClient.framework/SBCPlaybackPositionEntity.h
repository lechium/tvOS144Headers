/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreBookkeeperClient/StoreBookkeeperClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SBCPlaybackPositionDomain, NSString;

@interface SBCPlaybackPositionEntity : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasBeenPlayed;
	SBCPlaybackPositionDomain* _playbackPositionDomain;
	NSString* _ubiquitousIdentifier;
	long long _foreignDatabaseEntityID;
	double _bookmarkTimestamp;
	double _bookmarkTime;
	unsigned long long _userPlayCount;

}

@property (nonatomic,readonly) SBCPlaybackPositionDomain * playbackPositionDomain;              //@synthesize playbackPositionDomain=_playbackPositionDomain - In the implementation block
@property (nonatomic,readonly) NSString * ubiquitousIdentifier;                                 //@synthesize ubiquitousIdentifier=_ubiquitousIdentifier - In the implementation block
@property (nonatomic,readonly) long long foreignDatabaseEntityID;                               //@synthesize foreignDatabaseEntityID=_foreignDatabaseEntityID - In the implementation block
@property (assign,nonatomic) double bookmarkTimestamp;                                          //@synthesize bookmarkTimestamp=_bookmarkTimestamp - In the implementation block
@property (assign,nonatomic) double bookmarkTime;                                               //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (assign,nonatomic) unsigned long long userPlayCount;                                  //@synthesize userPlayCount=_userPlayCount - In the implementation block
@property (assign,nonatomic) BOOL hasBeenPlayed;                                                //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)ubiquitousIdentifierWithUniqueStoreID:(long long)arg1 ;
+(id)ubiquitousIdentifierWithItemTitle:(id)arg1 albumName:(id)arg2 itemArtistName:(id)arg3 ;
+(id)ubiquitousIdentifierWithPodcastFeedURL:(id)arg1 feedGUID:(id)arg2 ;
+(id)ubiquitousIdentifierWithiTunesUFeedURL:(id)arg1 feedGUID:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SBCPlaybackPositionDomain *)playbackPositionDomain;
-(id)initWithPlaybackPositionDomain:(id)arg1 ubiquitousIdentifier:(id)arg2 foreignDatabaseEntityID:(long long)arg3 ;
-(double)bookmarkTime;
-(BOOL)hasBeenPlayed;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(void)setBookmarkTimestamp:(double)arg1 ;
-(void)setBookmarkTime:(double)arg1 ;
-(void)setUserPlayCount:(unsigned long long)arg1 ;
-(BOOL)hasBeenPlayedModified;
-(BOOL)userPlayCountModified;
-(BOOL)bookmarkTimeModified;
-(BOOL)bookmarkTimestampModified;
-(NSString *)ubiquitousIdentifier;
-(double)bookmarkTimestamp;
-(unsigned long long)userPlayCount;
-(id)SBKUniversalPlaybackPositionMetadata;
-(id)copyWithValuesFromSBKUniversalPlaybackPositionMetadata:(id)arg1 ;
-(long long)foreignDatabaseEntityID;
@end

