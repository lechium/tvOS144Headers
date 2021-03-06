/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IOUSBHost/IOUSBHost-Structs.h>
@class IOUSBHostControllerInterface;

@interface IOUSBHostCIDeviceStateMachine : NSObject {

	int _deviceState;
	unsigned long long _completeRoute;
	unsigned long long _deviceAddress;
	IOUSBHostControllerInterface* _controllerInterface;

}

@property (assign,nonatomic) int deviceState;                                                 //@synthesize deviceState=_deviceState - In the implementation block
@property (assign,nonatomic) unsigned long long completeRoute;                                //@synthesize completeRoute=_completeRoute - In the implementation block
@property (assign,nonatomic) unsigned long long deviceAddress;                                //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,retain) IOUSBHostControllerInterface * controllerInterface;              //@synthesize controllerInterface=_controllerInterface - In the implementation block
-(int)deviceState;
-(void)setDeviceState:(int)arg1 ;
-(unsigned long long)deviceAddress;
-(void)setDeviceAddress:(unsigned long long)arg1 ;
-(void)setControllerInterface:(IOUSBHostControllerInterface *)arg1 ;
-(IOUSBHostControllerInterface *)controllerInterface;
-(BOOL)inspectCommand:(const IOUSBHostCIMessage*)arg1 error:(id*)arg2 ;
-(BOOL)respondToCommand:(const IOUSBHostCIMessage*)arg1 status:(int)arg2 error:(id*)arg3 ;
-(BOOL)processCommand:(const IOUSBHostCIMessage*)arg1 readonly:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithInterface:(id)arg1 command:(const IOUSBHostCIMessage*)arg2 error:(id*)arg3 ;
-(unsigned long long)completeRoute;
-(void)setCompleteRoute:(unsigned long long)arg1 ;
-(BOOL)respondToCommand:(const IOUSBHostCIMessage*)arg1 status:(int)arg2 deviceAddress:(unsigned long long)arg3 error:(id*)arg4 ;
@end

