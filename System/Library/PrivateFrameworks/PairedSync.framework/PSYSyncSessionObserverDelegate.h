/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSYSyncSessionObserverDelegate <NSObject>
@optional
-(void)supportsMigrationSync;

@required
-(void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2;
-(void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2;
-(void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2;

@end

