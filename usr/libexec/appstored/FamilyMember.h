//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface FamilyMember : NSObject
{
    _Bool _currentSignedInUser;	// 8 = 0x8
    _Bool _askToBuyEnabled;	// 9 = 0x9
    _Bool _sharingPurchases;	// 10 = 0xa
    NSString *_firstName;	// 16 = 0x10
    NSNumber *_iCloudDSID;	// 24 = 0x18
    NSString *_iCloudUsername;	// 32 = 0x20
    NSNumber *_iTunesDSID;	// 40 = 0x28
    NSString *_iTunesUsername;	// 48 = 0x30
    NSString *_lastName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001002d5c60
@property(readonly, nonatomic, getter=isSharingPurchases) _Bool sharingPurchases; // @synthesize sharingPurchases=_sharingPurchases;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *iTunesUsername; // @synthesize iTunesUsername=_iTunesUsername;
@property(readonly, nonatomic) NSNumber *iTunesDSID; // @synthesize iTunesDSID=_iTunesDSID;
@property(readonly, nonatomic) NSString *iCloudUsername; // @synthesize iCloudUsername=_iCloudUsername;
@property(readonly, nonatomic) NSNumber *iCloudDSID; // @synthesize iCloudDSID=_iCloudDSID;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic, getter=isAskToBuyEnabled) _Bool askToBuyEnabled; // @synthesize askToBuyEnabled=_askToBuyEnabled;
@property(nonatomic, getter=isCurrentSignedInUser) _Bool currentSignedInUser; // @synthesize currentSignedInUser=_currentSignedInUser;
- (id)description;	// IMP=0x00000001002d5988
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000001002d52e0

@end

