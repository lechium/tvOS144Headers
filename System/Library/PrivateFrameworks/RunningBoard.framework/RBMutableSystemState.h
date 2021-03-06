/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/RBSystemState.h>

@interface RBMutableSystemState : RBSystemState
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)addTag:(id)arg1 ;
-(void)setPreventIdleSleep:(BOOL)arg1 ;
-(void)addPreventIdleSleepIdentifier:(id)arg1 ;
-(void)unionState:(id)arg1 ;
-(void)removePreventIdleSleepIdentifier:(id)arg1 ;
-(void)removeAllPreventIdleSleepIdentifiers;
-(void)setPreventLaunch:(BOOL)arg1 ;
-(void)addPreventLaunchPredicate:(id)arg1 ;
@end

