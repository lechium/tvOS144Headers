//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataWriter-Protocol.h"

@class GKDataTransport, NSNumber, NSString;

@interface GKDelayedSetPhotoNetworkWriter : NSObject <GKDataWriter>
{
    NSString *_bagKey;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
    NSNumber *_avatarType;	// 24 = 0x18
}

+ (id)writerWithTransport:(id)arg1 forBagKey:(id)arg2;	// IMP=0x00000001000872d8
- (void).cxx_destruct;	// IMP=0x0000000100089378
@property(copy, nonatomic) NSNumber *avatarType; // @synthesize avatarType=_avatarType;
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
- (void)uploadProfileImageMetadata:(id)arg1 fromUploadURL:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100088ae8
- (void)uploadImageData:(id)arg1 toURL:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100087d78
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000873f8
- (id)initWithTransport:(id)arg1 forBagKey:(id)arg2;	// IMP=0x0000000100087350

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

