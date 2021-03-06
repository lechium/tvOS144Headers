//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface RescueAbandonedPlaceholderOperation : ISOperation
{
    NSString *_bundleID;	// 96 = 0x60
    CDUnknownBlockType _outputBlock;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000100156eac
- (_Bool)_isRestoreRunning;	// IMP=0x0000000100156e40
- (id)_fetchAppProxyForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100156a5c
- (_Bool)_canRescueInstallTypeForBundleID:(id)arg1 proxy:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001566f0
- (_Bool)_attemptRescueForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100156328
- (void)run;	// IMP=0x0000000100155fe0
@property(copy, nonatomic) CDUnknownBlockType outputBlock;
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100155e6c

@end

