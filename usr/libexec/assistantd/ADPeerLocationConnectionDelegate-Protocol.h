//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ADPeerLocationConnection, CLLocation;

@protocol ADPeerLocationConnectionDelegate <NSObject>
- (void)peerLocationConnectionSuggestsClearingCachedLocation:(ADPeerLocationConnection *)arg1;
- (void)peerLocationConnection:(ADPeerLocationConnection *)arg1 didReceiveUnsolicitedLocation:(CLLocation *)arg2;
@end
