//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFDeviceContext.h>

@class AFPeerInfo, NSUUID;

@interface AFMutableDeviceContext : AFDeviceContext
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010012be24
- (void)removeContextSnapshotForType:(id)arg1;	// IMP=0x000000010012bd4c
- (void)setSerializedContextSnapshot:(id)arg1 withMetadata:(id)arg2;	// IMP=0x000000010012bb60
- (void)setContextSnapshot:(id)arg1 withMetadata:(id)arg2;	// IMP=0x000000010012bad4
@property(nonatomic) long long privacyClass; // @dynamic privacyClass;
@property(copy, nonatomic) AFPeerInfo *deviceInfo; // @dynamic deviceInfo;
@property(copy, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(nonatomic) _Bool fromLocalDevice; // @dynamic fromLocalDevice;

@end

