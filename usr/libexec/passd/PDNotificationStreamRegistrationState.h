//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableDictionary;

@interface PDNotificationStreamRegistrationState : NSObject <NSCopying>
{
    NSMutableDictionary *_notificationNameMapping;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100163840
- (void)setNotificationNames:(id)arg1 forStream:(long long)arg2;	// IMP=0x0000000100163754
- (id)notificationNamesForStream:(long long)arg1;	// IMP=0x00000001001636ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100163678
- (id)init;	// IMP=0x0000000100163614

@end

