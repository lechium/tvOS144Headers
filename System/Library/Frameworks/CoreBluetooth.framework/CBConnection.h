/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>
#import <libobjc.A.dylib/CBActivatable.h>
#import <libobjc.A.dylib/CBLabelable.h>
#import <libobjc.A.dylib/CBReadWriteRequestable.h>
#import <libobjc.A.dylib/CBStateReporting.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSUUID, CBCentralManager, CBPeripheral, NSObject, CBReadRequest, NSMutableArray, CBWriteRequest, NSString, CBDevice, CBL2CAPChannel;

@interface CBConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CBActivatable, CBLabelable, CBReadWriteRequestable, CBStateReporting> {

	/*^block*/id _activateCompletion;
	NSUUID* _blePeerUUID;
	CBCentralManager* _centralManager;
	BOOL _guardConnected;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	CBPeripheral* _peripheral;
	NSObject*<OS_dispatch_source> _readSource;
	unsigned char _readSuspended;
	CBReadRequest* _readRequestCurrent;
	NSMutableArray* _readRequests;
	int _socketFD;
	int _state;
	NSObject*<OS_dispatch_source> _writeSource;
	unsigned char _writeSuspended;
	CBWriteRequest* _writeRequestCurrent;
	NSMutableArray* _writeRequests;
	LogCategory* _ucat;
	unsigned short _blePSM;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	long long _bluetoothState;
	/*^block*/id _bluetoothStateChangedHandler;
	NSString* _clientBundleID;
	long long _clientUseCase;
	long long _connectionLatency;
	/*^block*/id _errorHandler;
	CBDevice* _peerDevice;
	CBL2CAPChannel* _l2capChannel;
	/*^block*/id _serverInvalidationHandler;

}

@property (nonatomic,retain) CBL2CAPChannel * l2capChannel;                           //@synthesize l2capChannel=_l2capChannel - In the implementation block
@property (nonatomic,copy) id serverInvalidationHandler;                              //@synthesize serverInvalidationHandler=_serverInvalidationHandler - In the implementation block
@property (assign,nonatomic) unsigned short blePSM;                                   //@synthesize blePSM=_blePSM - In the implementation block
@property (nonatomic,copy) NSString * clientBundleID;                                 //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (assign,nonatomic) long long clientUseCase;                                 //@synthesize clientUseCase=_clientUseCase - In the implementation block
@property (assign,nonatomic) long long connectionLatency;                             //@synthesize connectionLatency=_connectionLatency - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,retain) CBDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
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
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(long long)bluetoothState;
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)peripheral:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3 ;
-(BOOL)activateDirectAndReturnError:(id*)arg1 ;
-(BOOL)_setupIOAndReturnError:(id*)arg1 ;
-(BOOL)_startConnectingAndReturnError:(id*)arg1 ;
-(void)_reportError:(id)arg1 ;
-(void)_run;
-(void)_processReads:(BOOL)arg1 ;
-(void)_processWrites;
-(void)_abortReadsWithError:(id)arg1 ;
-(void)_abortWritesWithError:(id)arg1 ;
-(BOOL)_runConnectStart;
-(BOOL)_runSetupChannel;
-(void)_completeReadRequest:(id)arg1 error:(id)arg2 ;
-(BOOL)_processReadStatus;
-(void)_prepareReadRequest:(id)arg1 ;
-(void)_completeWriteRequest:(id)arg1 error:(id)arg2 ;
-(void)writeWithRequest:(id)arg1 ;
-(BOOL)_prepareWriteRequest:(id)arg1 error:(id*)arg2 ;
-(void)readWithRequest:(id)arg1 ;
-(void)writeEndOfDataWithCompletion:(/*^block*/id)arg1 ;
-(unsigned short)blePSM;
-(void)setBlePSM:(unsigned short)arg1 ;
-(NSString *)clientBundleID;
-(void)setClientBundleID:(NSString *)arg1 ;
-(long long)clientUseCase;
-(void)setClientUseCase:(long long)arg1 ;
-(long long)connectionLatency;
-(void)setConnectionLatency:(long long)arg1 ;
-(CBDevice *)peerDevice;
-(void)setPeerDevice:(CBDevice *)arg1 ;
-(CBL2CAPChannel *)l2capChannel;
-(void)setL2capChannel:(CBL2CAPChannel *)arg1 ;
-(id)serverInvalidationHandler;
-(void)setServerInvalidationHandler:(id)arg1 ;
@end

