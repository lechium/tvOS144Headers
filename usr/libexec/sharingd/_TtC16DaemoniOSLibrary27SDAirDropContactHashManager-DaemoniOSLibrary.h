//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC16DaemoniOSLibrary27SDAirDropContactHashManager.h"

@interface _TtC16DaemoniOSLibrary27SDAirDropContactHashManager (DaemoniOSLibrary)
+ (id)myMediumHashes:(id)arg1;	// IMP=0x00000001001eae74
+ (id)generateShortHashDataFromEmails:(id)arg1;	// IMP=0x00000001001eadf0
+ (id)GeneralContactKeysToFetch;	// IMP=0x00000001001ea4fc
+ (id)macOSDisplayContactKeysToFetch;	// IMP=0x00000001001ea36c
+ (id)iOSDisplayContactKeysToFetch;	// IMP=0x00000001001ea33c
+ (id)ContactHashableKeysToFetch;	// IMP=0x00000001001ea008
- (id)_contactIDForEmailOrPhone:(id)arg1;	// IMP=0x00000001001e9e44
- (id)contactOrFakeMeCardWithIdentifier:(id)arg1;	// IMP=0x00000001001e988c
- (_Bool)contactsContainsShortHashes:(id)arg1;	// IMP=0x00000001001e94c0
- (id)contactIdentifierForMediumHashes:(id)arg1;	// IMP=0x00000001001e90e4
- (id)addressOrNumForHash:(id)arg1;	// IMP=0x00000001001e8dc0
- (id)contactForCombinedHash:(id)arg1;	// IMP=0x00000001001e8d90
- (void)updateMeCard:(id)arg1;	// IMP=0x00000001001e8d28
- (void)forcePersistNow;	// IMP=0x00000001001e85f4
- (void)hashesNeedUpdating;	// IMP=0x00000001001e8008
- (void)activate;	// IMP=0x00000001001e7c80
@end

