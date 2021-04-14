//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol OTAuthKitAdapterNotifier;

@protocol OTAuthKitAdapter
- (void)registerNotification:(id <OTAuthKitAdapterNotifier>)arg1;
- (void)fetchCurrentDeviceList:(void (^)(NSSet *, NSError *))arg1;
- (NSString *)machineID:(id *)arg1;
- (_Bool)accountIsDemoAccount:(id *)arg1;
- (_Bool)accountIsHSA2ByAltDSID:(NSString *)arg1;
- (NSString *)primaryiCloudAccountAltDSID:(id *)arg1;
@end

