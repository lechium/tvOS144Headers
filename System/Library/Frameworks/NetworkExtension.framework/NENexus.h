/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NENexusAgentDelegate.h>

@protocol OS_nw_nexus, NENexusDelegate;
@class NSString, NSArray, NSObject, NSMutableDictionary, NENexusFlowManager, NEPolicySession, NENexusAgent;

@interface NENexus : NSObject <NENexusAgentDelegate> {

	BOOL _asserted;
	unsigned long long _level;
	NSString* _name;
	unsigned long long _availability;
	NSArray* _localAddresses;
	NSArray* _dnsServerAddresses;
	unsigned long long _maximumTransmissionUnit;
	NSObject*<OS_nw_nexus> _userNexus;
	NSMutableDictionary* _userNexusInstances;
	NSMutableDictionary* _userNexusClientCount;
	NSMutableDictionary* _userNexusClientFlows;
	NSMutableDictionary* _assertions;
	NEVirtualInterface_sRef _virtualInterface;
	NENexusFlowManager* _flowManager;
	NEPolicySession* _policySession;
	NENexusAgent* _agent;
	NSObject*<NENexusDelegate> _delegate;
	NSMutableDictionary* _kernelNexusClientFlows;

}

@property (retain) NSObject*<OS_nw_nexus> userNexus;                                  //@synthesize userNexus=_userNexus - In the implementation block
@property (retain) NSMutableDictionary * userNexusInstances;                          //@synthesize userNexusInstances=_userNexusInstances - In the implementation block
@property (retain) NSMutableDictionary * userNexusClientCount;                        //@synthesize userNexusClientCount=_userNexusClientCount - In the implementation block
@property (retain) NSMutableDictionary * userNexusClientFlows;                        //@synthesize userNexusClientFlows=_userNexusClientFlows - In the implementation block
@property (retain) NSMutableDictionary * assertions;                                  //@synthesize assertions=_assertions - In the implementation block
@property (getter=isAsserted) BOOL asserted;                                          //@synthesize asserted=_asserted - In the implementation block
@property (assign) NEVirtualInterface_sRef virtualInterface;                          //@synthesize virtualInterface=_virtualInterface - In the implementation block
@property (retain) NENexusFlowManager * flowManager;                                  //@synthesize flowManager=_flowManager - In the implementation block
@property (retain) NEPolicySession * policySession;                                   //@synthesize policySession=_policySession - In the implementation block
@property (retain) NENexusAgent * agent;                                              //@synthesize agent=_agent - In the implementation block
@property (__weak) NSObject*<NENexusDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableDictionary * kernelNexusClientFlows;                      //@synthesize kernelNexusClientFlows=_kernelNexusClientFlows - In the implementation block
@property (readonly) unsigned long long level;                                        //@synthesize level=_level - In the implementation block
@property (readonly) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * interfaceName; 
@property (assign,nonatomic) unsigned long long availability;                         //@synthesize availability=_availability - In the implementation block
@property (nonatomic,retain) NSArray * localAddresses;                                //@synthesize localAddresses=_localAddresses - In the implementation block
@property (nonatomic,retain) NSArray * dnsServerAddresses;                            //@synthesize dnsServerAddresses=_dnsServerAddresses - In the implementation block
@property (assign,nonatomic) unsigned long long maximumTransmissionUnit;              //@synthesize maximumTransmissionUnit=_maximumTransmissionUnit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(void)dealloc;
-(NSObject*<NENexusDelegate>)delegate;
-(void)setDelegate:(NSObject*<NENexusDelegate>)arg1 ;
-(void)cancel;
-(NSString *)interfaceName;
-(unsigned long long)level;
-(NSMutableDictionary *)assertions;
-(void)setAsserted:(BOOL)arg1 ;
-(void)setAvailability:(unsigned long long)arg1 ;
-(unsigned long long)availability;
-(NENexusAgent *)agent;
-(void)setAgent:(NENexusAgent *)arg1 ;
-(id)initWithLevel:(unsigned long long)arg1 name:(id)arg2 virtualInterfaceType:(long long)arg3 delegate:(id)arg4 channelCount:(unsigned)arg5 ;
-(NENexusFlowManager *)flowManager;
-(NSMutableDictionary *)kernelNexusClientFlows;
-(NEPolicySession *)policySession;
-(void)handleAssertFromClient:(id)arg1 ;
-(void)handleUnassertFromClient:(id)arg1 ;
-(id)initWithName:(id)arg1 delegate:(id)arg2 ;
-(void)connectNewFlow:(id)arg1 ;
-(void)disconnectFlow:(id)arg1 ;
-(void)setVirtualInterface:(NEVirtualInterface_sRef)arg1 ;
-(NEVirtualInterface_sRef)virtualInterface;
-(id)initWithLevel:(unsigned long long)arg1 name:(id)arg2 virtualInterfaceType:(long long)arg3 delegate:(id)arg4 channelCount:(unsigned)arg5 netifRingSize:(unsigned)arg6 kernelPipeTxRingSize:(unsigned)arg7 kernelPipeRxRingSize:(unsigned)arg8 ;
-(BOOL)handleRequestNexusFromClient:(id)arg1 ;
-(void)closeFlowWithClientIdentifier:(id)arg1 ;
-(void)handleStartFromClient:(id)arg1 ;
-(void)setFlowManager:(NENexusFlowManager *)arg1 ;
-(void)setPolicySession:(NEPolicySession *)arg1 ;
-(BOOL)setupFlowManager;
-(BOOL)setupPolicySession;
-(NSMutableDictionary *)userNexusClientFlows;
-(NSObject*<OS_nw_nexus>)userNexus;
-(NSMutableDictionary *)userNexusInstances;
-(NSMutableDictionary *)userNexusClientCount;
-(NSArray *)localAddresses;
-(void)rejectFlowWithClientIdentifier:(id)arg1 ;
-(BOOL)isAsserted;
-(void)setLocalAddresses:(NSArray *)arg1 ;
-(void)setDnsServerAddresses:(NSArray *)arg1 ;
-(void)setMaximumTransmissionUnit:(unsigned long long)arg1 ;
-(NSArray *)dnsServerAddresses;
-(unsigned long long)maximumTransmissionUnit;
-(void)setUserNexus:(NSObject*<OS_nw_nexus>)arg1 ;
-(void)setUserNexusInstances:(NSMutableDictionary *)arg1 ;
-(void)setUserNexusClientCount:(NSMutableDictionary *)arg1 ;
-(void)setUserNexusClientFlows:(NSMutableDictionary *)arg1 ;
-(void)setAssertions:(NSMutableDictionary *)arg1 ;
-(void)setKernelNexusClientFlows:(NSMutableDictionary *)arg1 ;
@end

