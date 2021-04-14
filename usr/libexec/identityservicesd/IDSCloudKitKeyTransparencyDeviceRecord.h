//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface IDSCloudKitKeyTransparencyDeviceRecord : NSObject
{
    NSData *_deviceData;	// 8 = 0x8
    NSData *_deviceMetadata;	// 16 = 0x10
}

+ (id)recordWithDeviceData:(id)arg1 deviceMetadata:(id)arg2;	// IMP=0x0000000100172688
- (void).cxx_destruct;	// IMP=0x0000000100172e98
@property(readonly, nonatomic) NSData *deviceMetadata; // @synthesize deviceMetadata=_deviceMetadata;
@property(readonly, nonatomic) NSData *deviceData; // @synthesize deviceData=_deviceData;
- (unsigned long long)hash;	// IMP=0x0000000100172db4
- (_Bool)isEqualToCloudKitKeyTransparencyDeviceRecord:(id)arg1;	// IMP=0x0000000100172a5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100172978
- (id)description;	// IMP=0x0000000100172880
- (id)initWithDeviceData:(id)arg1 deviceMetadata:(id)arg2;	// IMP=0x0000000100172734

@end

