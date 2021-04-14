//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SBSRemoteAlertHandle;

@protocol SBSRemoteAlertHandleObserver <NSObject>

@optional
- (void)remoteAlertHandle:(SBSRemoteAlertHandle *)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)remoteAlertHandleDidDeactivate:(SBSRemoteAlertHandle *)arg1;
- (void)remoteAlertHandleDidActivate:(SBSRemoteAlertHandle *)arg1;
@end
