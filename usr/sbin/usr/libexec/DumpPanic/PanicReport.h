//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSAnalytics/OSAStackShotReport.h>

@class NSNumber, NSString;

@interface PanicReport : OSAStackShotReport
{
    NSString *_panicString;	// 152 = 0x98
    NSString *_otherString;	// 160 = 0xa0
    NSString *_buildVersion;	// 168 = 0xa8
    unsigned long long _panicFlags;	// 176 = 0xb0
    _Bool _isBtnReset;	// 184 = 0xb8
    NSString *_storagePanicData;	// 192 = 0xc0
    NSString *_socdPanicString;	// 200 = 0xc8
    NSString *_socdContainer;	// 208 = 0xd0
    NSString *_socdNandContainer;	// 216 = 0xd8
    NSNumber *_foregroundAppHash;	// 224 = 0xe0
    _Bool _foregroundAppHashSet;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x000000010000b6dc
- (void)generateLogAtLevel:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b01c
- (id)reportNamePrefix;	// IMP=0x000000010000af70
- (id)appleCareDetails;	// IMP=0x000000010000af64
- (id)problemType;	// IMP=0x000000010000af3c
- (void)useStoragePanicData:(id)arg1;	// IMP=0x000000010000af28
- (id)additionalIPSMetadata;	// IMP=0x000000010000ae6c
- (id)getBuildVersionString;	// IMP=0x000000010000ad54
- (void)setForegroundAppHash:(id)arg1;	// IMP=0x000000010000ad14
- (void)useSocdContainer:(id)arg1 encodedSocdContainer:(id)arg2;	// IMP=0x000000010000ac98
- (void)useSocdNandContainer:(id)arg1;	// IMP=0x000000010000ac84
- (id)initWithPanicString:(id)arg1 otherString:(id)arg2 buildVersion:(id)arg3 panicFlags:(unsigned long long)arg4;	// IMP=0x000000010000aaec

@end
