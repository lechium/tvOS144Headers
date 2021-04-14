//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IAPSessionList : NSObject
{
    struct map<unsigned short, IAPSession *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, IAPSession *>>> _iapSessionMap;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000100017714
- (void).cxx_destruct;	// IMP=0x0000000100017700
- (id)sessionsWithProtocolID:(unsigned char)arg1;	// IMP=0x00000001000175d4
- (id)sessionWithProtocolID:(unsigned char)arg1;	// IMP=0x00000001000174ec
- (id)sessionWithSessionID:(unsigned short)arg1;	// IMP=0x0000000100017430
- (id)sessionsForClientID:(unsigned int)arg1;	// IMP=0x00000001000172f4
- (id)sessions;	// IMP=0x0000000100017210
- (void)removeSessionWithSessionID:(unsigned short)arg1;	// IMP=0x0000000100017118
- (void)addSession:(id)arg1 withSessionID:(unsigned short)arg2;	// IMP=0x0000000100016f5c
- (void)dealloc;	// IMP=0x0000000100016e48
- (id)init;	// IMP=0x0000000100016ddc

@end
