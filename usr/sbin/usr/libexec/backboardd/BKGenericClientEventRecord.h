//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol BKHIDEventDispatcher, NSObject;

@interface BKGenericClientEventRecord : NSObject
{
    id <NSObject> _context;	// 8 = 0x8
    id <BKHIDEventDispatcher> _eventDispatcher;	// 16 = 0x10
    NSSet *_destinations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000208f0

@end

