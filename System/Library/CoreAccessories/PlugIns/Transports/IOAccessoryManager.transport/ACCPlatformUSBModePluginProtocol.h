/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCPlatformUSBModePluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(BOOL)setUSBMode:(int)arg1 forConnectionUUID:(id)arg2;
-(BOOL)setUSBMode:(int)arg1 forEndpointUUID:(id)arg2;
-(int)USBModeForConnectionUUID:(id)arg1;
-(int)USBModeForEndpointUUID:(id)arg1;

@end

