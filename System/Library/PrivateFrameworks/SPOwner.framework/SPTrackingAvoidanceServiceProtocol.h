/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SPTrackingAvoidanceServiceProtocol <NSObject>
@required
-(void)didDetectUnauthorizedTrackingWithCompletion:(id)arg1 completion:(/*^block*/id)arg2;
-(void)didUpdateUnauthorizedTrackingWithCompletion:(id)arg1 completion:(/*^block*/id)arg2;
-(void)didWithdrawUnauthorizedTrackingWithCompletion:(id)arg1 completion:(/*^block*/id)arg2;
-(void)ignoreBeaconByUUID:(id)arg1 until:(unsigned long long)arg2;
-(void)ignoreBeaconByUUID:(id)arg1 untilDate:(id)arg2 completion:(/*^block*/id)arg3;
-(void)ignoringUnauthorizedTrackingWithCompletion:(id)arg1 completion:(/*^block*/id)arg2;
-(void)unauthorizedTrackingTypeWithCompletion:(id)arg1 completion:(/*^block*/id)arg2;
-(void)acceptUTForBeaconUUID:(id)arg1;
-(void)playUnauthorizedSoundOnBeaconByUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)ignoreBeaconByUUID:(id)arg1 until:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)ignoreBeaconByAdvertisement:(id)arg1 until:(unsigned long long)arg2 completion:(/*^block*/id)arg3;

@end

