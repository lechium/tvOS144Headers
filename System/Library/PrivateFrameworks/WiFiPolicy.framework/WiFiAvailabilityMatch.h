/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiRecommendation.h>

@protocol WiFiCandidateNetwork, WiFiScannedNetwork;
@class NSString, NSDate;

@interface WiFiAvailabilityMatch : NSObject <WiFiRecommendation> {

	BOOL _unwantedNetworkName;
	long long _priority;
	id<WiFiCandidateNetwork> _network;
	NSString* _SSID;
	id<WiFiScannedNetwork> _scannedNetwork;
	NSDate* _matchedAt;

}

@property (nonatomic,retain) id<WiFiScannedNetwork> scannedNetwork;              //@synthesize scannedNetwork=_scannedNetwork - In the implementation block
@property (nonatomic,retain) NSDate * matchedAt;                                 //@synthesize matchedAt=_matchedAt - In the implementation block
@property (assign,nonatomic) BOOL unwantedNetworkName;                           //@synthesize unwantedNetworkName=_unwantedNetworkName - In the implementation block
@property (setter=SID,nonatomic,copy,readonly) NSString * SSID;                  //@synthesize SSID=_SSID - In the implementation block
@property (nonatomic,readonly) id<WiFiCandidateNetwork> network;                 //@synthesize network=_network - In the implementation block
@property (nonatomic,readonly) long long priority;                               //@synthesize priority=_priority - In the implementation block
+(id)matchWithNetwork:(id)arg1 scannedNetwork:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)priority;
-(id<WiFiCandidateNetwork>)network;
-(NSString *)SSID;
-(id)initWithNetwork:(id)arg1 scannedNetwork:(id)arg2 ;
-(BOOL)isEqualToAvailabilityMatch:(id)arg1 ;
-(id<WiFiScannedNetwork>)scannedNetwork;
-(NSDate *)matchedAt;
-(BOOL)unwantedNetworkName;
-(BOOL)isEqualToScannedNetwork:(id)arg1 ;
-(void)setScannedNetwork:(id<WiFiScannedNetwork>)arg1 ;
-(void)setMatchedAt:(NSDate *)arg1 ;
-(void)setUnwantedNetworkName:(BOOL)arg1 ;
@end

