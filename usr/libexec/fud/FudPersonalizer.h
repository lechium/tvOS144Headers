//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FudPersonalizerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FudPersonalizer : NSObject
{
    NSObject<OS_dispatch_queue> *_personalizationQueue;	// 8 = 0x8
    id <FudPersonalizerDelegate> _delegate;	// 16 = 0x10
    struct __CFDictionary *_manifestDict;	// 24 = 0x18
    struct __CFDictionary *_objectsDict;	// 32 = 0x20
    struct __CFDictionary *_serverRequestDict;	// 40 = 0x28
    struct __CFDictionary *_serverResponseDict;	// 48 = 0x30
    struct __CFData *_responseData;	// 56 = 0x38
    struct __CFString *_ticketName;	// 64 = 0x40
    struct __AMAuthInstall *_amai;	// 72 = 0x48
    struct __CFString *_serverURL;	// 80 = 0x50
    _Bool _overrideSecurityDomain;	// 88 = 0x58
}

- (void)personalizeWithServer:(id)arg1;	// IMP=0x00000001000098fc
- (struct __CFDictionary *)createPersonalizationManifestCFDict:(id)arg1;	// IMP=0x00000001000090ec
- (struct __CFDictionary *)createPersonalizationObjectCFDict:(id)arg1;	// IMP=0x0000000100008ebc
- (void)doPersonalization:(id)arg1;	// IMP=0x0000000100008d00
- (void)overrideSecurityDomain:(_Bool)arg1;	// IMP=0x0000000100008cf8
- (void)overrideServerURL:(id)arg1;	// IMP=0x0000000100008cb0
- (void)dealloc;	// IMP=0x0000000100008c44
- (void)freePersonalizationData;	// IMP=0x0000000100008bb8
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100008ad0

@end
