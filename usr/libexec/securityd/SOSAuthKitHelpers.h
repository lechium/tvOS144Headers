//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface SOSAuthKitHelpers : NSObject
{
    NSSet *_midList;	// 8 = 0x8
    NSSet *_machineIDs;	// 16 = 0x10
    NSSet *_serialNumbers;	// 24 = 0x18
}

+ (_Bool)accountIsHSA2;	// IMP=0x00000001001ba990
+ (_Bool)updateMIDInPeerInfo:(id)arg1;	// IMP=0x00000001001ba7fc
+ (_Bool)peerinfoHasMID:(id)arg1;	// IMP=0x00000001001ba7bc
+ (void)activeMIDs:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ba1fc
+ (id)machineID;	// IMP=0x00000001001b9edc
- (void).cxx_destruct;	// IMP=0x00000001001b9ea0
@property(retain, nonatomic) NSSet *serialNumbers; // @synthesize serialNumbers=_serialNumbers;
@property(retain, nonatomic) NSSet *machineIDs; // @synthesize machineIDs=_machineIDs;
@property(retain, nonatomic) NSSet *midList; // @synthesize midList=_midList;
- (_Bool)isUseful;	// IMP=0x00000001001b9e3c
- (_Bool)serialIsValidInList:(id)arg1;	// IMP=0x00000001001b9e20
- (_Bool)midIsValidInList:(id)arg1;	// IMP=0x00000001001b9e04
- (id)initWithActiveMIDS:(id)arg1;	// IMP=0x00000001001b9b2c

@end

