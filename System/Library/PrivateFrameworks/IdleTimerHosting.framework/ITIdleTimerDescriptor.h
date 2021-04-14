/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IdleTimerHosting.framework/IdleTimerHosting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IdleTimerHosting/IdleTimerHosting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSArray, NSString;

@interface ITIdleTimerDescriptor : NSObject <NSCopying, BSDescriptionProviding> {

	unsigned long long _attentionMaintenanceEventMask;
	unsigned long long _attentionRecoveryEventMask;
	double _attentionSamplingPeriod;
	double _attentionSamplingStartDelay;
	NSArray* _timeouts;

}

@property (nonatomic,readonly) unsigned long long attentionMaintenanceEventMask;              //@synthesize attentionMaintenanceEventMask=_attentionMaintenanceEventMask - In the implementation block
@property (nonatomic,readonly) unsigned long long attentionRecoveryEventMask;                 //@synthesize attentionRecoveryEventMask=_attentionRecoveryEventMask - In the implementation block
@property (assign,nonatomic) double attentionSamplingPeriod;                                  //@synthesize attentionSamplingPeriod=_attentionSamplingPeriod - In the implementation block
@property (assign,nonatomic) double attentionSamplingStartDelay;                              //@synthesize attentionSamplingStartDelay=_attentionSamplingStartDelay - In the implementation block
@property (assign,nonatomic) double attentionSamplingStartBeforeFirstTimeout; 
@property (nonatomic,copy) NSArray * timeouts;                                                //@synthesize timeouts=_timeouts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSArray *)timeouts;
-(void)setTimeouts:(NSArray *)arg1 ;
-(void)setAttentionSamplingStartDelay:(double)arg1 ;
-(void)setAttentionEventMaintenanceMask:(unsigned long long)arg1 recoveryMask:(unsigned long long)arg2 ;
-(double)attentionSamplingStartBeforeFirstTimeout;
-(void)setAttentionSamplingStartBeforeFirstTimeout:(double)arg1 ;
-(void)setAttentionEventMask:(unsigned long long)arg1 ;
-(unsigned long long)attentionMaintenanceEventMask;
-(unsigned long long)attentionRecoveryEventMask;
-(double)attentionSamplingPeriod;
-(void)setAttentionSamplingPeriod:(double)arg1 ;
-(double)attentionSamplingStartDelay;
@end

