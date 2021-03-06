//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeService.h"

#import "GKChallengeServicePrivate-Protocol.h"

@class NSString;

@interface GKChallengeServicePrivate : GKChallengeService <GKChallengeServicePrivate>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001001ac670
+ (Class)interfaceClass;	// IMP=0x00000001001ac664
- (oneway void)startGame:(id)arg1 withChallenge:(id)arg2;	// IMP=0x00000001001acb10
- (oneway void)getCountOfChallengesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ac678

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

