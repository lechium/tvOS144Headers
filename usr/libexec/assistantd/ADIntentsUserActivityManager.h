//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ADIntentsUserActivityManager : NSObject
{
    NSMutableDictionary *_userActivitiesStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001b1ef8
- (id)description;	// IMP=0x00000001001b1e54
- (void)reset;	// IMP=0x00000001001b1e44
- (void)setUserActivity:(id)arg1 forID:(id)arg2;	// IMP=0x00000001001b1db4
- (id)userActivityForID:(id)arg1;	// IMP=0x00000001001b1d58
- (id)init;	// IMP=0x00000001001b1ce4

@end

