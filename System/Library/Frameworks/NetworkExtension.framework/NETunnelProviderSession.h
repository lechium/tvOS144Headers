/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEVPNConnection.h>

@interface NETunnelProviderSession : NEVPNConnection
-(BOOL)startTunnelWithOptions:(id)arg1 andReturnError:(id*)arg2 ;
-(void)stopTunnel;
-(BOOL)sendProviderMessage:(id)arg1 returnError:(id*)arg2 responseHandler:(/*^block*/id)arg3 ;
@end

