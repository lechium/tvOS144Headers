//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponseMutating-Protocol.h"

@class ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse, NSString;

@interface _ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponseMutation : NSObject <ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponseMutating>
{
    ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse *_baseModel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000eb87c
- (id)generate;	// IMP=0x00000001000eb848
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00000001000eb7d0
- (id)init;	// IMP=0x00000001000eb7c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

