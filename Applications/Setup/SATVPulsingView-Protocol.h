//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SATVPulsingAnimationDelegate;

@protocol SATVPulsingView <NSObject>
@property(nonatomic) unsigned long long mode;
@property(nonatomic) __weak id <SATVPulsingAnimationDelegate> animationDelegate;
- (void)pulseAtBeginTime:(double)arg1;
- (id)initWithMode:(unsigned long long)arg1;
@end

