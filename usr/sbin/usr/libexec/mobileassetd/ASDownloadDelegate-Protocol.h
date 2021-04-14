//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol ASDownload;

@protocol ASDownloadDelegate <NSObject>
@property(readonly, nonatomic, getter=isStalled) _Bool stalled;
- (void)updateOptionsForDownload:(id <ASDownload>)arg1 options:(NSDictionary *)arg2;
- (_Bool)downloadIsInFlight:(id <ASDownload>)arg1;
- (void)cancelDownload:(id <ASDownload>)arg1 completion:(void (^)(int))arg2;
- (void)resumeDownload:(id <ASDownload>)arg1 completion:(void (^)(int))arg2;
- (void)pauseDownload:(id <ASDownload>)arg1 completion:(void (^)(int))arg2;
- (void)startDownload:(id <ASDownload>)arg1 withOptions:(NSDictionary *)arg2 inState:(NSString *)arg3;
@end

