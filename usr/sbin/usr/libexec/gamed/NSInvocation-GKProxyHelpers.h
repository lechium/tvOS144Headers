//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSInvocation.h>

@interface NSInvocation (GKProxyHelpers)
+ (id)_gkInvocationWithBlock:(id)arg1;	// IMP=0x000000010012f288
- (void)_gkInvokeOnceWithTarget:(id)arg1;	// IMP=0x000000010012f194
- (void)_gkInvokeOnce;	// IMP=0x000000010012f160
- (void)_gkClearTarget;	// IMP=0x000000010012f120
- (void)_gkClearArgumentAtIndex:(unsigned long long)arg1;	// IMP=0x000000010012f0bc
- (void)__gkPrepareForFakeCallbackWithNoData:(_Bool)arg1 orError:(id)arg2;	// IMP=0x000000010012ee3c
- (void)_gkPrepareForCallWithError:(id)arg1;	// IMP=0x000000010012ed54
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;	// IMP=0x000000010012ec9c
- (id)_gkReplyHandlerInvocation;	// IMP=0x000000010012ebf8
- (void)_gkClearCopiedArguments;	// IMP=0x000000010012ea3c
- (void)_gkCopyArguments;	// IMP=0x000000010012e7c4
- (void)_gkPrintBlockSignature;	// IMP=0x000000010012e6cc
- (_Bool)_gkHasReplyBlock;	// IMP=0x000000010012f2f4
@end
