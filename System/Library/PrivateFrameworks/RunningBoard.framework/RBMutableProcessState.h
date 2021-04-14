/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/RBProcessState.h>

@interface RBMutableProcessState : RBProcessState
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRole:(unsigned char)arg1 ;
-(void)addTag:(id)arg1 ;
-(void)setJetsamBand:(unsigned char)arg1 ;
-(void)setPreventSuspend:(BOOL)arg1 ;
-(void)setTerminationResistance:(unsigned char)arg1 ;
-(void)setPreventIdleSleep:(BOOL)arg1 ;
-(void)addPreventIdleSleepIdentifier:(id)arg1 ;
-(void)setGPUAllowed:(BOOL)arg1 ;
-(void)setJetsamLenientMode:(BOOL)arg1 ;
-(void)setThrottleBestEffortNetworking:(BOOL)arg1 ;
-(void)setMaxCPUUsageLimits:(id)arg1 forRole:(unsigned char)arg2 ;
-(void)setLegacyFinishTaskReason:(unsigned long long)arg1 ;
-(void)setIsBeingDebugged:(BOOL)arg1 ;
-(void)unionState:(id)arg1 ;
-(void)addInheritance:(id)arg1 ;
-(void)removeInheritance:(id)arg1 ;
-(void)removePreventIdleSleepIdentifier:(id)arg1 ;
-(void)removeAllPreventIdleSleepIdentifiers;
-(void)setMinCPUUsageLimits:(id)arg1 forRole:(unsigned char)arg2 ;
-(void)setForceRoleManage:(BOOL)arg1 ;
-(void)removeAllInheritances;
-(void)addLegacyAssertion:(id)arg1 ;
-(void)addRBAssertion:(id)arg1 ;
@end

