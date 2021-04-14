//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSHashable-Protocol.h"

@class NSArray, NSString;
@protocol AMSDCloudDataChangeToken;

@interface AMSDCloudDataChangedRecordZonesResult : NSObject <AMSHashable>
{
    NSArray *_changedRecordZones;	// 8 = 0x8
    NSArray *_deletedRecordZones;	// 16 = 0x10
    id <AMSDCloudDataChangeToken> _changeToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100007f18
@property(readonly, nonatomic) id <AMSDCloudDataChangeToken> changeToken; // @synthesize changeToken=_changeToken;
@property(readonly, nonatomic) NSArray *deletedRecordZones; // @synthesize deletedRecordZones=_deletedRecordZones;
@property(readonly, nonatomic) NSArray *changedRecordZones; // @synthesize changedRecordZones=_changedRecordZones;
@property(readonly, nonatomic) NSString *hashedDescription;
- (id)initWithChangedRecordZones:(id)arg1 deletedRecordZones:(id)arg2 changeToken:(id)arg3;	// IMP=0x0000000100007ca8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

