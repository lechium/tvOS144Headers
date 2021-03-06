/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSProcessExecutionProvision.h>

@protocol OS_dispatch_queue;
@class NSObject, BSTimer, RBSProcessHandle;

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {

	SCD_Struct_FB7 _allowance;
	unsigned long long _baselineValue;
	unsigned long long _consumedValue;
	NSObject*<OS_dispatch_queue> _queue;
	BSTimer* _timer;
	RBSProcessHandle* _processHandle;

}

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) SCD_Struct_FB7 allowance;              //@synthesize allowance=_allowance - In the implementation block
+(id)provisionWithAllowance:(SCD_Struct_FB7)arg1 ;
+(id)provisionWithResourceType:(long long)arg1 timeInterval:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(long long)type;
-(id)succinctDescriptionBuilder;
-(void)_beginMonitoring;
-(void)_updateProgress;
-(void)_stopMonitoring;
-(void)_prepareForReuse;
-(id)initWithAllowance:(SCD_Struct_FB7)arg1 ;
-(BOOL)_queue_updateConsumption;
-(void)_queue_noteAllowanceExhausted;
-(void)_queue_stopMonitoring;
-(void)_queue_evaluateConsumption;
-(BOOL)_queue_calculateValueConsumed:(out unsigned long long*)arg1 ;
-(BOOL)allowanceRemaining:(out SCD_Struct_FB7*)arg1 ;
-(BOOL)isResourceProvision;
-(SCD_Struct_FB7)allowance;
-(void)setAllowance:(SCD_Struct_FB7)arg1 ;
@end

