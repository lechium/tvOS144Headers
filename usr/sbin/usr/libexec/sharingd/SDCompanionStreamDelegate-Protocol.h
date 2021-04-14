//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSFileHandle, SDCompanionStream, SFCompanionService;

@protocol SDCompanionStreamDelegate <NSObject>

@optional
- (void)companionStreamClosedStreams:(SDCompanionStream *)arg1;
- (void)continuationStream:(SDCompanionStream *)arg1 connectedToService:(SFCompanionService *)arg2 withFileHandle:(NSFileHandle *)arg3 acceptHandler:(void (^)(_Bool))arg4;
@end

