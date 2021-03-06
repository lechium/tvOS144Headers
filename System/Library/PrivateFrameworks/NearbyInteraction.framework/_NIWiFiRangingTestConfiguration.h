/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/NearbyInteraction.framework/NearbyInteraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <NearbyInteraction/NIConfiguration.h>

@class NIDiscoveryToken, NSDictionary;

@interface _NIWiFiRangingTestConfiguration : NIConfiguration {

	NIDiscoveryToken* _peerDiscoveryToken;
	NSDictionary* _parameters;

}

@property (nonatomic,copy,readonly) NIDiscoveryToken * peerDiscoveryToken;              //@synthesize peerDiscoveryToken=_peerDiscoveryToken - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;                               //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)parameters;
-(id)descriptionInternal;
-(NIDiscoveryToken *)peerDiscoveryToken;
-(id)initWithDiscoveryToken:(id)arg1 wifiRangingParameters:(id)arg2 ;
@end

