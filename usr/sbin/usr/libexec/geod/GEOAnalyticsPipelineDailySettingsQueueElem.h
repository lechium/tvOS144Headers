//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GEOAnalyticsPipelineQueueElem.h"

#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface GEOAnalyticsPipelineDailySettingsQueueElem : GEOAnalyticsPipelineQueueElem <NSSecureCoding>
{
    NSArray *_settingsStates;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100021edc
- (void).cxx_destruct;	// IMP=0x0000000100022530
@property(readonly, nonatomic) NSArray *settingsStates; // @synthesize settingsStates=_settingsStates;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002221c
- (unsigned long long)hash;	// IMP=0x00000001000220cc
- (id)copy;	// IMP=0x000000010002208c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100021f58
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100021ee4
- (id)initWithSettingsStates:(id)arg1 createTime:(id)arg2;	// IMP=0x0000000100021e64

@end

