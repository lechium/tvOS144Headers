/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NAFuture, HMBCloudZoneRebuilderStatus;


@protocol HMBCloudZoneRebuilder
@property (nonatomic,readonly) NAFuture * rebuildCompleteFuture; 
@property (copy,readonly) HMBCloudZoneRebuilderStatus * rebuilderStatus; 
@property (getter=isZoneRebuildInProgress,nonatomic,readonly) BOOL zoneRebuildInProgress; 
@required
-(void)rebuild;
-(HMBCloudZoneRebuilderStatus *)rebuilderStatus;
-(NAFuture *)rebuildCompleteFuture;
-(id)zoneStartUp;
-(void)handleIdentityLost;
-(BOOL)isZoneRebuildInProgress;
-(void)handleZoneChanged;

@end

