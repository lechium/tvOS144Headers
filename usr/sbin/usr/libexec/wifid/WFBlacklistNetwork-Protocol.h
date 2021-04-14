//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;
@protocol WFBlacklistNetwork;

@protocol WFBlacklistNetwork <NSObject, NSCopying>
@property(readonly, getter=isEAP) _Bool EAP;
@property(readonly, getter=isProfileBased) _Bool profileBased;
@property(readonly) long long rssi;
@property(readonly, copy) NSString *bssid;
@property(readonly, copy) NSString *ssid;
- (_Bool)isEqualToBlacklistNetwork:(id <WFBlacklistNetwork>)arg1;
@end

