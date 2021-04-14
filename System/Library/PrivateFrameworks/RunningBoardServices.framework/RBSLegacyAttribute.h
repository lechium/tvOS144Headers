/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSLegacyAttribute : RBSAttribute {

	unsigned long long _reason;
	unsigned long long _requestedReason;
	unsigned long long _flags;

}

@property (assign,nonatomic) unsigned long long reason;                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long requestedReason; 
@property (nonatomic,readonly) unsigned long long flags; 
+(id)attributeWithReason:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(void)applyToAcquisitionContext:(id)arg1 ;
-(void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3 ;
-(void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3 ;
-(void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3 ;
-(BOOL)isValidForContext:(id)arg1 withError:(id*)arg2 ;
-(BOOL)conflictsWithAttribute:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)flags;
-(unsigned long long)reason;
-(void)setReason:(unsigned long long)arg1 ;
-(unsigned long long)requestedReason;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
@end

