//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString, NSUUID;

@protocol ASSyncConnectionDelegate
- (_Bool)sendSyncChunksWithPreAnchor:(NSString *)arg1 postAnchor:(NSString *)arg2 updates:(NSArray *)arg3 deletes:(NSArray *)arg4 validity:(NSString *)arg5 forRequestUUID:(NSUUID *)arg6;
@end

