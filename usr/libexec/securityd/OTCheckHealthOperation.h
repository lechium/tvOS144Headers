//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class NSOperation, NSString, OTCuttlefishContext, OTDeviceInformation, OTOperationDependencies;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTCheckHealthOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol>
{
    _Bool _skipRateLimitingCheck;	// 10 = 0xa
    _Bool _postRepairCFU;	// 11 = 0xb
    _Bool _postEscrowCFU;	// 12 = 0xc
    _Bool _resetOctagon;	// 13 = 0xd
    _Bool _leaveTrust;	// 14 = 0xe
    _Bool _requiresEscrowCheck;	// 15 = 0xf
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    OTDeviceInformation *_deviceInfo;	// 32 = 0x20
    OTCuttlefishContext *_cuttlefishContext;	// 40 = 0x28
    OTOperationDependencies *_deps;	// 48 = 0x30
    NSOperation *_finishOp;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010004488c
@property _Bool requiresEscrowCheck; // @synthesize requiresEscrowCheck=_requiresEscrowCheck;
@property(retain) NSOperation *finishOp; // @synthesize finishOp=_finishOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property _Bool leaveTrust; // @synthesize leaveTrust=_leaveTrust;
@property _Bool resetOctagon; // @synthesize resetOctagon=_resetOctagon;
@property _Bool postEscrowCFU; // @synthesize postEscrowCFU=_postEscrowCFU;
@property _Bool postRepairCFU; // @synthesize postRepairCFU=_postRepairCFU;
@property _Bool skipRateLimitingCheck; // @synthesize skipRateLimitingCheck=_skipRateLimitingCheck;
@property __weak OTCuttlefishContext *cuttlefishContext; // @synthesize cuttlefishContext=_cuttlefishContext;
@property(retain) OTDeviceInformation *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)handleRepairSuggestions:(_Bool)arg1 postEscrowCFU:(_Bool)arg2 resetOctagon:(_Bool)arg3 leaveTrust:(_Bool)arg4;	// IMP=0x000000010004452c
- (void)groupStart;	// IMP=0x0000000100043af0
- (_Bool)checkIfPasscodeIsSetForDevice;	// IMP=0x0000000100043ac4
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3 deviceInfo:(id)arg4 skipRateLimitedCheck:(_Bool)arg5;	// IMP=0x000000010004399c

@end

