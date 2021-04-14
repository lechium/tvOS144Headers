/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventKeyCommandsDispatchingPredicate.h>

@class NSSet;

@interface BKSMutableHIDEventKeyCommandsDispatchingPredicate : BKSHIDEventKeyCommandsDispatchingPredicate

@property (nonatomic,copy) NSSet * senderDescriptors; 
@property (nonatomic,copy) NSSet * displays; 
+(id)new;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setDisplays:(NSSet *)arg1 ;
-(void)setSenderDescriptors:(NSSet *)arg1 ;
@end

