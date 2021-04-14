/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@protocol OS_dispatch_queue;
@class CoreTelephonyClient, CTXPCServiceSubscriptionContext, ImpoExpoService, AnalyticsWorkspace, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSNumber, NSString;

@interface CoreTelephonyShim : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {

	CoreTelephonyClient* coreTelephonyClient;
	CTXPCServiceSubscriptionContext* coreTelephonyClientContext;
	long long currentSubscriberSlotID;
	os_unfair_lock_s coreTelephonyClientContextLock;
	ImpoExpoService* ieService;
	AnalyticsWorkspace* workspace;
	id engineReadyObserver;
	BOOL initializationComplete;
	NSArray* lastCellInfo;
	timeval lastCellInfoTime;
	NSMutableArray* cellInfoCompletionHandlers;
	BOOL cellInfoInflight;
	os_unfair_lock_s cellInfoLock;
	NSMutableDictionary* _carrierNameForSlot;
	unsigned ctClientInitReadyFlag;
	unsigned long long _pendingCTNotificationRegistrationFlags;
	unsigned long long _currentCTNotificationRegistrationFlags;
	NSMutableSet* _ctRnfChangedDelegates;
	os_unfair_lock_s rnfChangedLock;
	NSMutableSet* _ctSignalStrengthChangedDelegates;
	os_unfair_lock_s signalStrengthChangedLock;
	NSMutableSet* delegates;
	NSObject*<OS_dispatch_queue> elevatedQueue;
	NSMutableDictionary* _subscriptions;
	CTServerConnectionRef _ctServerConnection;
	NSMutableDictionary* _subscribers;
	NSNumber* _currentSubscriberTag;

}

@property (nonatomic,readonly) NSMutableDictionary * subscriptions;                   //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,readonly) CTServerConnectionRef ctServerConnection;              //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * subscribers;                     //@synthesize subscribers=_subscribers - In the implementation block
@property (nonatomic,readonly) NSNumber * currentSubscriberTag;                       //@synthesize currentSubscriberTag=_currentSubscriberTag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)elevatedQueue;
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)subscriptionInfoDidChange;
-(void)activeSubscriptionsDidChange;
-(void)simLessSubscriptionsDidChange;
-(void)reliableNetworkFallbackChanged:(BOOL)arg1 userEnabled:(BOOL)arg2 ;
-(void)smartDataModeChanged:(id)arg1 userEnabled:(BOOL)arg2 ;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(void)signalStrengthChanged:(id)arg1 info:(id)arg2 ;
-(void)enhancedDataLinkQualityChanged:(id)arg1 metric:(id)arg2 ;
-(void)cellMonitorUpdate:(id)arg1 info:(id)arg2 ;
-(void)ratSelectionChanged:(id)arg1 selection:(id)arg2 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(NSMutableDictionary *)subscribers;
-(NSMutableDictionary *)subscriptions;
-(void)commonInit;
-(id)_coreTelephonyClient;
-(CTServerConnectionRef)ctServerConnection;
-(void)_completeInitialization;
-(NSNumber *)currentSubscriberTag;
-(void)copyCellInfoOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unregisterSignalStrengthChangedWithDelegate:(id)arg1 ;
-(void)registerSignalStrengthChangedWithDelegate:(id)arg1 ;
-(void)updateSubscribers;
-(id)elevatedQueue;
-(void)_processEngineReadyNotification:(id)arg1 ;
-(void)initializeCoreTelephonyClientAsNecessary;
-(void)_updateSubscribers;
-(void)_processPendingCoreTelephonyNotificationRegistrations;
-(void)handleCTServerNotification:(CFStringRef)arg1 notificationInfo:(CFDictionaryRef)arg2 ;
-(void)carrierSettingsDidChange;
-(void)_deliverRNFSettingAvailable:(BOOL)arg1 enabled:(BOOL)arg2 ;
-(void)_deliverSignalStrengthChanged:(id)arg1 ;
-(void)_registerForCoreTelephonyNotifications:(unsigned long long)arg1 ;
-(id)getCurrentDataSubscriptionContext;
-(void)_unregisterFromCoreTelephonyNotifications:(unsigned long long)arg1 ;
-(id)dictionaryForSubscriptionContext:(id)arg1 ;
-(id)extractCellInfo:(id)arg1 ;
-(id)cellCarrierNameForContext:(id)arg1 refresh:(BOOL)arg2 ;
-(BOOL)getSmartDataModeSetting;
-(void)_deliverSmartDataModeSettingChanged:(BOOL)arg1 ;
-(void)processDataStatus:(id)arg1 forContext:(id)arg2 ;
-(BOOL)subscriptionContextIsCurrentDataSubscription:(id)arg1 ;
-(BOOL)findSubscriberExactMatchForICCID:(id)arg1 MDN:(id)arg2 slotID:(long long)arg3 ;
-(BOOL)findSubscriberBestMatchForICCID:(id)arg1 MDN:(id)arg2 slotID:(long long)arg3 update:(BOOL)arg4 ;
-(void)addNewSubscriberForICCID:(id)arg1 MDN:(id)arg2 slotID:(long long)arg3 ;
-(void)updateCurrentSubscriberTag:(id)arg1 ;
-(id)getSortedSubscriberKeys;
-(id)internalVariables;
-(void)_setInitializationComplete:(BOOL)arg1 ;
-(void)_setCurrentSubscriberSlotID:(long long)arg1 ;
-(void)registerRNFChangedWithDelegate:(id)arg1 ;
-(void)unregisterRNFChangedWithDelegate:(id)arg1 ;
-(void)_dispatchCellInfoResult:(id)arg1 error:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

