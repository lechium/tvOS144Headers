/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/__HMDRegisteredIdentity.h>

@class HMDAccount;

@interface __HMDRegisteredAccountIdentity : __HMDRegisteredIdentity {

	HMDAccount* _account;

}

@property (readonly) HMDAccount * account;              //@synthesize account=_account - In the implementation block
-(id)initWithIdentity:(id)arg1 ;
-(HMDAccount *)account;
-(id)initWithIdentity:(id)arg1 account:(id)arg2 ;
@end

