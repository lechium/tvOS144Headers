//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WiFiCandidateNetwork-Protocol.h"

@class NSSet, NSString;
@protocol TBScore;

@interface WiFiCandidateNetworkStub : NSObject <WiFiCandidateNetwork>
{
    _Bool _matched;	// 8 = 0x8
    unsigned int _venueType;	// 12 = 0xc
    NSSet *_accessPoints;	// 16 = 0x10
    NSSet *_attributes;	// 24 = 0x18
    NSString *_password;	// 32 = 0x20
    id <TBScore> _popularityScore;	// 40 = 0x28
    id <TBScore> _qualityScore;	// 48 = 0x30
    long long _source;	// 56 = 0x38
    NSString *_SSID;	// 64 = 0x40
    unsigned long long _type;	// 72 = 0x48
    unsigned long long _venueGroup;	// 80 = 0x50
}

@property(readonly, nonatomic) unsigned int venueType; // @synthesize venueType=_venueType;
@property(readonly, nonatomic) unsigned long long venueGroup; // @synthesize venueGroup=_venueGroup;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) id <TBScore> qualityScore; // @synthesize qualityScore=_qualityScore;
@property(readonly, nonatomic) id <TBScore> popularityScore; // @synthesize popularityScore=_popularityScore;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) _Bool matched; // @synthesize matched=_matched;
@property(readonly, nonatomic) NSSet *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSSet *accessPoints; // @synthesize accessPoints=_accessPoints;
- (void)dealloc;	// IMP=0x00000001000f0580
- (_Bool)containsAccessPointMatchingBSSIDs:(id)arg1;	// IMP=0x00000001000f0578

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;

@end

