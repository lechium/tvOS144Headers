/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDIDSActivityMonitorDataSource;
@class IDSActivityMonitor, NSString;

@interface HMDIDSActivityMonitor : NSObject <HMFLogging> {

	id<HMDIDSActivityMonitorDataSource> _dataSource;
	IDSActivityMonitor* _activityMonitor;

}

@property (readonly) IDSActivityMonitor * activityMonitor;                                //@synthesize activityMonitor=_activityMonitor - In the implementation block
@property (nonatomic,retain) id<HMDIDSActivityMonitorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)description;
-(IDSActivityMonitor *)activityMonitor;
-(id<HMDIDSActivityMonitorDataSource>)dataSource;
-(void)setDataSource:(id<HMDIDSActivityMonitorDataSource>)arg1 ;
-(id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2 ;
-(id)logIdentifier;
-(void)stopBroadcastingSubActivity:(id)arg1 ;
-(void)listenWithDelegate:(id)arg1 ;
-(void)broadcastSubActivity:(id)arg1 toPushTokens:(id)arg2 ;
@end

