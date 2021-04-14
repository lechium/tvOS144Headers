//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface UADispatchWatchdog : NSObject
{
    _Bool _hasFired;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
    double _timeout;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_source;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001cbe0
@property _Bool hasFired; // @synthesize hasFired=_hasFired;
@property(retain) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property double timeout; // @synthesize timeout=_timeout;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)_triggerWatchdog;	// IMP=0x000000010001c9c0
- (void)cancel;	// IMP=0x000000010001c8b4
- (void)poke;	// IMP=0x000000010001c820
- (void)start;	// IMP=0x000000010001c5fc
- (void)dealloc;	// IMP=0x000000010001c590
- (id)initWithName:(id)arg1 timeout:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010001c4b4

@end

