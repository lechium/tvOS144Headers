//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSArray;

@interface ACAccount (amsaccountsd)
- (void)amsd_setPrivateListeningEnabled:(_Bool)arg1;	// IMP=0x0000000100001d44
- (void)amsd_removeRecordZoneName:(id)arg1;	// IMP=0x0000000100001c1c
- (void)amsd_removeAllRecordZoneNames;	// IMP=0x0000000100001ad4
- (void)amsd_addRecordZoneName:(id)arg1 homeUserIdentifier:(id)arg2;	// IMP=0x000000010000194c
@property(readonly, nonatomic) NSArray *amsd_recordZoneNames;
@end

