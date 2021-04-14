/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDCameraStreamSnapshotHandlerDelegate <NSObject>
@optional
-(void)streamSnapshotHandler:(id)arg1 didChangeStreamSetupInProgress:(BOOL)arg2;

@required
-(void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;
-(void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;

@end

