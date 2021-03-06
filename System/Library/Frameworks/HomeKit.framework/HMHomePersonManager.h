/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMPersonManager.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, NSString;

@interface HMHomePersonManager : HMPersonManager <HMFLogging> {

	NSUUID* _homeUUID;

}

@property (copy,readonly) NSUUID * homeUUID;                        //@synthesize homeUUID=_homeUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)personManagerUUIDFromHomeUUID:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)configure;
-(NSUUID *)homeUUID;
-(id)initWithHome:(id)arg1 ;
-(id)logIdentifier;
-(void)handleDidUpdateSettingsMessage:(id)arg1 ;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

