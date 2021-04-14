/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDSymptomsAdvisoryAlternateNetworkType : PBCodable <NSCopying> {

	SCD_Struct_AW7* _cellEgressTriggers;
	SCD_Struct_AW7* _cellIngressTriggers;
	SCD_Struct_AW7* _wifiEgressTriggers;
	SCD_Struct_AW7* _wifiIngressTriggers;
	unsigned long long _adviceHeldForSecs;
	unsigned long long _timestamp;
	unsigned _activationIdentifier;
	int _advice;
	int _advisor;
	int _bailOutOf;
	unsigned _cellularDataUsage;
	unsigned _comingFromState;
	int _egressMobilityCode;
	int _egressTrigger;
	unsigned _egressTriggerMultiplier;
	int _egressTriggerOn;
	unsigned _egressTriggerPercentagex100;
	NSMutableArray* _egressTriggerSignatures;
	int _ingressMobilityCode;
	int _ingressTrigger;
	unsigned _ingressTriggerMultiplier;
	int _ingressTriggerOn;
	unsigned _ingressTriggerPercentagex100;
	NSMutableArray* _ingressTriggerSignatures;
	int _policy;
	unsigned _transitionsSuppressedByMobility;
	BOOL _kernelProbingActivated;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAdvice; 
@property (assign,nonatomic) int advice;                                                 //@synthesize advice=_advice - In the implementation block
@property (assign,nonatomic) BOOL hasBailOutOf; 
@property (assign,nonatomic) int bailOutOf;                                              //@synthesize bailOutOf=_bailOutOf - In the implementation block
@property (assign,nonatomic) BOOL hasAdviceHeldForSecs; 
@property (assign,nonatomic) unsigned long long adviceHeldForSecs;                       //@synthesize adviceHeldForSecs=_adviceHeldForSecs - In the implementation block
@property (assign,nonatomic) BOOL hasKernelProbingActivated; 
@property (assign,nonatomic) BOOL kernelProbingActivated;                                //@synthesize kernelProbingActivated=_kernelProbingActivated - In the implementation block
@property (assign,nonatomic) BOOL hasIngressTrigger; 
@property (assign,nonatomic) int ingressTrigger;                                         //@synthesize ingressTrigger=_ingressTrigger - In the implementation block
@property (assign,nonatomic) BOOL hasIngressTriggerOn; 
@property (assign,nonatomic) int ingressTriggerOn;                                       //@synthesize ingressTriggerOn=_ingressTriggerOn - In the implementation block
@property (assign,nonatomic) BOOL hasIngressTriggerMultiplier; 
@property (assign,nonatomic) unsigned ingressTriggerMultiplier;                          //@synthesize ingressTriggerMultiplier=_ingressTriggerMultiplier - In the implementation block
@property (assign,nonatomic) BOOL hasIngressTriggerPercentagex100; 
@property (assign,nonatomic) unsigned ingressTriggerPercentagex100;                      //@synthesize ingressTriggerPercentagex100=_ingressTriggerPercentagex100 - In the implementation block
@property (assign,nonatomic) BOOL hasEgressTrigger; 
@property (assign,nonatomic) int egressTrigger;                                          //@synthesize egressTrigger=_egressTrigger - In the implementation block
@property (assign,nonatomic) BOOL hasEgressTriggerOn; 
@property (assign,nonatomic) int egressTriggerOn;                                        //@synthesize egressTriggerOn=_egressTriggerOn - In the implementation block
@property (assign,nonatomic) BOOL hasEgressTriggerMultiplier; 
@property (assign,nonatomic) unsigned egressTriggerMultiplier;                           //@synthesize egressTriggerMultiplier=_egressTriggerMultiplier - In the implementation block
@property (assign,nonatomic) BOOL hasEgressTriggerPercentagex100; 
@property (assign,nonatomic) unsigned egressTriggerPercentagex100;                       //@synthesize egressTriggerPercentagex100=_egressTriggerPercentagex100 - In the implementation block
@property (nonatomic,retain) NSMutableArray * ingressTriggerSignatures;                  //@synthesize ingressTriggerSignatures=_ingressTriggerSignatures - In the implementation block
@property (nonatomic,retain) NSMutableArray * egressTriggerSignatures;                   //@synthesize egressTriggerSignatures=_egressTriggerSignatures - In the implementation block
@property (assign,nonatomic) BOOL hasComingFromState; 
@property (assign,nonatomic) unsigned comingFromState;                                   //@synthesize comingFromState=_comingFromState - In the implementation block
@property (assign,nonatomic) BOOL hasIngressMobilityCode; 
@property (assign,nonatomic) int ingressMobilityCode;                                    //@synthesize ingressMobilityCode=_ingressMobilityCode - In the implementation block
@property (assign,nonatomic) BOOL hasEgressMobilityCode; 
@property (assign,nonatomic) int egressMobilityCode;                                     //@synthesize egressMobilityCode=_egressMobilityCode - In the implementation block
@property (assign,nonatomic) BOOL hasTransitionsSuppressedByMobility; 
@property (assign,nonatomic) unsigned transitionsSuppressedByMobility;                   //@synthesize transitionsSuppressedByMobility=_transitionsSuppressedByMobility - In the implementation block
@property (assign,nonatomic) BOOL hasCellularDataUsage; 
@property (assign,nonatomic) unsigned cellularDataUsage;                                 //@synthesize cellularDataUsage=_cellularDataUsage - In the implementation block
@property (assign,nonatomic) BOOL hasPolicy; 
@property (assign,nonatomic) int policy;                                                 //@synthesize policy=_policy - In the implementation block
@property (assign,nonatomic) BOOL hasAdvisor; 
@property (assign,nonatomic) int advisor;                                                //@synthesize advisor=_advisor - In the implementation block
@property (assign,nonatomic) BOOL hasActivationIdentifier; 
@property (assign,nonatomic) unsigned activationIdentifier;                              //@synthesize activationIdentifier=_activationIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long wifiIngressTriggersCount; 
@property (nonatomic,readonly) int* wifiIngressTriggers; 
@property (nonatomic,readonly) unsigned long long cellIngressTriggersCount; 
@property (nonatomic,readonly) int* cellIngressTriggers; 
@property (nonatomic,readonly) unsigned long long wifiEgressTriggersCount; 
@property (nonatomic,readonly) int* wifiEgressTriggers; 
@property (nonatomic,readonly) unsigned long long cellEgressTriggersCount; 
@property (nonatomic,readonly) int* cellEgressTriggers; 
+(Class)ingressTriggerSignatureType;
+(Class)egressTriggerSignatureType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)policy;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setPolicy:(int)arg1 ;
-(int)advice;
-(void)addIngressTriggerSignature:(id)arg1 ;
-(void)addEgressTriggerSignature:(id)arg1 ;
-(unsigned long long)ingressTriggerSignaturesCount;
-(void)clearIngressTriggerSignatures;
-(id)ingressTriggerSignatureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)egressTriggerSignaturesCount;
-(void)clearEgressTriggerSignatures;
-(id)egressTriggerSignatureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)wifiIngressTriggersCount;
-(void)clearWifiIngressTriggers;
-(int)wifiIngressTriggersAtIndex:(unsigned long long)arg1 ;
-(void)addWifiIngressTriggers:(int)arg1 ;
-(unsigned long long)cellIngressTriggersCount;
-(void)clearCellIngressTriggers;
-(int)cellIngressTriggersAtIndex:(unsigned long long)arg1 ;
-(void)addCellIngressTriggers:(int)arg1 ;
-(unsigned long long)wifiEgressTriggersCount;
-(void)clearWifiEgressTriggers;
-(int)wifiEgressTriggersAtIndex:(unsigned long long)arg1 ;
-(void)addWifiEgressTriggers:(int)arg1 ;
-(unsigned long long)cellEgressTriggersCount;
-(void)clearCellEgressTriggers;
-(int)cellEgressTriggersAtIndex:(unsigned long long)arg1 ;
-(void)addCellEgressTriggers:(int)arg1 ;
-(void)setAdvice:(int)arg1 ;
-(void)setHasAdvice:(BOOL)arg1 ;
-(BOOL)hasAdvice;
-(id)adviceAsString:(int)arg1 ;
-(int)StringAsAdvice:(id)arg1 ;
-(int)bailOutOf;
-(void)setBailOutOf:(int)arg1 ;
-(void)setHasBailOutOf:(BOOL)arg1 ;
-(BOOL)hasBailOutOf;
-(id)bailOutOfAsString:(int)arg1 ;
-(int)StringAsBailOutOf:(id)arg1 ;
-(void)setAdviceHeldForSecs:(unsigned long long)arg1 ;
-(void)setHasAdviceHeldForSecs:(BOOL)arg1 ;
-(BOOL)hasAdviceHeldForSecs;
-(void)setKernelProbingActivated:(BOOL)arg1 ;
-(void)setHasKernelProbingActivated:(BOOL)arg1 ;
-(BOOL)hasKernelProbingActivated;
-(int)ingressTrigger;
-(void)setIngressTrigger:(int)arg1 ;
-(void)setHasIngressTrigger:(BOOL)arg1 ;
-(BOOL)hasIngressTrigger;
-(id)ingressTriggerAsString:(int)arg1 ;
-(int)StringAsIngressTrigger:(id)arg1 ;
-(int)ingressTriggerOn;
-(void)setIngressTriggerOn:(int)arg1 ;
-(void)setHasIngressTriggerOn:(BOOL)arg1 ;
-(BOOL)hasIngressTriggerOn;
-(id)ingressTriggerOnAsString:(int)arg1 ;
-(int)StringAsIngressTriggerOn:(id)arg1 ;
-(void)setIngressTriggerMultiplier:(unsigned)arg1 ;
-(void)setHasIngressTriggerMultiplier:(BOOL)arg1 ;
-(BOOL)hasIngressTriggerMultiplier;
-(void)setIngressTriggerPercentagex100:(unsigned)arg1 ;
-(void)setHasIngressTriggerPercentagex100:(BOOL)arg1 ;
-(BOOL)hasIngressTriggerPercentagex100;
-(int)egressTrigger;
-(void)setEgressTrigger:(int)arg1 ;
-(void)setHasEgressTrigger:(BOOL)arg1 ;
-(BOOL)hasEgressTrigger;
-(id)egressTriggerAsString:(int)arg1 ;
-(int)StringAsEgressTrigger:(id)arg1 ;
-(int)egressTriggerOn;
-(void)setEgressTriggerOn:(int)arg1 ;
-(void)setHasEgressTriggerOn:(BOOL)arg1 ;
-(BOOL)hasEgressTriggerOn;
-(id)egressTriggerOnAsString:(int)arg1 ;
-(int)StringAsEgressTriggerOn:(id)arg1 ;
-(void)setEgressTriggerMultiplier:(unsigned)arg1 ;
-(void)setHasEgressTriggerMultiplier:(BOOL)arg1 ;
-(BOOL)hasEgressTriggerMultiplier;
-(void)setEgressTriggerPercentagex100:(unsigned)arg1 ;
-(void)setHasEgressTriggerPercentagex100:(BOOL)arg1 ;
-(BOOL)hasEgressTriggerPercentagex100;
-(void)setComingFromState:(unsigned)arg1 ;
-(void)setHasComingFromState:(BOOL)arg1 ;
-(BOOL)hasComingFromState;
-(int)ingressMobilityCode;
-(void)setIngressMobilityCode:(int)arg1 ;
-(void)setHasIngressMobilityCode:(BOOL)arg1 ;
-(BOOL)hasIngressMobilityCode;
-(id)ingressMobilityCodeAsString:(int)arg1 ;
-(int)StringAsIngressMobilityCode:(id)arg1 ;
-(int)egressMobilityCode;
-(void)setEgressMobilityCode:(int)arg1 ;
-(void)setHasEgressMobilityCode:(BOOL)arg1 ;
-(BOOL)hasEgressMobilityCode;
-(id)egressMobilityCodeAsString:(int)arg1 ;
-(int)StringAsEgressMobilityCode:(id)arg1 ;
-(void)setTransitionsSuppressedByMobility:(unsigned)arg1 ;
-(void)setHasTransitionsSuppressedByMobility:(BOOL)arg1 ;
-(BOOL)hasTransitionsSuppressedByMobility;
-(void)setCellularDataUsage:(unsigned)arg1 ;
-(void)setHasCellularDataUsage:(BOOL)arg1 ;
-(BOOL)hasCellularDataUsage;
-(void)setHasPolicy:(BOOL)arg1 ;
-(BOOL)hasPolicy;
-(id)policyAsString:(int)arg1 ;
-(int)StringAsPolicy:(id)arg1 ;
-(int)advisor;
-(void)setAdvisor:(int)arg1 ;
-(void)setHasAdvisor:(BOOL)arg1 ;
-(BOOL)hasAdvisor;
-(id)advisorAsString:(int)arg1 ;
-(int)StringAsAdvisor:(id)arg1 ;
-(void)setActivationIdentifier:(unsigned)arg1 ;
-(void)setHasActivationIdentifier:(BOOL)arg1 ;
-(BOOL)hasActivationIdentifier;
-(int*)wifiIngressTriggers;
-(void)setWifiIngressTriggers:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)wifiIngressTriggersAsString:(int)arg1 ;
-(int)StringAsWifiIngressTriggers:(id)arg1 ;
-(int*)cellIngressTriggers;
-(void)setCellIngressTriggers:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)cellIngressTriggersAsString:(int)arg1 ;
-(int)StringAsCellIngressTriggers:(id)arg1 ;
-(int*)wifiEgressTriggers;
-(void)setWifiEgressTriggers:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)wifiEgressTriggersAsString:(int)arg1 ;
-(int)StringAsWifiEgressTriggers:(id)arg1 ;
-(int*)cellEgressTriggers;
-(void)setCellEgressTriggers:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)cellEgressTriggersAsString:(int)arg1 ;
-(int)StringAsCellEgressTriggers:(id)arg1 ;
-(unsigned long long)adviceHeldForSecs;
-(BOOL)kernelProbingActivated;
-(unsigned)ingressTriggerMultiplier;
-(unsigned)ingressTriggerPercentagex100;
-(unsigned)egressTriggerMultiplier;
-(unsigned)egressTriggerPercentagex100;
-(NSMutableArray *)ingressTriggerSignatures;
-(void)setIngressTriggerSignatures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)egressTriggerSignatures;
-(void)setEgressTriggerSignatures:(NSMutableArray *)arg1 ;
-(unsigned)comingFromState;
-(unsigned)transitionsSuppressedByMobility;
-(unsigned)cellularDataUsage;
-(unsigned)activationIdentifier;
@end

