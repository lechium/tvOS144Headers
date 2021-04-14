/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSSimpleAssertion.h>

@class ITIdleTimerConfiguration, NSString;

@interface ITIdleTimerAssertion : BSSimpleAssertion {

	ITIdleTimerConfiguration* _configuration;

}

@property (getter=_uniqueReason,nonatomic,copy,readonly) NSString * uniqueReason; 
@property (nonatomic,copy,readonly) ITIdleTimerConfiguration * configuration;                  //@synthesize configuration=_configuration - In the implementation block
-(ITIdleTimerConfiguration *)configuration;
-(id)succinctDescriptionBuilder;
-(id)_uniqueReason;
-(id)_initWithConfiguration:(id)arg1 forReason:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
@end
