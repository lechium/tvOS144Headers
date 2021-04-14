//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSNumber, NSString, NSURL;

@interface SystemAppLookupItem : NSObject
{
    _Bool _streamableZip;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSNumber *_downloadOffset;	// 24 = 0x18
    NSNumber *_downloadSize;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSNumber *_hashType;	// 48 = 0x30
    NSArray *_hashes;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    NSURL *_URL;	// 72 = 0x48
}

+ (id)_stringFromDigest:(char *)arg1;	// IMP=0x00000001001d20b4
+ (id)_hashArrayFromMeasurement:(id)arg1;	// IMP=0x00000001001d1f70
- (void).cxx_destruct;	// IMP=0x00000001001d2200
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic, getter=isStreamableZip) _Bool streamableZip; // @synthesize streamableZip=_streamableZip;
@property(readonly, nonatomic) NSArray *hashes; // @synthesize hashes=_hashes;
@property(readonly, nonatomic) NSNumber *hashType; // @synthesize hashType=_hashType;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSNumber *downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, nonatomic) NSNumber *downloadOffset; // @synthesize downloadOffset=_downloadOffset;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)initWithURL:(id)arg1 attributes:(id)arg2;	// IMP=0x00000001001d1b84

@end

