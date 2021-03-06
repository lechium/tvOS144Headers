/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IDSCarrierTokenRequestParameters : NSObject {

	long long _subscriptionSource;
	NSString* _IMEI;
	NSString* _carrierNonce;

}

@property (nonatomic,readonly) long long subscriptionSource;              //@synthesize subscriptionSource=_subscriptionSource - In the implementation block
@property (nonatomic,readonly) NSString * IMEI;                           //@synthesize IMEI=_IMEI - In the implementation block
@property (nonatomic,readonly) NSString * carrierNonce;                   //@synthesize carrierNonce=_carrierNonce - In the implementation block
-(NSString *)IMEI;
-(id)initWithSubscriptionSource:(long long)arg1 IMEI:(id)arg2 carrierNonce:(id)arg3 ;
-(long long)subscriptionSource;
-(NSString *)carrierNonce;
@end

