//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MRDInitiatePlaybackMessage : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSData *_indexPathData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000b945c
@property(readonly, nonatomic) NSData *indexPathData; // @synthesize indexPathData=_indexPathData;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)initWithBundleID:(id)arg1 indexPathData:(id)arg2;	// IMP=0x00000001000b938c

@end

