/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiUsageSession.h>

@interface WiFiUsageDeviceSession : WiFiUsageSession {

	BOOL _firstDisplayOn;

}
-(id)initWithInterfaceName:(id)arg1 ;
-(id)metricName;
-(void)systemWakeStateDidChange:(BOOL)arg1 wokenByWiFi:(BOOL)arg2 ;
-(void)displayStateDidChange:(BOOL)arg1 ;
@end

