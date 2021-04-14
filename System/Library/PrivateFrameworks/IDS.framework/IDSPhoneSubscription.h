/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDS/IDS-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IDSPhoneSubscription : NSObject <NSSecureCoding, NSCopying> {

	long long _subscriptionSlot;

}

@property (nonatomic,readonly) long long subscriptionSlot;              //@synthesize subscriptionSlot=_subscriptionSlot - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)phoneSubscriptionWithSubscriptionSlot:(long long)arg1 ;
+(id)CTSIMSFromPhoneSubscriptions:(id)arg1 ;
+(id)phoneSubscriptionsFromCTSIMs:(id)arg1 ;
+(id)phoneSubscriptionWithSIM:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)matchingSim;
-(long long)subscriptionSlot;
-(id)initWithSubscriptionSlot:(long long)arg1 ;
-(BOOL)isEqualToPhoneSubscription:(id)arg1 ;
@end
