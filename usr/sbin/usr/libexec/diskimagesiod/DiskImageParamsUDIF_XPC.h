//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DiskImageParamsXPC.h"

@interface DiskImageParamsUDIF_XPC : DiskImageParamsXPC
{
    unique_ptr_4b18bc19 _header;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100021564
- (id).cxx_construct;	// IMP=0x0000000100021838
- (void).cxx_destruct;	// IMP=0x0000000100021818
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100021780
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002156c
- (_Bool)isWritableFormat;	// IMP=0x000000010002155c
- (unsigned long long)blockSize;	// IMP=0x0000000100021554
- (unsigned long long)numBlocks;	// IMP=0x000000010002153c
- (unique_ptr_13efee05)createDiskImage;	// IMP=0x0000000100021120
- (id)initWithBackendXPC:(id)arg1 header:(unique_ptr_4b18bc19)arg2;	// IMP=0x00000001000210b4

@end

