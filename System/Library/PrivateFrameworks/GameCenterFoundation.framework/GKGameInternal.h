/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKGameDescriptor.h>

@class NSString, NSDictionary, GKStoreItemInternal, NSSet, GKGameDescriptor;

@interface GKGameInternal : GKGameDescriptor {

	NSString* _name;
	NSDictionary* _icons;
	NSString* _defaultLeaderboardIdentifier;
	GKStoreItemInternal* _storeItem;
	SCD_Union_GK7 _flags;
	unsigned short _numberOfLeaderboards;
	unsigned short _numberOfLeaderboardSets;
	unsigned short _numberOfAchievements;
	unsigned short _maxAchievementPoints;
	NSSet* _compatiblePlatforms;

}

@property (assign,nonatomic) unsigned flags; 
@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * icons;                                 //@synthesize icons=_icons - In the implementation block
@property (assign,getter=isPrerendered,nonatomic) BOOL prerendered; 
@property (assign,nonatomic) BOOL supportsLeaderboards; 
@property (assign,nonatomic) BOOL hasAggregateLeaderboard; 
@property (assign,nonatomic) unsigned short numberOfLeaderboards;                  //@synthesize numberOfLeaderboards=_numberOfLeaderboards - In the implementation block
@property (nonatomic,retain) NSString * defaultLeaderboardIdentifier;              //@synthesize defaultLeaderboardIdentifier=_defaultLeaderboardIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsLeaderboardSets; 
@property (assign,nonatomic) unsigned short numberOfLeaderboardSets;               //@synthesize numberOfLeaderboardSets=_numberOfLeaderboardSets - In the implementation block
@property (assign,nonatomic) BOOL supportsAchievements; 
@property (assign,nonatomic) unsigned short numberOfAchievements;                  //@synthesize numberOfAchievements=_numberOfAchievements - In the implementation block
@property (assign,nonatomic) unsigned short maxAchievementPoints;                  //@synthesize maxAchievementPoints=_maxAchievementPoints - In the implementation block
@property (assign,nonatomic) BOOL supportsMultiplayer; 
@property (assign,nonatomic) BOOL supportsTurnBasedMultiplayer; 
@property (nonatomic,retain) NSSet * compatiblePlatforms;                          //@synthesize compatiblePlatforms=_compatiblePlatforms - In the implementation block
@property (nonatomic,readonly) BOOL canBeIndexed; 
@property (assign,getter=isValid,nonatomic) BOOL valid; 
@property (nonatomic,retain) GKStoreItemInternal * storeItem;                      //@synthesize storeItem=_storeItem - In the implementation block
@property (nonatomic,readonly) GKGameDescriptor * gameDescriptor; 
@property (assign,nonatomic) BOOL isArcadeGame; 
@property (assign,nonatomic) BOOL supportsChallenges; 
+(id)secureCodedPropertyKeys;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(unsigned)flags;
-(BOOL)isValid;
-(void)setName:(NSString *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setValid:(BOOL)arg1 ;
-(NSDictionary *)icons;
-(void)setIcons:(NSDictionary *)arg1 ;
-(BOOL)isPrerendered;
-(GKStoreItemInternal *)storeItem;
-(id)defaultCategory;
-(GKGameDescriptor *)gameDescriptor;
-(id)serverRepresentation;
-(BOOL)supportsLeaderboards;
-(BOOL)supportsLeaderboardSets;
-(BOOL)supportsAchievements;
-(BOOL)supportsMultiplayer;
-(BOOL)isArcadeGame;
-(BOOL)supportsChallenges;
-(BOOL)hasAggregateLeaderboard;
-(unsigned short)numberOfCategories;
-(unsigned short)numberOfLeaderboardSets;
-(unsigned short)numberOfAchievements;
-(unsigned short)maxAchievementPoints;
-(BOOL)supportsTurnBasedMultiplayer;
-(void)setSupportsChallenges:(BOOL)arg1 ;
-(NSString *)defaultLeaderboardIdentifier;
-(void)setNumberOfAchievements:(unsigned short)arg1 ;
-(void)setPrerendered:(BOOL)arg1 ;
-(void)setSupportsLeaderboards:(BOOL)arg1 ;
-(void)setSupportsLeaderboardSets:(BOOL)arg1 ;
-(void)setHasAggregateLeaderboard:(BOOL)arg1 ;
-(void)setSupportsAchievements:(BOOL)arg1 ;
-(void)setSupportsMultiplayer:(BOOL)arg1 ;
-(BOOL)canBeIndexed;
-(void)setSupportsTurnBasedMultiplayer:(BOOL)arg1 ;
-(void)setIsArcadeGame:(BOOL)arg1 ;
-(void)setDefaultLeaderboardIdentifier:(NSString *)arg1 ;
-(unsigned short)numberOfLeaderboards;
-(void)setNumberOfLeaderboards:(unsigned short)arg1 ;
-(void)setNumberOfLeaderboardSets:(unsigned short)arg1 ;
-(void)setMaxAchievementPoints:(unsigned short)arg1 ;
-(void)setStoreItem:(GKStoreItemInternal *)arg1 ;
-(NSSet *)compatiblePlatforms;
-(void)setCompatiblePlatforms:(NSSet *)arg1 ;
@end

