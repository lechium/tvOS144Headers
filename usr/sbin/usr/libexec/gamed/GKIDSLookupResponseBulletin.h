//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKIDSLookupBulletin.h"

@class NSString;

@interface GKIDSLookupResponseBulletin : GKIDSLookupBulletin
{
    NSString *_playerID;	// 32 = 0x20
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dbca0
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
- (void)dealloc;	// IMP=0x00000001000dbc50
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00000001000dbab8

@end
