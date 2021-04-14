/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TSgPTPNetworkPortClient <NSObject>
@optional
-(void)didTimeoutOnMACLookupForPort:(id)arg1;
-(void)didSyncTimeoutForPort:(id)arg1;
-(void)didSyncTimeoutWithMean:(unsigned long long)arg1 median:(unsigned long long)arg2 standardDeviation:(unsigned long long)arg3 minimum:(unsigned long long)arg4 maximum:(unsigned long long)arg5 numberOfSamples:(unsigned)arg6 forPort:(id)arg7;
-(void)didChangeASCapable:(BOOL)arg1 forPort:(id)arg2;
-(void)didChangeAdministrativeEnable:(BOOL)arg1 forPort:(id)arg2;
-(void)didTerminateServiceForPort:(id)arg1;

@end

