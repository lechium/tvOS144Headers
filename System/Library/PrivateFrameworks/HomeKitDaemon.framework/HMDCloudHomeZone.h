/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDCloudZone.h>

@interface HMDCloudHomeZone : HMDCloudZone {

	BOOL _sharedHome;

}

@property (getter=isSharedHome,nonatomic,readonly) BOOL sharedHome;              //@synthesize sharedHome=_sharedHome - In the implementation block
+(id)zoneRootRecordName;
+(id)zoneSubscriptionName:(id)arg1 ;
+(id)zoneSharedRootRecordName;
+(void)createHomeZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)description;
-(void)setServerChangeToken:(id)arg1 ;
-(id)createCloudZoneChangeTemporaryCache:(BOOL)arg1 ;
-(BOOL)isSharedHome;
@end

