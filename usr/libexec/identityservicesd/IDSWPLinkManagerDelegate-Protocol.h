//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDSWPLinkManager;

@protocol IDSWPLinkManagerDelegate <NSObject>
- (void)manager:(IDSWPLinkManager *)arg1 linkDidDisconnect:(id)arg2;
- (void)manager:(IDSWPLinkManager *)arg1 linkDidConnect:(id)arg2;
- (void)manager:(IDSWPLinkManager *)arg1 didPowerStateChange:(_Bool)arg2;
@end
