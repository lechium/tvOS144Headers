/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ENRegionMonitorDataSource <NSObject>
@property (assign,nonatomic,__weak) NSObject*<ENRegionMonitorSourceDelegate> delegate; 
@required
-(NSObject*<ENRegionMonitorSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)startMonitoring;
-(void)stopMonitoring;
-(id)currentRegionVisit;

@end

