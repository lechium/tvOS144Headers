/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKMediaEntitiesCache.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary;

@interface TVHKSeasonsCache : TVHKMediaEntitiesCache <NSCopying> {

	NSArray* _seasons;
	NSArray* _episodes;
	NSMutableDictionary* _showByIdentifier;

}

@property (nonatomic,copy) NSArray * seasons;                                     //@synthesize seasons=_seasons - In the implementation block
@property (nonatomic,copy) NSArray * episodes;                                    //@synthesize episodes=_episodes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * showByIdentifier;              //@synthesize showByIdentifier=_showByIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)clear;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSArray *)episodes;
-(id)episodesForSeasonIdentifier:(id)arg1 ;
-(NSArray *)seasons;
-(NSMutableDictionary *)showByIdentifier;
-(id)_DAAPSeasonForIdentifier:(id)arg1 ;
-(void)setEpisodes:(NSArray *)arg1 ;
-(void)setSeasons:(NSArray *)arg1 ;
-(id)seasonsForShowIdentifier:(id)arg1 ;
-(id)seasonForIdentifier:(id)arg1 ;
-(void)updateWithMediaEntities:(id)arg1 currentServerRevision:(unsigned long long)arg2 ;
-(void)setShowByIdentifier:(NSMutableDictionary *)arg1 ;
@end

