//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ConnectionInfo : NSObject
{
    NSString *_connectionType;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100003154
@property(readonly) NSString *connectionType; // @synthesize connectionType=_connectionType;
- (void)reachabilityCallback:(id)arg1;	// IMP=0x000000010000313c
@property(readonly) _Bool onCellular;
- (void)dealloc;	// IMP=0x00000001000030f0
- (id)init;	// IMP=0x0000000100002e10

@end

