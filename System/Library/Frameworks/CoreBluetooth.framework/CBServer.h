/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>
#import <libobjc.A.dylib/CBActivatable.h>
#import <libobjc.A.dylib/CBLabelable.h>
#import <libobjc.A.dylib/CBStateReporting.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, CBPeripheralManager, NSObject, NSString;

@interface CBServer : NSObject <CBPeripheralManagerDelegate, CBActivatable, CBLabelable, CBStateReporting> {

	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	NSMutableSet* _connections;
	BOOL _invalidateCalled;
	CBPeripheralManager* _peripheralManager;
	LogCategory* _ucat;
	unsigned short _bleListenPSM;
	unsigned short _bleListeningPSM;
	long long _bluetoothState;
	/*^block*/id _bluetoothStateChangedHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	/*^block*/id _acceptHandler;
	/*^block*/id _configChangedHandler;

}

@property (nonatomic,copy) id acceptHandler;                                          //@synthesize acceptHandler=_acceptHandler - In the implementation block
@property (assign,nonatomic) unsigned short bleListenPSM;                             //@synthesize bleListenPSM=_bleListenPSM - In the implementation block
@property (nonatomic,readonly) unsigned short bleListeningPSM;                        //@synthesize bleListeningPSM=_bleListeningPSM - In the implementation block
@property (nonatomic,copy) id configChangedHandler;                                   //@synthesize configChangedHandler=_configChangedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) long long bluetoothState;                              //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                           //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(long long)bluetoothState;
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)peripheralManager:(id)arg1 didPublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3 ;
-(void)peripheralManager:(id)arg1 didUnpublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3 ;
-(void)peripheralManager:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_startIfNeeded;
-(void)_handleConnectionInvalidated:(id)arg1 ;
-(id)acceptHandler;
-(void)setAcceptHandler:(id)arg1 ;
-(unsigned short)bleListenPSM;
-(void)setBleListenPSM:(unsigned short)arg1 ;
-(unsigned short)bleListeningPSM;
-(id)configChangedHandler;
-(void)setConfigChangedHandler:(id)arg1 ;
@end

