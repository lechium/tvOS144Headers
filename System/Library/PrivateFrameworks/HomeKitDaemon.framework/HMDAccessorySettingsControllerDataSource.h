/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HMDBackingStore, HMFActivity;


@protocol HMDAccessorySettingsControllerDataSource
@property (readonly) HMDBackingStore * backingStore; 
@property (retain) HMFActivity * setupActivity; 
@property (assign) double setupStartTimestamp; 
@property (assign) double homepodSetupLatency; 
@property (assign) double homepodSettingsCreationTimestamp; 
@required
-(HMDBackingStore *)backingStore;
-(double)homepodSettingsCreationTimestamp;
-(double)homepodSetupLatency;
-(void)setHomepodSetupLatency:(double)arg1;
-(void)setHomepodSettingsCreationTimestamp:(double)arg1;
-(HMFActivity *)setupActivity;
-(void)setSetupActivity:(id)arg1;
-(void)setSetupStartTimestamp:(double)arg1;
-(double)setupStartTimestamp;
-(id)modelsToMakeSettingsForController:(id)arg1 parentUUID:(id)arg2;
-(id)modelsToMigrateSettingsForController:(id)arg1;

@end

