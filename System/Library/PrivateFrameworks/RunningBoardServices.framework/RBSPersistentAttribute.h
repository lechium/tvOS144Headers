/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSPersistentAttribute : RBSAttribute
+(id)attribute;
-(void)applyToAcquisitionContext:(id)arg1 ;
-(void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3 ;
-(BOOL)isValidForContext:(id)arg1 withError:(id*)arg2 ;
@end

