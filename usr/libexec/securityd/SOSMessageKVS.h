//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SOSMessage.h"

__attribute__((visibility("hidden")))
@interface SOSMessageKVS : SOSMessage
{
    struct __CFDictionary *pending_changes;	// 32 = 0x20
}

@property struct __CFDictionary *pending_changes; // @synthesize pending_changes;
- (_Bool)SOSTransportMessageSendMessages:(id)arg1 pm:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001ddf04
- (_Bool)SOSTransportMessageSyncWithPeers:(id)arg1 p:(struct __CFSet *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001dde18
- (struct __CFDictionary *)SOSTransportMessageHandlePeerMessageReturnsHandledCopy:(id)arg1 peerMessages:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001ddcb4
- (_Bool)SOSTransportMessageCleanupAfterPeerMessages:(id)arg1 peers:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001ddbd0
- (long long)SOSTransportMessageGetTransportType:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001ddbc8
- (_Bool)SOSTransportMessageKVSAppendKeyInterest:(id)arg1 ak:(struct __CFArray *)arg2 firstUnlock:(struct __CFArray *)arg3 unlocked:(struct __CFArray *)arg4 err:(struct __CFError **)arg5;	// IMP=0x00000001001dd9d8
- (id)SOSTransportMessageGetAccount;	// IMP=0x00000001001dd9d0
- (void *)SOSTransportMessageGetEngine;	// IMP=0x00000001001dd9c8
- (struct __CFString *)SOSTransportMessageGetCircleName;	// IMP=0x00000001001dd9c0
- (long long)SOSTransportMessageGetTransportType;	// IMP=0x00000001001dd9b8
- (void)dealloc;	// IMP=0x00000001001dd95c
- (id)initWithAccount:(id)arg1 andName:(id)arg2;	// IMP=0x00000001001dd80c

@end

