/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/VCObject.h>
#import <libobjc.A.dylib/NWNetworkAgent.h>

@class NSUUID, NSString, NWNetworkAgentRegistration;

@interface VCNetworkAgentCell : VCObject <NWNetworkAgent> {

	NSUUID* _agentUUID;
	NSString* _agentDescription;
	BOOL _active;
	BOOL _voluntary;
	int _assertionRefCount;
	NWNetworkAgentRegistration* _agentRegistration;
	NSString* _wifiInterfaceName;
	BOOL kernelActivated;
	BOOL userActivated;

}

@property (readonly) BOOL cellularAssertionActive; 
@property (nonatomic,copy) NSString * agentDescription;                                  //@synthesize agentDescription=_agentDescription - In the implementation block
@property (nonatomic,copy) NSUUID * agentUUID;                                           //@synthesize agentUUID=_agentUUID - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                //@synthesize active=_active - In the implementation block
@property (assign,getter=isKernelActivated,nonatomic) BOOL kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) BOOL userActivated; 
@property (assign,getter=isVoluntary,nonatomic) BOOL voluntary;                          //@synthesize voluntary=_voluntary - In the implementation block
@property (assign,getter=isSpecificUseOnly,nonatomic) BOOL specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) BOOL networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) BOOL nexusProvider; 
@property (assign,nonatomic) BOOL supportsListenRequests; 
@property (assign,nonatomic) BOOL supportsBrowseRequests; 
@property (assign,nonatomic) BOOL supportsResolveRequests; 
@property (assign,nonatomic) BOOL requiresAssert; 
@property (assign,nonatomic) BOOL updateClientsImmediately; 
+(id)sharedInstance;
+(id)agentType;
+(id)agentDomain;
+(id)agentFromData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSUUID *)agentUUID;
-(id)copyAgentData;
-(NSString *)agentDescription;
-(void)setAgentDescription:(NSString *)arg1 ;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(BOOL)isKernelActivated;
-(void)setKernelActivated:(BOOL)arg1 ;
-(BOOL)isUserActivated;
-(void)setUserActivated:(BOOL)arg1 ;
-(BOOL)isVoluntary;
-(void)setVoluntary:(BOOL)arg1 ;
-(BOOL)cellularAssertionActive;
-(void)addCellularAssertion;
-(void)removeCellularAssertion;
-(id)queryWifiInterfaceName;
@end

