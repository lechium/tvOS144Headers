/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, IDSWRMMetricContainer;

@interface IDSWRMExchange : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	unsigned long long _recommendedLinkType;
	unsigned long long _activeLinkType;
	unsigned long long _activeRecommendationType;
	BOOL _registered;
	BOOL _subscribed;
	unsigned long long _reportInterval;
	BOOL _shouldSendReport;
	IDSWRMMetricContainer* _metrics;
	unsigned short _connectCount;
	unsigned long long _nearbyOverWiFi;
	BOOL _isPaired;
	BOOL _isNearby;
	BOOL _isConnected;
	int _isPairedNotifyToken;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	/*^block*/id _delegateBlock;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(unsigned long long)recommendedLinkType;
-(void)submitMetric:(id)arg1 ;
-(void)_resetLocalMetric;
-(void)_startXPCConnection;
-(void)_registerWithWRM;
-(void)_stopXPCConnection;
-(void)_processXPCEvent:(id)arg1 ;
-(void)_restartSubscriptionIfNeeded;
-(id)_newSubscribeStatusUpdateMessage;
-(void)_sendXPCMessage:(id)arg1 ;
-(void)_submitBlockAsync:(/*^block*/id)arg1 ;
-(BOOL)_processXPCMessage:(id)arg1 ;
-(void)_reconnectUntilTimeout;
-(void)_restartClient;
-(void)_dispatchAfter:(double)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_isXPCDictionary:(id)arg1 ;
-(id)_newPrefSubscribeMessage:(BOOL)arg1 ;
-(id)_newRegisterMessage;
-(void)unsubscribeForRecommendation;
-(id)_newSubscribeMessage;
-(id)_newUnsubscribeMessage;
-(BOOL)_setRecommendedLinkType:(unsigned long long)arg1 ;
-(BOOL)_processLinkPreferenceNotificationEvent:(id)arg1 ;
-(BOOL)_processMetricsConfigEvent:(id)arg1 ;
-(void)_notifyDelegate;
-(void)_sendMetricReportPeriodically;
-(void)_setReportInterval:(unsigned long long)arg1 ;
-(id)_newMetricReportMessage;
-(void)_sendMetricReport;
-(void)_updateLocalMetric:(id)arg1 ;
-(id)_newSubscribeStatusUpdateMessage:(BOOL)arg1 nearby:(BOOL)arg2 ;
-(void)subscribeForRecommendation:(id)arg1 recommendationType:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)isWiFiRecommended;
-(BOOL)isBTRecommended;
-(void)handleActiveLinkChange:(unsigned long long)arg1 ;
-(void)handleNetworkStateChangeUpdate:(BOOL)arg1 nearby:(BOOL)arg2 ;
@end

