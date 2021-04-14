/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSString;


@protocol WFOtherNetworkProviderContext <WFCredentialsProviderContext>
@property (nonatomic,readonly) BOOL WAPIEnabled; 
@property (nonatomic,readonly) NSArray * WAPIRootCertificates; 
@property (nonatomic,readonly) NSArray * WAPIIdentities; 
@property (nonatomic,readonly) BOOL supportsRandomMACAddress; 
@property (nonatomic,readonly) BOOL isUsingRandomMACAddress; 
@property (nonatomic,copy,readonly) NSString * randomMACAddress; 
@property (nonatomic,copy,readonly) NSString * hardwareMACAddress; 
@required
-(BOOL)isUsingRandomMACAddress;
-(NSString *)randomMACAddress;
-(NSString *)hardwareMACAddress;
-(NSArray *)WAPIRootCertificates;
-(NSArray *)WAPIIdentities;
-(void)saveRandomMAC;
-(void)saveHardwareMAC;
-(BOOL)WAPIEnabled;
-(BOOL)supportsRandomMACAddress;

@end
