//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKRealTimeMultiplayerBulletin.h"

@class NSString;

@interface GKRealTimeMultiplayerActionBulletin : GKRealTimeMultiplayerBulletin
{
    NSString *_debugLine;	// 112 = 0x70
    NSString *_notificationName;	// 120 = 0x78
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d550
@property(readonly) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(readonly) NSString *debugLine; // @synthesize debugLine=_debugLine;
- (_Bool)isAccept;	// IMP=0x000000010003fcf0
- (id)getNotificationName;	// IMP=0x000000010003fcb4
- (id)getDebugLine;	// IMP=0x000000010003fc78
@property(readonly) NSString *aggregateDictionaryKey;
- (void)assembleBulletin;	// IMP=0x000000010003fa64
- (void)setInvitedPlayerRespondedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003e354
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003dc40

@end
