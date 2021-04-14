//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKRealTimeMultiplayerBulletin.h"

@interface GKRealTimeMultiplayerInitiateBulletin : GKRealTimeMultiplayerBulletin
{
    _Bool _isReconnect;	// 112 = 0x70
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003aac0
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010003aab8
@property _Bool isReconnect; // @synthesize isReconnect=_isReconnect;
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003ce18
- (void)handleDeclineAction;	// IMP=0x000000010003ccd0
- (void)handleAcceptAction;	// IMP=0x000000010003cad8
- (void)handleAction:(id)arg1;	// IMP=0x000000010003c7dc
- (void)assembleBulletin;	// IMP=0x000000010003c130
- (void)parseClientData:(id)arg1;	// IMP=0x000000010003beec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010003bd44
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010003bb98
- (id)initWithPushNotification:(id)arg1;	// IMP=0x000000010003b9f8

@end
