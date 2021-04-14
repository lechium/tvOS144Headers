//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary;

@interface ODRBundleTagManifest : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
    NSDate *_lastModified;	// 16 = 0x10
}

+ (id)_manifestWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d8f80
+ (id)_manifestWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d8d74
+ (id)_manifestWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d8b40
+ (id)_manifestURLForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d8aa0
+ (id)_manifestURLForProxy:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d89b8
- (void).cxx_destruct;	// IMP=0x00000001000d91f4
@property(readonly, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(readonly, nonatomic) NSArray *tags;
- (id)assetPackIDsForTag:(id)arg1;	// IMP=0x00000001000d8998
- (id)initWithProxy:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d88f8
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001000d8854
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d8708
- (id)initWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d860c
- (id)init;	// IMP=0x00000001000d85f8

@end

