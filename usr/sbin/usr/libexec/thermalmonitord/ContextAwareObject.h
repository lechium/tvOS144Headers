//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ContextAwareObject : NSObject
{
    _Bool _infoOnlySensorsActive;	// 8 = 0x8
    int ctxType;	// 12 = 0xc
}

@property(readonly, nonatomic) int ctxType; // @synthesize ctxType;
- (void)setInfoOnlySensorsActive:(_Bool)arg1;	// IMP=0x0000000100009e3c
- (void)updateSystemPowerState:(_Bool)arg1;	// IMP=0x0000000100009e38
- (_Bool)synchContext;	// IMP=0x0000000100009df4
- (_Bool)isContextTriggered;	// IMP=0x0000000100009db0
- (int)getContextState;	// IMP=0x0000000100009d6c
- (id)initCTXBase;	// IMP=0x0000000100009d30

@end
