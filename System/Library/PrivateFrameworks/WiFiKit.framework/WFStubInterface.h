/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WFInterface.h>

@class WFNetworkScanRecord;

@interface WFStubInterface : WFInterface {

	BOOL _currentNetworkIsDirected;
	BOOL _ipv4SelfAssigned;
	BOOL _hasNoGatewayIP;
	WFNetworkScanRecord* _currentNetwork;

}

@property (assign) BOOL currentNetworkIsDirected;              //@synthesize currentNetworkIsDirected=_currentNetworkIsDirected - In the implementation block
@property (assign) BOOL ipv4SelfAssigned;                      //@synthesize ipv4SelfAssigned=_ipv4SelfAssigned - In the implementation block
@property (assign) BOOL hasNoGatewayIP;                        //@synthesize hasNoGatewayIP=_hasNoGatewayIP - In the implementation block
-(id)interfaceName;
-(void)setCurrentNetwork:(id)arg1 ;
-(id)currentNetwork;
-(BOOL)ipv4SelfAssigned;
-(void)setIpv4SelfAssigned:(BOOL)arg1 ;
-(BOOL)hasNoGatewayIP;
-(void)setHasNoGatewayIP:(BOOL)arg1 ;
-(BOOL)currentNetworkIsDirected;
-(void)setCurrentNetworkIsDirected:(BOOL)arg1 ;
@end
