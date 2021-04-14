//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SYDSchedulingParameters;

@interface SYDGlobalScheduling : NSObject
{
    SYDSchedulingParameters *_parameters;	// 8 = 0x8
    unsigned long long _entriesSize;	// 16 = 0x10
    double *_entries;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010005613c
@property(nonatomic) double *entries; // @synthesize entries=_entries;
@property(nonatomic) unsigned long long entriesSize; // @synthesize entriesSize=_entriesSize;
@property(retain, nonatomic) SYDSchedulingParameters *parameters; // @synthesize parameters=_parameters;
- (id)schedulingDescription;	// IMP=0x0000000100055fc4
- (void)resetUpdateRequests;	// IMP=0x0000000100055f6c
- (void)markSuccessfulSyncUsingNow:(double)arg1;	// IMP=0x0000000100055ea8
- (double)nextAllowedRefreshDateUsingNow:(double)arg1;	// IMP=0x0000000100055c78
- (id)persistentState;	// IMP=0x0000000100055b5c
- (void)_markEntriesAsIncorrect;	// IMP=0x0000000100055ae0
- (void)_resizeEntriesWithUpdatedParametersIfNecessary;	// IMP=0x0000000100055a44
- (void)dealloc;	// IMP=0x00000001000559fc
- (id)initWithPersistentState:(id)arg1;	// IMP=0x0000000100055790

@end

