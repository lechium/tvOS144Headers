//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol GCLightServiceServerInterface
- (void)readLightWithReply:(void (^)(float, float, float))arg1;
- (void)updateLightWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
@end

