//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKTurnBasedService-Protocol.h"

@class NSString;

@interface GKTurnBasedService : GKService <GKTurnBasedService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001001ba8d4
+ (Class)interfaceClass;	// IMP=0x00000001001ba8c8
- (void)saveRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c7504
- (id)privateDatabase;	// IMP=0x00000001001c74d0
- (oneway void)reserveShareParticipantSlots:(long long)arg1 minPlayerCount:(long long)arg2 maxPlayerCount:(long long)arg3 andInvitePlayers:(id)arg4 withMessage:(id)arg5 forMatch:(id)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00000001001c6f90
- (oneway void)loadURLWithTBGMatch:(id)arg1 player:(id)arg2 matchRequest:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001c6a00
- (oneway void)sendReminderToParticipants:(id)arg1 message:(id)arg2 match:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001c6718
- (oneway void)getNextTurnBasedEventWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c63dc
- (oneway void)replyToExchange:(id)arg1 withMessage:(id)arg2 data:(id)arg3 match:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001c62a0
- (oneway void)cancelExchange:(id)arg1 withMessage:(id)arg2 match:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001c619c
- (oneway void)sendRequest:(id)arg1 forBagKey:(id)arg2 exchange:(id)arg3 matchID:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001c5a44
- (oneway void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 message:(id)arg3 timeout:(double)arg4 match:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001001c51d0
- (oneway void)completeTurnBasedMatch:(id)arg1 scores:(id)arg2 achievements:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001c44e4
- (id)_requestForTurnBasedSubmitValues:(id)arg1 withServerLabel:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000001001c425c
- (oneway void)resignFromTurnBasedGame:(id)arg1 outcome:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c3a54
- (oneway void)saveDataForTurnBasedMatch:(id)arg1 resolvedExchangeIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c321c
- (oneway void)submitTurnForTurnBasedMatch:(id)arg1 nextParticipantIndexes:(id)arg2 turnTimeout:(double)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001c2828
- (oneway void)removeTurnBasedMatch:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c21c8
- (oneway void)declineInviteForTurnBasedMatch:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c18ec
- (oneway void)acceptInviteForTurnBasedMatch:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c0d00
- (oneway void)getDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c0cec
- (oneway void)getDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(_Bool)arg2 prefetchOnly:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001c0490
- (void)loadDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(_Bool)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001bfd34
- (void)fetchDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(_Bool)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001bf514
- (void)_updatePlayersForMatches:(id)arg1 group:(id)arg2;	// IMP=0x00000001001bef2c
- (oneway void)getTurnBasedMatchesAndCompatibleBundleID:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001be07c
- (void)fetchTurnBasedMatchesForGame:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001bdb84
- (void)loadTurnBasedMatchesForGame:(id)arg1 loadDetails:(_Bool)arg2 prefetchOnly:(_Bool)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001bd218
- (void)_determineTurnBasedBadgeCountFromList:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001bce10
- (void)_determineCompatibleBundleIDForAppID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 platform:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001bc5d4
- (void)_determineCompatibleGamesForMatches:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00000001001bbab0
- (void)_updateGamesForTurnBasedMatches:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00000001001bb7e8
- (oneway void)createTurnBasedGameForMatchRequest:(id)arg1 individualMessages:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001baa9c
- (id)turnsForParticipantIndexes:(id)arg1 turnTimeout:(double)arg2;	// IMP=0x00000001001ba8f0
- (void)getTurnBasedMatchesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ba8dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

