/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VCEmulatedNetworkAlgorithm.h>

@class NSDictionary, NSString;

@interface VCEmulatedNetworkAlgorithmQueueBandwidth : NSObject <VCEmulatedNetworkAlgorithm> {

	NSDictionary* _policies;
	double _expectedProcessEndTime;
	unsigned _packetCountInNetworkQueue;
	unsigned _networkQueueServiceRate;
	unsigned _networkQueueServiceRateMean;
	unsigned _networkQueueServiceRateStdDev;
	int _currentIndexForServiceRate;
	int _currentIndexForServiceRateDistribution;
	double _lastNetworkQueueServiceRateLoadTime;
	double _lastNetworkQueueServiceRateDistributionLoadTime;

}

@property (nonatomic,readonly) double expectedProcessEndTime;              //@synthesize expectedProcessEndTime=_expectedProcessEndTime - In the implementation block
@property (assign) unsigned packetCountInNetworkQueue;                     //@synthesize packetCountInNetworkQueue=_packetCountInNetworkQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)process:(id)arg1 ;
-(double)computeNetworkServiceRate;
-(void)updateSettingsAtTime:(double)arg1 impairments:(id)arg2 ;
-(double)expectedProcessEndTime;
-(unsigned)packetCountInNetworkQueue;
-(void)setPacketCountInNetworkQueue:(unsigned)arg1 ;
@end

