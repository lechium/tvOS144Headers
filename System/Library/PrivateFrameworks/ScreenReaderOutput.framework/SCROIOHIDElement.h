/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <ScreenReaderOutput/SCROIOElement.h>
#import <libobjc.A.dylib/SCROIOBluetoothElementProtocol.h>
#import <libobjc.A.dylib/SCROIOHIDElementProtocol.h>

@class NSString;

@interface SCROIOHIDElement : SCROIOElement <SCROIOBluetoothElementProtocol, SCROIOHIDElementProtocol> {

	IOHIDDeviceRef _hidDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(int)transport;
-(id)bluetoothAddress;
-(id)initWithIOObject:(unsigned)arg1 ;
-(IOHIDDeviceRef)hidDevice;
@end

