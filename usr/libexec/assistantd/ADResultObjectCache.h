//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface ADResultObjectCache : NSObject
{
    NSMutableDictionary *_requestMap;	// 8 = 0x8
    NSMutableSet *_requestsWithPhoneCall;	// 16 = 0x10
    NSMutableDictionary *_missingReferenceFulfillmentContexts;	// 24 = 0x18
    NSMutableDictionary *_missingReferenceFulfillmentContextsByRequestId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001001a54a0
- (id)commandsForSuccessReplyToCommand:(id)arg1;	// IMP=0x00000001001a5110
- (_Bool)callIsPossibleForRequestId:(id)arg1;	// IMP=0x00000001001a50b0
- (_Bool)hasResultObjectsForRequestId:(id)arg1;	// IMP=0x00000001001a5024
- (void)clearResultObjectsForAllRequestIdsExcept:(id)arg1;	// IMP=0x00000001001a4cd4
- (void)_removeMissingReferenceContext:(id)arg1;	// IMP=0x00000001001a4be8
- (void)_removeMissingRefContextsForRequestId:(id)arg1;	// IMP=0x00000001001a4a5c
- (void)clearResultObjectsForRequestId:(id)arg1;	// IMP=0x00000001001a49c0
- (id)objectsForIds:(id)arg1 missingReferences:(id *)arg2;	// IMP=0x00000001001a4760
- (id)commandsForReply:(id)arg1 toCommand:(id)arg2 missingReferences:(id *)arg3;	// IMP=0x00000001001a3fec
- (void)addResultObjects:(id)arg1 sessionRequestId:(id)arg2;	// IMP=0x00000001001a3f30
- (void)_addObjects:(id)arg1 forRequestId:(id)arg2 sessionRequestId:(id)arg3;	// IMP=0x00000001001a3910
- (_Bool)hasMissingRefContextsForId:(id)arg1;	// IMP=0x00000001001a3870
- (void)addMissingReferencesContext:(id)arg1;	// IMP=0x00000001001a363c
- (id)_missingReferenceFulfillmentContextsByRequestId;	// IMP=0x00000001001a35f8
- (id)_missingReferenceFulfillmentContexts;	// IMP=0x00000001001a35b4
- (id)_requestMap;	// IMP=0x00000001001a3570

@end

