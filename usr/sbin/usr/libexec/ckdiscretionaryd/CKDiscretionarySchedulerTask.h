//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKDiscretionarySchedulerTask : NSObject
{
    unsigned long long _state;	// 8 = 0x8
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)finish;	// IMP=0x00000001000041ec
- (void)cancel;	// IMP=0x00000001000041e8
- (id)init;	// IMP=0x00000001000041ac

@end
