/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFBlacklistDelegate;
@class NSMutableArray;

@interface WFBlacklistEngine : NSObject {

	unsigned long long _profile;
	NSMutableArray* _blacklist;
	BOOL _enabled;
	id<WFBlacklistDelegate> _blacklistDelegate;
	NSMutableArray* _ssidThresholds;
	NSMutableArray* _bssidThresholds;
	double _wowBlacklistExpiry;
	double _autojoinBlacklistExpiry;
	double _bssBlacklistExpiry;

}

@property (assign,nonatomic) id<WFBlacklistDelegate> blacklistDelegate;              //@synthesize blacklistDelegate=_blacklistDelegate - In the implementation block
@property (assign) BOOL enabled;                                                     //@synthesize enabled=_enabled - In the implementation block
@property (retain) NSMutableArray * ssidThresholds;                                  //@synthesize ssidThresholds=_ssidThresholds - In the implementation block
@property (retain) NSMutableArray * bssidThresholds;                                 //@synthesize bssidThresholds=_bssidThresholds - In the implementation block
@property (assign) double wowBlacklistExpiry;                                        //@synthesize wowBlacklistExpiry=_wowBlacklistExpiry - In the implementation block
@property (assign) double autojoinBlacklistExpiry;                                   //@synthesize autojoinBlacklistExpiry=_autojoinBlacklistExpiry - In the implementation block
@property (assign) double bssBlacklistExpiry;                                        //@synthesize bssBlacklistExpiry=_bssBlacklistExpiry - In the implementation block
+(id)stringRepresentationWithReason:(unsigned long long)arg1 ;
+(id)stringRepresentationWithState:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setBlacklistDelegate:(id<WFBlacklistDelegate>)arg1 ;
-(void)setWowBlacklistExpiry:(double)arg1 ;
-(void)setAutojoinBlacklistExpiry:(double)arg1 ;
-(void)setBssBlacklistExpiry:(double)arg1 ;
-(void)setDefaultBlacklistThresholds;
-(NSMutableArray *)bssidThresholds;
-(NSMutableArray *)ssidThresholds;
-(id)_findBlacklistNode:(id)arg1 ;
-(BOOL)_ignoreTriggersForDeviceProfile:(unsigned long long)arg1 node:(id)arg2 ;
-(BOOL)_evaluateTriggersForBlacklisting:(id)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3 bssid:(id)arg4 ssid:(id)arg5 state:(unsigned long long)arg6 ;
-(void)_printBlacklist;
-(id<WFBlacklistDelegate>)blacklistDelegate;
-(void)setTriggerForNetworkWithReasonAndState:(id)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3 bssid:(id)arg4 state:(unsigned long long)arg5 ;
-(BOOL)_meetsThresholds:(unsigned long long)arg1 count:(unsigned)arg2 perSsid:(BOOL)arg3 bssid:(id)arg4 ssid:(id)arg5 ;
-(void)_setBlacklistedState:(id)arg1 state:(unsigned long long)arg2 reason:(unsigned long long)arg3 reasonData:(long long)arg4 ;
-(BOOL)isNetworkInBlacklistedState:(id)arg1 state:(unsigned long long)arg2 ;
-(double)autojoinBlacklistExpiry;
-(double)bssBlacklistExpiry;
-(double)wowBlacklistExpiry;
-(void)removeBlacklistedStates;
-(BOOL)_evaluateTriggersForUnblacklisting:(id)arg1 unblacklistReason:(unsigned long long)arg2 ssid:(id)arg3 ;
-(id)initWithBlacklistDelegate:(id)arg1 profile:(unsigned long long)arg2 ;
-(void)configureBlacklistedStateExpiryIntervalInSec:(double)arg1 state:(unsigned long long)arg2 ;
-(BOOL)changeBlacklistingThresholds:(unsigned long long)arg1 value:(unsigned)arg2 perSsid:(BOOL)arg3 ;
-(void)setTriggerForNetworkWithReason:(id)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3 bssid:(id)arg4 ;
-(BOOL)removeBlacklistedStateForNetworkWithReason:(id)arg1 state:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(void)removeBlacklistedStateWithUnblacklistType:(unsigned long long)arg1 ;
-(void)removeExpiredBlacklistedState:(unsigned long long)arg1 ;
-(void)clearTriggerForNetworkWithUnblacklistReason:(id)arg1 reason:(unsigned long long)arg2 ;
-(void)networkPruned:(id)arg1 ;
-(void)networkRemovedForSsid:(id)arg1 ;
-(id)retrieveNetworksInBlacklistedState:(unsigned long long)arg1 ;
-(id)retrieveNetworksInBlacklistedStateHistory:(unsigned long long)arg1 ;
-(id)retrieveBlacklistedStateHistoryForNetwork:(id)arg1 state:(unsigned long long)arg2 timestamps:(id)arg3 reasonData:(id)arg4 ;
-(id)retrieveReasonsForNetworkInBlacklistedState:(id)arg1 state:(unsigned long long)arg2 timestamps:(id)arg3 reasonData:(id)arg4 ;
-(long long)getRssiWhenNetworkWasBlacklisted:(id)arg1 ;
-(BOOL)isNetworkBlacklistedForAutoJoinDueToTrigDisc:(id)arg1 rssi:(long long*)arg2 timestamp:(double*)arg3 ;
-(id)retrieveBlacklistedNetworkSsids:(unsigned long long)arg1 ;
-(unsigned long long)getBlacklistedNetworkCount;
-(id)getBlacklist;
-(id)getNodeFromBlacklist:(id)arg1 ;
-(void)setSsidThresholds:(NSMutableArray *)arg1 ;
-(void)setBssidThresholds:(NSMutableArray *)arg1 ;
@end

