/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEProvider.h>

@class NSDictionary;

@interface NEAppPushProvider : NEProvider {

	NSDictionary* _providerConfiguration;

}

@property (readonly) NSDictionary * providerConfiguration;              //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
-(id)init;
-(NSDictionary *)providerConfiguration;
-(void)setProviderConfiguration:(NSDictionary *)arg1 ;
-(void)stopWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reportIncomingCallWithUserInfo:(id)arg1 ;
-(void)handleTimerEvent;
@end

