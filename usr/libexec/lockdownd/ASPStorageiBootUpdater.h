//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSUBootFirmwareUpdater.h"

@class DevNodeWriter;

@interface ASPStorageiBootUpdater : MSUBootFirmwareUpdater
{
    DevNodeWriter *_llbWriter;	// 80 = 0x50
    DevNodeWriter *_firmwareWriter;	// 88 = 0x58
}

@property(retain) DevNodeWriter *firmwareWriter; // @synthesize firmwareWriter=_firmwareWriter;
@property(retain) DevNodeWriter *llbWriter; // @synthesize llbWriter=_llbWriter;
- (void)dealloc;	// IMP=0x000000010002c568
- (_Bool)updateBootFirmwareWithCallback:(struct ramrod_update_callbacks *)arg1 context:(struct firmware_update_context *)arg2 error:(id *)arg3;	// IMP=0x000000010002c558
- (_Bool)updateBootFirmwareWithError:(id *)arg1;	// IMP=0x000000010002bddc
- (id)initWithApNonce:(id)arg1;	// IMP=0x000000010002bd38

@end

