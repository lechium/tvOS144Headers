//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString, NSURLAuthenticationChallenge;

@interface DownloadSessionProperties : NSObject <NSCopying>
{
    long long _assetID;	// 8 = 0x8
    NSURLAuthenticationChallenge *_authenticationChallenge;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
    long long _downloadID;	// 32 = 0x20
    NSString *_downloadPhase;	// 40 = 0x28
    NSNumber *_duetBudget;	// 48 = 0x30
    long long _handlerIdentifier;	// 56 = 0x38
    _Bool _storeDownload;	// 64 = 0x40
    _Bool _shouldSupressErrorDialogs;	// 65 = 0x41
}

@property(nonatomic) _Bool shouldSupressErrorDialogs; // @synthesize shouldSupressErrorDialogs=_shouldSupressErrorDialogs;
@property(nonatomic, getter=isStoreDownload) _Bool storeDownload; // @synthesize storeDownload=_storeDownload;
@property(readonly, nonatomic) long long handlerIdentifier; // @synthesize handlerIdentifier=_handlerIdentifier;
@property(copy, nonatomic) NSNumber *duetBudget; // @synthesize duetBudget=_duetBudget;
@property(copy, nonatomic) NSString *downloadPhase; // @synthesize downloadPhase=_downloadPhase;
@property(nonatomic) long long downloadIdentifier; // @synthesize downloadIdentifier=_downloadID;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) NSURLAuthenticationChallenge *authenticationChallenge; // @synthesize authenticationChallenge=_authenticationChallenge;
@property(nonatomic) long long assetIdentifier; // @synthesize assetIdentifier=_assetID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002767c
- (unsigned long long)hash;	// IMP=0x0000000100027674
- (id)description;	// IMP=0x00000001000275fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100027534
- (void)dealloc;	// IMP=0x00000001000274d4
- (id)initWithClientIdentifier:(id)arg1 handlerIdentifier:(long long)arg2;	// IMP=0x0000000100027464

@end

