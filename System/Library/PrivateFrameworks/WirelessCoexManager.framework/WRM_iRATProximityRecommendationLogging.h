/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID;

@interface WRM_iRATProximityRecommendationLogging : NSObject {

	char _nwType;
	int _beaconPER;
	NSUUID* _Uuid;
	unsigned long long _btRSSI;
	long long _wifiRSSI;
	long long _wifiSNR;
	long long _wifiCCA;
	long long _lsmRecommendationBe;
	long long _expectedThroughputVIBE;
	long long _packetLifetimeVIBE;
	long long _packetLossRateVIBE;
	long long _btRetransmissionRateTx;
	long long _btRetransmissionRateRx;
	long long _btTech;

}

@property (nonatomic,retain) NSUUID * Uuid;                                 //@synthesize Uuid=_Uuid - In the implementation block
@property (assign,nonatomic) unsigned long long btRSSI;                     //@synthesize btRSSI=_btRSSI - In the implementation block
@property (assign,nonatomic) long long wifiRSSI;                            //@synthesize wifiRSSI=_wifiRSSI - In the implementation block
@property (assign,nonatomic) long long wifiSNR;                             //@synthesize wifiSNR=_wifiSNR - In the implementation block
@property (assign,nonatomic) int beaconPER;                                 //@synthesize beaconPER=_beaconPER - In the implementation block
@property (assign,nonatomic) char nwType;                                   //@synthesize nwType=_nwType - In the implementation block
@property (assign,nonatomic) long long wifiCCA;                             //@synthesize wifiCCA=_wifiCCA - In the implementation block
@property (assign,nonatomic) long long lsmRecommendationBe;                 //@synthesize lsmRecommendationBe=_lsmRecommendationBe - In the implementation block
@property (assign,nonatomic) long long expectedThroughputVIBE;              //@synthesize expectedThroughputVIBE=_expectedThroughputVIBE - In the implementation block
@property (assign,nonatomic) long long packetLifetimeVIBE;                  //@synthesize packetLifetimeVIBE=_packetLifetimeVIBE - In the implementation block
@property (assign,nonatomic) long long packetLossRateVIBE;                  //@synthesize packetLossRateVIBE=_packetLossRateVIBE - In the implementation block
@property (assign,nonatomic) long long btRetransmissionRateTx;              //@synthesize btRetransmissionRateTx=_btRetransmissionRateTx - In the implementation block
@property (assign,nonatomic) long long btRetransmissionRateRx;              //@synthesize btRetransmissionRateRx=_btRetransmissionRateRx - In the implementation block
@property (assign,nonatomic) long long btTech;                              //@synthesize btTech=_btTech - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setWifiRSSI:(long long)arg1 ;
-(void)setWifiSNR:(long long)arg1 ;
-(void)setWifiCCA:(long long)arg1 ;
-(void)setLsmRecommendationBe:(long long)arg1 ;
-(void)setExpectedThroughputVIBE:(long long)arg1 ;
-(void)setPacketLifetimeVIBE:(long long)arg1 ;
-(void)setPacketLossRateVIBE:(long long)arg1 ;
-(void)setBtRetransmissionRateTx:(long long)arg1 ;
-(void)setBtRetransmissionRateRx:(long long)arg1 ;
-(void)setBtTech:(long long)arg1 ;
-(long long)wifiRSSI;
-(long long)wifiSNR;
-(long long)wifiCCA;
-(long long)lsmRecommendationBe;
-(long long)expectedThroughputVIBE;
-(long long)packetLifetimeVIBE;
-(long long)packetLossRateVIBE;
-(long long)btRetransmissionRateTx;
-(long long)btRetransmissionRateRx;
-(long long)btTech;
-(void)setBtRSSI:(unsigned long long)arg1 ;
-(void)setBeaconPER:(int)arg1 ;
-(void)setNwType:(char)arg1 ;
-(NSUUID *)Uuid;
-(unsigned long long)btRSSI;
-(int)beaconPER;
-(char)nwType;
@end

