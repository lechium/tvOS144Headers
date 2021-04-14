/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IOUSBHost/IOUSBHost-Structs.h>
@class IOUSBHostInterface;

@interface IOUSBHostIOSource : NSObject {

	unsigned _debugLoggingMask;
	unsigned _ioConnection;
	IOUSBHostInterface* _hostInterface;
	unsigned long long _deviceAddress;
	unsigned long long _endpointAddress;
	IONotificationPortRef _ioNotificationPortRef;

}

@property (assign) unsigned debugLoggingMask;                                //@synthesize debugLoggingMask=_debugLoggingMask - In the implementation block
@property (assign) unsigned ioConnection;                                    //@synthesize ioConnection=_ioConnection - In the implementation block
@property (assign) IONotificationPortRef ioNotificationPortRef;              //@synthesize ioNotificationPortRef=_ioNotificationPortRef - In the implementation block
@property (retain) IOUSBHostInterface * hostInterface;                       //@synthesize hostInterface=_hostInterface - In the implementation block
@property (assign) unsigned long long deviceAddress;                         //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (assign) unsigned long long endpointAddress;                       //@synthesize endpointAddress=_endpointAddress - In the implementation block
-(unsigned long long)deviceAddress;
-(void)setDeviceAddress:(unsigned long long)arg1 ;
-(IOUSBHostInterface *)hostInterface;
-(unsigned)ioConnection;
-(void)setEndpointAddress:(unsigned long long)arg1 ;
-(unsigned long long)endpointAddress;
-(id)initWithHostInterface:(id)arg1 endpointAddress:(unsigned long long)arg2 ioConnection:(unsigned)arg3 ioNotificationPortRef:(IONotificationPortRef)arg4 deviceAddress:(unsigned long long)arg5 ;
-(IONotificationPortRef)ioNotificationPortRef;
-(unsigned)debugLoggingMask;
-(void)setDebugLoggingMask:(unsigned)arg1 ;
-(void)setIoConnection:(unsigned)arg1 ;
-(void)setIoNotificationPortRef:(IONotificationPortRef)arg1 ;
-(void)setHostInterface:(IOUSBHostInterface *)arg1 ;
@end

