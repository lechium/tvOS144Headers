/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NPTunnelDelegate <NSObject>
@property (readonly) BOOL isFirstTunnel; 
@required
-(BOOL)isFirstTunnel;
-(void)tunnel:(id)arg1 flowDidFallbackWithReason:(long long)arg2;
-(void)tunnelDidConnect:(id)arg1;
-(void)tunnelIsReady:(id)arg1;
-(void)tunnelDidCancel:(id)arg1;

@end

