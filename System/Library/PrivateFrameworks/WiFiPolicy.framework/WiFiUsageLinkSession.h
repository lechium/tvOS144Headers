/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiUsageSession.h>

@interface WiFiUsageLinkSession : WiFiUsageSession {

	BOOL _linkUp;

}
-(id)initWithInterfaceName:(id)arg1 ;
-(id)metricName;
-(void)linkStateDidChange:(BOOL)arg1 isInvoluntary:(BOOL)arg2 linkChangeReason:(long long)arg3 linkChangeSubreason:(long long)arg4 withNetworkDetails:(id)arg5 ;
@end

