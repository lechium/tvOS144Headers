/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface WRMClient : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	id _wrmClientDelegate;
	int _mediaControlInfoVersion;
	int _mode;
	SCD_Struct_VC89 _metricsConfig;
	int _rssiThreshold;

}

@property (assign) id<WRMClientDelegate> delegate; 
@property (assign) int mediaControlInfoVersion;                 //@synthesize mediaControlInfoVersion=_mediaControlInfoVersion - In the implementation block
-(id)init;
-(void)dealloc;
-(id<WRMClientDelegate>)delegate;
-(void)setDelegate:(id<WRMClientDelegate>)arg1 ;
-(void)setConfiguration:(SCD_Struct_VC108*)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setMediaControlInfoVersion:(int)arg1 ;
-(int)mediaControlInfoVersion;
-(void)setPreWarmState:(BOOL)arg1 ;
-(void)reportMetricsFaceTimeCalling:(const SCD_Struct_VC126*)arg1 ;
-(void)sendStatusUpdateFaceTimeCalling:(const SCD_Struct_VC111*)arg1 ;
-(void)requestNotificationFaceTimeCalling;
-(void)startWRMClientWithMode:(int)arg1 metricsConfig:(SCD_Struct_VC89)arg2 ;
-(void)stopWRMClient;
-(void)setRSSIThresholdEnabled:(BOOL)arg1 ;
-(void)reportImmediateMetric:(int)arg1 value:(unsigned long long)arg2 ;
-(void)processNotificationList:(id)arg1 ;
-(void)processWRMCoexMetrics:(id)arg1 isAlertedMode:(BOOL)arg2 ;
-(void)releaseServiceConnection;
-(BOOL)setupServiceConnection;
-(void)sendProcessInfoWithProcessID:(unsigned long long)arg1 ;
-(void)sendSubscriptionInfoFaceTimeCalling;
-(int)getWRMSubscribeVersion;
-(void)sendUnsubscriptionInfoFaceTimeCalling;
-(void)sendStatusUpdateInfoFaceTimeCalling:(id)arg1 ;
-(void)dumpReport:(id)arg1 ;
-(void)sendReport:(id)arg1 ;
-(void)reportMetricsWifiCalling:(const SCD_Struct_VC126*)arg1 ;
@end

