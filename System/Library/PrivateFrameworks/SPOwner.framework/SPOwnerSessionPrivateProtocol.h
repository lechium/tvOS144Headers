/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SPOwnerSessionPrivateProtocol <SPOwnerSessionProtocol>
@required
-(oneway void)beaconForUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)forceDistributeKeysWithCompletion:(/*^block*/id)arg1;
-(oneway void)forceUpdateKeyMapsForUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)forceUpdateKeyAlignmentRecordForUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)beaconStoreStatusWithCompletion:(/*^block*/id)arg1;
-(void)waitForBeaconStoreAvailableWithCompletion:(/*^block*/id)arg1;
-(void)sendRegisterIntentWithCompletion:(/*^block*/id)arg1;
-(void)sendUnregisterIntentWithCompletion:(/*^block*/id)arg1;
-(oneway void)forceKeySyncForBeaconUUID:(id)arg1 lastObservationDate:(id)arg2 lastObservationIndex:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(oneway void)fakeClassicPairingWithMACAddress:(id)arg1 completion:(/*^block*/id)arg2;
-(void)rawSearchResultsForBeacon:(id)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3;

@end

