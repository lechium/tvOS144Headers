//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NIDiscoveryToken, NINearbyObject, NINearbyUpdatesEngine;

@protocol NINearbyUpdatesEngineDataSource <NSObject>
- (basic_string_90719d97)uniqueIdentifierForEngine:(NINearbyUpdatesEngine *)arg1;
- (NINearbyObject *)objectFromIdentifier:(unsigned long long)arg1;
- (optional_df22365f)identifierFromDiscoveryToken:(NIDiscoveryToken *)arg1;
- (NIDiscoveryToken *)discoveryTokenFromIdentifier:(unsigned long long)arg1;
@end
