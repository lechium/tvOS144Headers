/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDAccessory, NSString;

@interface HMDBLEBroadcastEventReceived : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _hasExpectedGSN;
	HMDAccessory* _accessory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) BOOL hasExpectedGSN;                   //@synthesize hasExpectedGSN=_hasExpectedGSN - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)broadcastEventFromAccessory:(id)arg1 withExpectedGSN:(BOOL)arg2 ;
-(HMDAccessory *)accessory;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initBroadcastEventFromAccessory:(id)arg1 withExpectedGSN:(BOOL)arg2 ;
-(BOOL)hasExpectedGSN;
@end

