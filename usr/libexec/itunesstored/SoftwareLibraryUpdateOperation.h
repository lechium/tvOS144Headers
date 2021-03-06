//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString;

@interface SoftwareLibraryUpdateOperation : ISOperation
{
    NSString *_bundleID;	// 96 = 0x60
    NSDictionary *_changeset;	// 104 = 0x68
}

- (void)run;	// IMP=0x00000001001a4ea4
@property(readonly) NSDictionary *changeset;
@property(readonly) NSString *bundleIdentifier;
- (void)dealloc;	// IMP=0x00000001001a4e04
- (id)initWithBundleIdentifier:(id)arg1 changeset:(id)arg2;	// IMP=0x00000001001a4d74

@end

