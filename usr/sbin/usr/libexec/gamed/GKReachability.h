//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKReachability : NSObject
{
    _Bool localWiFiRef;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
}

+ (_Bool)_gkIsOnline;	// IMP=0x000000010008e7fc
+ (id)_gkReachabilityForLocalWiFi;	// IMP=0x000000010008e6ac
+ (id)_gkReachabilityForInternetConnection;	// IMP=0x000000010008e650
+ (id)_gkReachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x000000010008e600
+ (id)_gkReachabilityWithHostName:(id)arg1;	// IMP=0x000000010008e5a8
- (int)_gkCurrentReachabilityStatus;	// IMP=0x000000010008e79c
- (_Bool)_gkConnectionRequired;	// IMP=0x000000010008e764
- (int)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x000000010008e730
- (int)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x000000010008e720
- (void)dealloc;	// IMP=0x000000010008e550
- (void)_gkStopNotifier;	// IMP=0x000000010008e50c
- (_Bool)_gkStartNotifier;	// IMP=0x000000010008e2f0

@end
