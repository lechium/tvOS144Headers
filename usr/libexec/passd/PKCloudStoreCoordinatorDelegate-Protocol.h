//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol PKCloudStoreCoordinatorDelegate <NSObject>
- (void)recreateZone:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(NSString *)arg2 qualityOfService:(long long)arg3 completion:(void (^)(PKCloudRecordObject *, NSError *))arg4;
@end

