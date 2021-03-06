/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSAnimationFenceHandle.h>

@class CAFenceHandle, BSMachPortSendRight, NSString;

@interface BKSSystemAnimationFenceHandle : BKSAnimationFenceHandle {

	unsigned long long _fenceName;
	CAFenceHandle* _caFence;
	BSMachPortSendRight* _preFence;
	BSMachPortSendRight* _preFenceTrigger;
	unsigned long long _handleName;
	int _valid;
	BOOL _shouldTrace;
	BOOL _skipSync;

}

@property (nonatomic,copy,readonly) NSString * _trace; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)isUsable;
-(NSString *)_trace;
-(unsigned long long)fenceName;
-(unsigned)CAPort;
-(id)CAFenceHandle;
-(id)trigger;
-(BOOL)shouldIgnoreTrigger;
-(id)_initWithFenceName:(unsigned long long)arg1 fence:(id)arg2 preFence:(id)arg3 preFenceTrigger:(id)arg4 skipSync:(BOOL)arg5 shouldTrace:(BOOL)arg6 ;
@end

