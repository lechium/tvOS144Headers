//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSBeepCanceller, NSData;

@protocol CSBeepCancellerDelegate <NSObject>
- (void)beepCancellerDidCancelSamples:(CSBeepCanceller *)arg1 buffer:(NSData *)arg2 timestamp:(unsigned long long)arg3;
@end
