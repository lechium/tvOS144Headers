//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class NSOperation, NSString, OTOperationDependencies;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTUploadNewCKKSTLKsOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol>
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    OTOperationDependencies *_deps;	// 32 = 0x20
    NSString<OctagonStateString> *_ckksConflictState;	// 40 = 0x28
    NSString<OctagonStateString> *_peerMissingState;	// 48 = 0x30
    NSOperation *_finishedOp;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100120874
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) NSString<OctagonStateString> *peerMissingState; // @synthesize peerMissingState=_peerMissingState;
@property(retain) NSString<OctagonStateString> *ckksConflictState; // @synthesize ckksConflictState=_ckksConflictState;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)proceedWithKeys:(id)arg1 pendingTLKShares:(id)arg2 viewsToUpload:(id)arg3;	// IMP=0x0000000100120534
- (void)groupStart;	// IMP=0x000000010011ffe4
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 ckksConflictState:(id)arg3 peerMissingState:(id)arg4 errorState:(id)arg5;	// IMP=0x000000010011fe9c

@end

