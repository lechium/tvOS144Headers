//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, NSString, SASyncAppMetaData;

@protocol AFSyncBeginInfo
- (void)resetWithValidity:(NSString *)arg1;
- (NSSet *)reasons;
- (SASyncAppMetaData *)appMetadata;
- (NSString *)key;
- (long long)count;
- (NSString *)validity;
- (NSString *)anchor;
@end
