/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSString, NSDate, NSSet;

@interface NetworkAnalyticsStateRelay : NSObject {

	NSMutableSet* _defaultGateways;
	BOOL _active;
	BOOL _primary;
	BOOL _knownGood;
	BOOL _rxSignalThresholded;
	BOOL _rxSignalFullBars;
	BOOL _txThresholded;
	BOOL _arpOut;
	BOOL _dnsOut;
	BOOL _internetDnsOut;
	BOOL _stuckDefRoute;
	BOOL _tcpExtraStatsPositive;
	BOOL _apsdFailure;
	unsigned char _powerCostDL;
	unsigned char _powerCostUL;
	unsigned char _signalBars;
	unsigned char _radioTechnology;
	BOOL _lqmAsystole;
	BOOL _supportsIPv4;
	BOOL _supportsIPv6;
	unsigned _rxSignalExemptions;
	unsigned _tcpProgressHintsScore;
	int _linkQuality;
	int _advisory;
	int _lastReportedRxSignalStrength;
	NSString* _interfaceName;
	unsigned long long _interfaceIndex;
	long long _interface;
	unsigned long long _lastReportedL2TxFrames;
	unsigned long long _lastReportedL2TxRetry;
	unsigned long long _lastReportedL2TxFail;
	NSDate* _madePrimaryDate;
	unsigned long long _l2MetricsCount;

}

@property (retain) NSString * interfaceName;                               //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) unsigned long long interfaceIndex;                      //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (assign) BOOL active;                                            //@synthesize active=_active - In the implementation block
@property (assign) BOOL primary;                                           //@synthesize primary=_primary - In the implementation block
@property (assign) BOOL knownGood;                                         //@synthesize knownGood=_knownGood - In the implementation block
@property (assign) BOOL rxSignalThresholded;                               //@synthesize rxSignalThresholded=_rxSignalThresholded - In the implementation block
@property (assign) BOOL rxSignalFullBars;                                  //@synthesize rxSignalFullBars=_rxSignalFullBars - In the implementation block
@property (assign) BOOL txThresholded;                                     //@synthesize txThresholded=_txThresholded - In the implementation block
@property (assign) BOOL arpOut;                                            //@synthesize arpOut=_arpOut - In the implementation block
@property (assign) BOOL dnsOut;                                            //@synthesize dnsOut=_dnsOut - In the implementation block
@property (assign) BOOL internetDnsOut;                                    //@synthesize internetDnsOut=_internetDnsOut - In the implementation block
@property (assign) BOOL stuckDefRoute;                                     //@synthesize stuckDefRoute=_stuckDefRoute - In the implementation block
@property (assign,nonatomic) unsigned rxSignalExemptions;                  //@synthesize rxSignalExemptions=_rxSignalExemptions - In the implementation block
@property (assign) int linkQuality;                                        //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign) int advisory;                                           //@synthesize advisory=_advisory - In the implementation block
@property (assign) unsigned char powerCostDL;                              //@synthesize powerCostDL=_powerCostDL - In the implementation block
@property (assign) unsigned char powerCostUL;                              //@synthesize powerCostUL=_powerCostUL - In the implementation block
@property (assign) unsigned char signalBars;                               //@synthesize signalBars=_signalBars - In the implementation block
@property (assign) unsigned char radioTechnology;                          //@synthesize radioTechnology=_radioTechnology - In the implementation block
@property (assign) BOOL lqmAsystole;                                       //@synthesize lqmAsystole=_lqmAsystole - In the implementation block
@property (assign) BOOL supportsIPv4;                                      //@synthesize supportsIPv4=_supportsIPv4 - In the implementation block
@property (assign) BOOL supportsIPv6;                                      //@synthesize supportsIPv6=_supportsIPv6 - In the implementation block
@property (assign) int lastReportedRxSignalStrength;                       //@synthesize lastReportedRxSignalStrength=_lastReportedRxSignalStrength - In the implementation block
@property (assign) unsigned long long lastReportedL2TxFrames;              //@synthesize lastReportedL2TxFrames=_lastReportedL2TxFrames - In the implementation block
@property (assign) unsigned long long lastReportedL2TxRetry;               //@synthesize lastReportedL2TxRetry=_lastReportedL2TxRetry - In the implementation block
@property (assign) unsigned long long lastReportedL2TxFail;                //@synthesize lastReportedL2TxFail=_lastReportedL2TxFail - In the implementation block
@property (assign) unsigned long long l2MetricsCount;                      //@synthesize l2MetricsCount=_l2MetricsCount - In the implementation block
@property (retain) NSDate * madePrimaryDate;                               //@synthesize madePrimaryDate=_madePrimaryDate - In the implementation block
@property (readonly) long long interface;                                  //@synthesize interface=_interface - In the implementation block
@property (assign) BOOL tcpExtraStatsPositive;                             //@synthesize tcpExtraStatsPositive=_tcpExtraStatsPositive - In the implementation block
@property (assign) BOOL apsdFailure;                                       //@synthesize apsdFailure=_apsdFailure - In the implementation block
@property (assign) unsigned tcpProgressHintsScore;                         //@synthesize tcpProgressHintsScore=_tcpProgressHintsScore - In the implementation block
@property (readonly) NSSet * defaultGateways; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)description;
-(long long)interface;
-(NSString *)interfaceName;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(int)advisory;
-(void)setActive:(BOOL)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(int)linkQuality;
-(void)setLinkQuality:(int)arg1 ;
-(unsigned char)radioTechnology;
-(void)setRadioTechnology:(unsigned char)arg1 ;
-(BOOL)active;
-(void)setInterfaceIndex:(unsigned long long)arg1 ;
-(unsigned long long)interfaceIndex;
-(void)setPrimary:(BOOL)arg1 ;
-(BOOL)supportsIPv6;
-(BOOL)supportsIPv4;
-(BOOL)primary;
-(unsigned char)powerCostDL;
-(unsigned char)powerCostUL;
-(void)setPowerCostDL:(unsigned char)arg1 ;
-(void)setPowerCostUL:(unsigned char)arg1 ;
-(void)setSignalBars:(unsigned char)arg1 ;
-(unsigned char)signalBars;
-(NSDate *)madePrimaryDate;
-(void)setRxSignalThresholded:(BOOL)arg1 ;
-(void)setSupportsIPv4:(BOOL)arg1 ;
-(void)setSupportsIPv6:(BOOL)arg1 ;
-(void)setLastReportedL2TxFrames:(unsigned long long)arg1 ;
-(void)setLastReportedL2TxFail:(unsigned long long)arg1 ;
-(BOOL)rxSignalThresholded;
-(unsigned long long)lastReportedL2TxFrames;
-(unsigned long long)lastReportedL2TxFail;
-(BOOL)rxSignalFullBars;
-(BOOL)txThresholded;
-(BOOL)arpOut;
-(BOOL)dnsOut;
-(BOOL)internetDnsOut;
-(BOOL)stuckDefRoute;
-(unsigned)rxSignalExemptions;
-(BOOL)tcpExtraStatsPositive;
-(BOOL)apsdFailure;
-(unsigned)tcpProgressHintsScore;
-(BOOL)knownGood;
-(void)setKnownGood:(BOOL)arg1 ;
-(void)setRxSignalFullBars:(BOOL)arg1 ;
-(void)setTxThresholded:(BOOL)arg1 ;
-(void)setArpOut:(BOOL)arg1 ;
-(void)setDnsOut:(BOOL)arg1 ;
-(void)setInternetDnsOut:(BOOL)arg1 ;
-(void)setStuckDefRoute:(BOOL)arg1 ;
-(void)setRxSignalExemptions:(unsigned)arg1 ;
-(void)setTcpExtraStatsPositive:(BOOL)arg1 ;
-(void)setApsdFailure:(BOOL)arg1 ;
-(void)setTcpProgressHintsScore:(unsigned)arg1 ;
-(void)setAdvisory:(int)arg1 ;
-(BOOL)lqmAsystole;
-(void)setLqmAsystole:(BOOL)arg1 ;
-(void)addDefaultGateway:(id)arg1 ;
-(void)removeAllDefaultGateways;
-(NSSet *)defaultGateways;
-(void)populatePropertiesOnAWDMetric:(id)arg1 ingress:(BOOL)arg2 ;
-(void)updateSignalStrength:(id)arg1 ;
-(id)initForInternalType:(long long)arg1 ;
-(int)lastReportedRxSignalStrength;
-(void)setLastReportedRxSignalStrength:(int)arg1 ;
-(unsigned long long)lastReportedL2TxRetry;
-(void)setLastReportedL2TxRetry:(unsigned long long)arg1 ;
-(void)setMadePrimaryDate:(NSDate *)arg1 ;
-(unsigned long long)l2MetricsCount;
-(void)setL2MetricsCount:(unsigned long long)arg1 ;
@end

