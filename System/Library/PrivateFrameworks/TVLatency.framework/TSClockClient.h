/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TSClockClient <NSObject>
@optional
-(void)didResetClock:(id)arg1;
-(void)didChangeClockMasterForClock:(id)arg1;
-(void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
-(void)didBeginClockGrandmasterChangeForClock:(id)arg1;
-(void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
-(void)didEndClockGrandmasterChangeForClock:(id)arg1;
-(void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
-(void)didProcessSync:(id)arg1;
-(void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;

@end

