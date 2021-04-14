//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HBAppInfo;

@protocol HBAppInfoObserver <NSObject>

@optional
- (void)appInfoCacheDeletingDidChange:(HBAppInfo *)arg1;
- (void)appInfoDotStyleDidChange:(HBAppInfo *)arg1;
- (void)appInfoInstallStateDidChange:(HBAppInfo *)arg1;
- (void)appInfoIconDidChange:(HBAppInfo *)arg1;
- (void)appInfoBadgeValueDidChange:(HBAppInfo *)arg1;
- (void)appInfoDisplayNameDidChange:(HBAppInfo *)arg1;
@end

