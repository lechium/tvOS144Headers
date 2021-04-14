/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class RBSProcessIdentity, RBInheritanceCollection, NSMutableDictionary, NSMutableSet, NSSet;

@interface RBProcessState : NSObject <NSCopying, NSMutableCopying> {

	RBSProcessIdentity* _identity;
	RBInheritanceCollection* _inheritances;
	NSMutableDictionary* _maxCPULimitsByRole;
	NSMutableDictionary* _minCPULimitsByRole;
	NSMutableDictionary* _jetsamLenientModeByRole;
	NSMutableSet* _preventIdleSleepIdentifiers;
	NSMutableSet* _tags;
	NSMutableSet* _legacyAssertions;
	NSMutableSet* _primitiveAssertions;
	unsigned long long _legacyFinishTaskReason;
	unsigned char _terminationResistance;
	unsigned char _jetsamBand;
	unsigned char _role;
	unsigned char _flags;
	NSSet* _preventLaunchReasons;

}

@property (nonatomic,copy,readonly) RBSProcessIdentity * identity;                                  //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) unsigned char role;                                                  //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) BOOL preventSuspend; 
@property (nonatomic,readonly) BOOL GPUAllowed; 
@property (nonatomic,readonly) unsigned char terminationResistance;                                 //@synthesize terminationResistance=_terminationResistance - In the implementation block
@property (nonatomic,readonly) unsigned char jetsamBand;                                            //@synthesize jetsamBand=_jetsamBand - In the implementation block
@property (nonatomic,readonly) BOOL isBeingDebugged; 
@property (nonatomic,readonly) BOOL preventIdleSleep; 
@property (nonatomic,readonly) BOOL jetsamLenientMode; 
@property (nonatomic,readonly) BOOL throttleBestEffortNetworking; 
@property (nonatomic,readonly) BOOL effectiveJetsamLenientMode; 
@property (nonatomic,readonly) BOOL forceRoleManage; 
@property (nonatomic,readonly) unsigned long long effectiveMaxCPUPercentage; 
@property (nonatomic,readonly) unsigned long long effectiveMaxCPUDuration; 
@property (nonatomic,readonly) unsigned long long effectiveMaxCPUUsageViolationPolicy; 
@property (nonatomic,readonly) unsigned long long effectiveMinCPUPercentage; 
@property (nonatomic,readonly) unsigned long long effectiveMinCPUDuration; 
@property (nonatomic,readonly) unsigned long long legacyFinishTaskReason;                           //@synthesize legacyFinishTaskReason=_legacyFinishTaskReason - In the implementation block
@property (nonatomic,readonly) NSSet * preventIdleSleepIdentifiers;                                 //@synthesize preventIdleSleepIdentifiers=_preventIdleSleepIdentifiers - In the implementation block
@property (nonatomic,readonly) RBInheritanceCollection * inheritances;                              //@synthesize inheritances=_inheritances - In the implementation block
@property (nonatomic,readonly) NSSet * preventLaunchReasons;                                        //@synthesize preventLaunchReasons=_preventLaunchReasons - In the implementation block
@property (nonatomic,copy,readonly) NSSet * tags; 
@property (nonatomic,copy,readonly) NSSet * legacyAssertions; 
@property (nonatomic,copy,readonly) NSSet * primitiveAssertions; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(RBSProcessIdentity *)identity;
-(NSSet *)tags;
-(id)initWithIdentity:(id)arg1 ;
-(unsigned char)role;
-(BOOL)isBeingDebugged;
-(unsigned char)jetsamBand;
-(unsigned char)terminationResistance;
-(BOOL)jetsamLenientMode;
-(unsigned long long)legacyFinishTaskReason;
-(RBInheritanceCollection *)inheritances;
-(NSSet *)legacyAssertions;
-(NSSet *)preventIdleSleepIdentifiers;
-(BOOL)preventIdleSleep;
-(BOOL)throttleBestEffortNetworking;
-(id)inheritancesForEnvironment:(id)arg1 ;
-(BOOL)preventSuspend;
-(BOOL)GPUAllowed;
-(BOOL)forceRoleManage;
-(unsigned long long)effectiveMaxCPUUsageViolationPolicy;
-(unsigned long long)effectiveMaxCPUDuration;
-(unsigned long long)effectiveMaxCPUPercentage;
-(unsigned long long)effectiveMinCPUDuration;
-(unsigned long long)effectiveMinCPUPercentage;
-(BOOL)effectiveJetsamLenientMode;
-(id)maxCPUUsageLimitsForRole:(unsigned char)arg1 ;
-(id)minCPUUsageLimitsForRole:(unsigned char)arg1 ;
-(BOOL)isAppNapEqualToProcessState:(id)arg1 ;
-(BOOL)isEqualToProcessStateIgnoringIdentity:(id)arg1 ;
-(BOOL)isEqualToProcessStateIgnoringInheritances:(id)arg1 ;
-(id)clientStateForProcess:(id)arg1 ;
-(NSSet *)primitiveAssertions;
-(NSSet *)preventLaunchReasons;
@end

