//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMXPCMessageBase.h"

@class NSURL;

@interface MCMXPCMessageCreateOrLookupWithBundle : MCMXPCMessageBase
{
    _Bool _createIfNecessary;	// 8 = 0x8
    _Bool _transient;	// 9 = 0x9
    _Bool _issueSandboxExtension;	// 10 = 0xa
    const char *_sandboxToken;	// 16 = 0x10
    NSURL *_bundleURL;	// 24 = 0x18
    NSURL *_executableURL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100086bd0
@property(readonly, nonatomic) NSURL *executableURL; // @synthesize executableURL=_executableURL;
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(readonly, nonatomic) const char *sandboxToken; // @synthesize sandboxToken=_sandboxToken;
@property(readonly, nonatomic) _Bool issueSandboxExtension; // @synthesize issueSandboxExtension=_issueSandboxExtension;
@property(readonly, nonatomic) _Bool transient; // @synthesize transient=_transient;
@property(readonly, nonatomic) _Bool createIfNecessary; // @synthesize createIfNecessary=_createIfNecessary;
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000100086804

@end

