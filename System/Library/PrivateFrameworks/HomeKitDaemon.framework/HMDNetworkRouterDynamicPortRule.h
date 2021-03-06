/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/HMDNetworkRouterLANRule.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HMDNetworkRouterRuleDirection, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterProtocol, HMDNetworkRouterAdvertisementProtocol, HAPTLVUnsignedNumberValue, HMDNetworkRouterServiceType, NSString;

@interface HMDNetworkRouterDynamicPortRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol> {

	HMDNetworkRouterRuleDirection* _direction;
	HMDNetworkRouterLANIdentifierList* _lanIdentifierList;
	HMDNetworkRouterProtocol* _protocol;
	HMDNetworkRouterAdvertisementProtocol* _advertisementProtocol;
	HAPTLVUnsignedNumberValue* _flags;
	HMDNetworkRouterServiceType* _serviceType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HMDNetworkRouterRuleDirection * direction;                                  //@synthesize direction=_direction - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterLANIdentifierList * lanIdentifierList;                      //@synthesize lanIdentifierList=_lanIdentifierList - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterProtocol * protocol;                                        //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterAdvertisementProtocol * advertisementProtocol;              //@synthesize advertisementProtocol=_advertisementProtocol - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterServiceType * serviceType;                                  //@synthesize serviceType=_serviceType - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)ruleFromFirewallRuleLAN:(id)arg1 ;
+(id)ruleForHAP;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(HAPTLVUnsignedNumberValue *)flags;
-(HMDNetworkRouterProtocol *)protocol;
-(HMDNetworkRouterServiceType *)serviceType;
-(void)setServiceType:(HMDNetworkRouterServiceType *)arg1 ;
-(void)setProtocol:(HMDNetworkRouterProtocol *)arg1 ;
-(void)setFlags:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HMDNetworkRouterRuleDirection *)direction;
-(void)setDirection:(HMDNetworkRouterRuleDirection *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)addTo:(id)arg1 ;
-(id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 protocol:(id)arg3 advertisementProtocol:(id)arg4 flags:(id)arg5 serviceType:(id)arg6 ;
-(void)setAdvertisementProtocol:(HMDNetworkRouterAdvertisementProtocol *)arg1 ;
-(HMDNetworkRouterAdvertisementProtocol *)advertisementProtocol;
-(void)setLanIdentifierList:(HMDNetworkRouterLANIdentifierList *)arg1 ;
-(HMDNetworkRouterLANIdentifierList *)lanIdentifierList;
@end

