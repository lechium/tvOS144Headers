//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSSet, NSString, SSAuthenticationContext;

@interface SetAutomaticDownloadKindsOperation : ISOperation
{
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    NSString *_clientIdentifierHeader;	// 104 = 0x68
    NSSet *_downloadKinds;	// 112 = 0x70
    NSSet *_previousDownloadKinds;	// 120 = 0x78
    _Bool _runsOnlyIfKindsAreDirty;	// 128 = 0x80
    _Bool _shouldSuppressServerDialogs;	// 129 = 0x81
}

- (void)_run;	// IMP=0x00000001000a66f4
- (_Bool)_postDownloadKinds:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000a60f4
- (_Bool)_isFatalError:(id)arg1;	// IMP=0x00000001000a60d8
- (id)_copyFilteredDownloadKinds;	// IMP=0x00000001000a5e34
- (id)uniqueKey;	// IMP=0x00000001000a5e28
- (_Bool)shouldFailAfterUniquePredecessorError:(id)arg1;	// IMP=0x00000001000a5e1c
- (void)run;	// IMP=0x00000001000a5c54
@property _Bool shouldSuppressServerDialogs;
@property _Bool runsOnlyIfKindsAreDirty;
@property(copy) NSSet *previousDownloadKinds;
@property(copy) NSString *clientIdentifierHeader;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) NSSet *downloadKinds;
- (void)dealloc;	// IMP=0x00000001000a5854
- (id)initWithDownloadKinds:(id)arg1;	// IMP=0x00000001000a57ec

@end
