//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BuddyWifiAutoJoiner : NSObject
{
    struct __WiFiManagerClient *_wifiManagerRef;	// 8 = 0x8
}

+ (void)stopAutojoiningWiFiNetworks;	// IMP=0x0000000100037760
+ (void)beginAutojoiningWiFiNetworks;	// IMP=0x0000000100037720
+ (id)_sharedInstance;	// IMP=0x00000001000376dc
- (void)stopAutojoiningWiFiNetworks;	// IMP=0x0000000100037b44
- (void)beginAutojoiningWiFiNetworks;	// IMP=0x0000000100037a98
- (struct __CFArray *)_copyAutoJoinableWiFiNetworks;	// IMP=0x0000000100037920
- (struct __WiFiNetwork *)createNetworkWithSSID:(id)arg1;	// IMP=0x00000001000377ec
- (void)dealloc;	// IMP=0x00000001000377a0

@end

