//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PineBoardServices/PBSAppInfoConfiguration.h>

#import "PBAppInfoConfiguration-Protocol.h"

@class NSDictionary, NSString;

@interface PBAppInfoConfiguration : PBSAppInfoConfiguration <PBAppInfoConfiguration>
{
    NSDictionary *_singleAppModeOptions;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001cd0a0
- (void).cxx_destruct;	// IMP=0x00000001001cd150
@property(readonly, copy, nonatomic) NSDictionary *singleAppModeOptions; // @synthesize singleAppModeOptions=_singleAppModeOptions;
- (_Bool)isPBAppInfoConfiguration;	// IMP=0x00000001001cd0f0
- (Class)classForCoder;	// IMP=0x00000001001cd0c0
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001cd048
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001cd01c
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001ccbd0
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000001001cca7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

