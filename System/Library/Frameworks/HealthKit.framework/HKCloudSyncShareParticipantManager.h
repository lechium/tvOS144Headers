/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, HKHealthStore, NSString;

@interface HKCloudSyncShareParticipantManager : NSObject <_HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) long long lastKnownParticipantSharingStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)serverInterface;
+(id)clientInterface;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(long long)lastKnownParticipantSharingStatus;
-(void)fetchAllShareParticipantEmailAddressesWithCompletion:(/*^block*/id)arg1 ;
-(void)revokeAccessForAllShareParticipantsWithCompletion:(/*^block*/id)arg1 ;
-(void)tearDownHealthSharingForProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

