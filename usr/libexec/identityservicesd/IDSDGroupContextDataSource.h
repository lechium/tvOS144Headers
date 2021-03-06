//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ENGroupContextDataSource-Protocol.h"

@class IDSGroupServer, NSString;

@interface IDSDGroupContextDataSource : NSObject <ENGroupContextDataSource>
{
    IDSGroupServer *_groupServer;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100169484
- (void).cxx_destruct;	// IMP=0x0000000100171870
@property(retain, nonatomic) IDSGroupServer *groupServer; // @synthesize groupServer=_groupServer;
- (id)_sponsorAccount;	// IMP=0x00000001001716bc
- (id)_sponsorAlias;	// IMP=0x00000001001715fc
- (id)_groupWithDeviceIdentity:(id)arg1 parent:(id)arg2 groupInfo:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100170db8
- (void)_participantsForDestinations:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010017057c
- (void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100170378
- (void)participantsForCypher:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016ffec
- (void)groupFromPublicDataRepresentation:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016e938
- (void)publicDataRepresentationForGroup:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016db44
- (void)groupContext:(id)arg1 fetchGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016d7e4
- (void)_groupFromServerResponse:(id)arg1 context:(id)arg2 groupID:(id)arg3 error:(id)arg4 resultCode:(long long)arg5 resultDictionary:(id)arg6 allEntries:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000010016b208
- (void)groupContext:(id)arg1 upsertGroupWithInfo:(id)arg2 previousGroup:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100169704
- (id)init;	// IMP=0x0000000100169630

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

