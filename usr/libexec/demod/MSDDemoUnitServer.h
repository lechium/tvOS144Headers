//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSDDemoUnitServer : NSObject
{
    NSString *_server;	// 8 = 0x8
    NSString *_port;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100058d24
@property(retain) NSString *port; // @synthesize port=_port;
@property(retain) NSString *server; // @synthesize server=_server;
- (void)processAndSaveRetryAfterForLogicSync:(long long)arg1;	// IMP=0x0000000100058b7c
- (id)prepareHubOfflineDurationStringForLogicSync;	// IMP=0x00000001000589b4
- (id)findMyHubWithUDID:(id)arg1 isLogicSync:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010005828c
- (id)initDefaultServer;	// IMP=0x0000000100058270
- (id)initWithServer:(id)arg1 andPort:(id)arg2;	// IMP=0x00000001000581c8

@end

