//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MIDiskUsageGatherer : NSObject
{
    _Bool _calcStatic;	// 8 = 0x8
    _Bool _calcDynamic;	// 9 = 0x9
    _Bool _calcShared;	// 10 = 0xa
    NSArray *_identifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100019880
@property(readonly, nonatomic) _Bool calcShared; // @synthesize calcShared=_calcShared;
@property(readonly, nonatomic) _Bool calcDynamic; // @synthesize calcDynamic=_calcDynamic;
@property(readonly, nonatomic) _Bool calcStatic; // @synthesize calcStatic=_calcStatic;
@property(readonly, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (id)gatherUsageInfoWithError:(id *)arg1;	// IMP=0x0000000100019604
- (id)_gatherForIdentifier:(id)arg1;	// IMP=0x0000000100019054
- (id)initWithIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x0000000100018f18

@end

