//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CUTAWDMetric-Protocol.h"
#import "CUTCoreAnalyticsMetric-Protocol.h"

@class NSDictionary, NSNumber, NSString, PBCodable;
@protocol NSCopying;

@interface APSPushFilterChangedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric>
{
    NSString *_guid;	// 8 = 0x8
    long long _changedReason;	// 16 = 0x10
    NSNumber *_topicsCount;	// 24 = 0x18
    NSString *_topic;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100004ea0
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) NSNumber *topicsCount; // @synthesize topicsCount=_topicsCount;
@property(readonly, nonatomic) long long changedReason; // @synthesize changedReason=_changedReason;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithGuid:(id)arg1 changedReason:(long long)arg2 topicsCount:(id)arg3 topic:(id)arg4;	// IMP=0x0000000100004904

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
