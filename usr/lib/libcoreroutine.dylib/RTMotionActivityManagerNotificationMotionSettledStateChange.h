/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTMotionActivityManagerNotificationMotionSettledStateChange : RTNotification {

	unsigned long long _settledState;

}

@property (nonatomic,readonly) unsigned long long settledState;              //@synthesize settledState=_settledState - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)settledState;
-(id)initWithSettledState:(unsigned long long)arg1 ;
@end

