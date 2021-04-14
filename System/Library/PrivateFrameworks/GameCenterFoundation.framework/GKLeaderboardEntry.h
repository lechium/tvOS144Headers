/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GKLeaderboardEntryInternal, GKPlayer, NSString, NSDate;

@interface GKLeaderboardEntry : NSObject {

	GKLeaderboardEntryInternal* _internal;

}

@property (retain) GKLeaderboardEntryInternal * internal;               //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) GKPlayer * player; 
@property (nonatomic,readonly) long long rank; 
@property (nonatomic,readonly) long long score; 
@property (nonatomic,readonly) NSString * formattedScore; 
@property (nonatomic,readonly) unsigned long long context; 
@property (nonatomic,readonly) NSDate * date; 
+(id)formattedDifferenceBetweenFirstScore:(id)arg1 secondScore:(id)arg2 ;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(GKPlayer *)player;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKLeaderboardEntryInternal *)internal;
-(void)setInternal:(GKLeaderboardEntryInternal *)arg1 ;
-(id)_gkScore;
@end

