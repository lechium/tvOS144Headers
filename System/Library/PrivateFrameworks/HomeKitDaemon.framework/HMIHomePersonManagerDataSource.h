/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMIHomePersonManagerDataSource <HMIPersonManagerDataSource>
@optional
-(void)associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)fetchAllUnassociatedFaceCropsWithCompletion:(/*^block*/id)arg1;
-(void)removePersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeFaceprintsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1;
-(void)addFaceprints:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addFaceCrops:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addPersons:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addPersonFaceCrops:(id)arg1 completion:(/*^block*/id)arg2;

@end

