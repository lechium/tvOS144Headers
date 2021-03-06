//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKProfileService.h"

#import "GKProfileServicePrivate-Protocol.h"

@class NSString;

@interface GKProfileServicePrivate : GKProfileService <GKProfileServicePrivate>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100175d54
+ (Class)interfaceClass;	// IMP=0x0000000100175d48
- (void)loadProfileForPlayer:(id)arg1 pieces:(unsigned char)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001787bc
- (oneway void)invalidateCachedProfileForLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001786ac
- (oneway void)setProfilePrivacy:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100178234
- (oneway void)getFriendSupportPageURLWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100177e58
- (oneway void)getTermsAndConditionsURLWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100177a08
- (oneway void)getSuggestionsForNickname:(id)arg1 suggestionsCount:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100177594
- (oneway void)setPlayerNickname:(id)arg1 suggestionsCount:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100176f20
- (oneway void)setFindable:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100176c08
- (oneway void)deletePhotoWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001768e4
- (oneway void)setPhotoData:(id)arg1 avatarType:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100176484
- (oneway void)cachePhotos:(id)arg1 avatarType:(id)arg2 fileNames:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100176108
- (oneway void)setStatus:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100175d5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

