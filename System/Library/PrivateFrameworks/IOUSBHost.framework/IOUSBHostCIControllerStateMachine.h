/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IOUSBHost/IOUSBHost-Structs.h>
@class IOUSBHostControllerInterface;

@interface IOUSBHostCIControllerStateMachine : NSObject {

	int _controllerState;
	IOUSBHostControllerInterface* _controllerInterface;
	unsigned long long _lastFrameNumber;
	unsigned long long _lastFrameTimestamp;

}

@property (assign,nonatomic) int controllerState;                                             //@synthesize controllerState=_controllerState - In the implementation block
@property (nonatomic,retain) IOUSBHostControllerInterface * controllerInterface;              //@synthesize controllerInterface=_controllerInterface - In the implementation block
@property (assign,nonatomic) unsigned long long lastFrameNumber;                              //@synthesize lastFrameNumber=_lastFrameNumber - In the implementation block
@property (assign,nonatomic) unsigned long long lastFrameTimestamp;                           //@synthesize lastFrameTimestamp=_lastFrameTimestamp - In the implementation block
-(void)setControllerInterface:(IOUSBHostControllerInterface *)arg1 ;
-(IOUSBHostControllerInterface *)controllerInterface;
-(BOOL)inspectCommand:(const IOUSBHostCIMessage*)arg1 error:(id*)arg2 ;
-(BOOL)respondToCommand:(const IOUSBHostCIMessage*)arg1 status:(int)arg2 error:(id*)arg3 ;
-(BOOL)processCommand:(const IOUSBHostCIMessage*)arg1 readonly:(BOOL)arg2 error:(id*)arg3 ;
-(void)setControllerState:(int)arg1 ;
-(int)controllerState;
-(void)setLastFrameNumber:(unsigned long long)arg1 ;
-(void)setLastFrameTimestamp:(unsigned long long)arg1 ;
-(BOOL)respondToCommand:(const IOUSBHostCIMessage*)arg1 status:(int)arg2 frame:(unsigned long long)arg3 timestamp:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)enqueueUpdatedFrame:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)lastFrameNumber;
-(unsigned long long)lastFrameTimestamp;
-(id)initWithInterface:(id)arg1 error:(id*)arg2 ;
@end

