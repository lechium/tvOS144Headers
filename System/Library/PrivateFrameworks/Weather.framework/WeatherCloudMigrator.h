/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WeatherDeviceLookup;

@interface WeatherCloudMigrator : NSObject {

	WeatherDeviceLookup* _deviceLookup;

}

@property (nonatomic,readonly) WeatherDeviceLookup * deviceLookup;              //@synthesize deviceLookup=_deviceLookup - In the implementation block
-(id)init;
-(BOOL)storeRequiresMigration:(id)arg1 ;
-(void)migrateStore:(id)arg1 toStore:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)eraseStoreIfNeeded:(id)arg1 ;
-(WeatherDeviceLookup *)deviceLookup;
@end

