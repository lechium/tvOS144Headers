//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSUBootFirmwareUpdater.h"

@class IOServiceWriter;

@interface SPIiBootUpdater : MSUBootFirmwareUpdater
{
    IOServiceWriter *_writer;	// 80 = 0x50
}

@property(retain) IOServiceWriter *writer; // @synthesize writer=_writer;
- (void)dealloc;	// IMP=0x000000010002cb18
- (id)_stitchFirmwareImage;	// IMP=0x000000010002c92c
- (_Bool)updateBootFirmwareWithCallback:(struct ramrod_update_callbacks *)arg1 context:(struct firmware_update_context *)arg2 error:(id *)arg3;	// IMP=0x000000010002c91c
- (_Bool)updateBootFirmwareWithError:(id *)arg1;	// IMP=0x000000010002c6d0
- (id)initWithApNonce:(id)arg1;	// IMP=0x000000010002c600

@end

