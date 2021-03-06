/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SFXPCInterface.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSXPCConnection, NSSet, NSString;

@interface SFDeviceDiscovery : NSObject <NSSecureCoding, SFXPCInterface> {

	BOOL _activateCalled;
	unsigned long long _activateTicks;
	NSObject*<OS_dispatch_source> _consoleUserTimer;
	NSMutableDictionary* _devices;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _legacy;
	BOOL _timeoutFired;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSXPCConnection* _xpcCnx;
	BOOL _overrideScreenOff;
	BOOL _scanCache;
	BOOL _targetUserSession;
	BOOL _trackPeers;
	unsigned _changeFlags;
	NSSet* _deviceFilter;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	unsigned long long _discoveryFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _fastScanMode;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _purpose;
	long long _rssiThreshold;
	long long _scanRate;
	long long _scanState;
	double _timeout;
	/*^block*/id _timeoutHandler;
	long long _scanRateOverride;
	/*^block*/id _scanStateChangedHandler;

}

@property (assign,nonatomic) long long scanRateOverride;                              //@synthesize scanRateOverride=_scanRateOverride - In the implementation block
@property (nonatomic,copy) id scanStateChangedHandler;                                //@synthesize scanStateChangedHandler=_scanStateChangedHandler - In the implementation block
@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,copy) NSSet * deviceFilter;                                      //@synthesize deviceFilter=_deviceFilter - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (assign,nonatomic) unsigned long long discoveryFlags;                       //@synthesize discoveryFlags=_discoveryFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) long long fastScanMode;                                  //@synthesize fastScanMode=_fastScanMode - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) BOOL overrideScreenOff;                                  //@synthesize overrideScreenOff=_overrideScreenOff - In the implementation block
@property (nonatomic,copy) NSString * purpose;                                        //@synthesize purpose=_purpose - In the implementation block
@property (assign,nonatomic) long long rssiThreshold;                                 //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (assign,nonatomic) BOOL scanCache;                                          //@synthesize scanCache=_scanCache - In the implementation block
@property (assign,nonatomic) long long scanRate;                                      //@synthesize scanRate=_scanRate - In the implementation block
@property (nonatomic,readonly) long long scanState;                                   //@synthesize scanState=_scanState - In the implementation block
@property (assign,nonatomic) BOOL targetUserSession;                                  //@synthesize targetUserSession=_targetUserSession - In the implementation block
@property (assign,nonatomic) double timeout;                                          //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                                         //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
@property (assign,nonatomic) BOOL trackPeers;                                         //@synthesize trackPeers=_trackPeers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(double)timeout;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)_interrupted;
-(void)setRssiThreshold:(long long)arg1 ;
-(long long)rssiThreshold;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)_ensureXPCStarted;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)deviceFoundHandler;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)deviceLostHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)setDiscoveryFlags:(unsigned long long)arg1 ;
-(unsigned)changeFlags;
-(unsigned long long)discoveryFlags;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(long long)scanRate;
-(void)setScanRate:(long long)arg1 ;
-(long long)scanRateOverride;
-(void)setScanRateOverride:(long long)arg1 ;
-(void)setPurpose:(NSString *)arg1 ;
-(NSString *)purpose;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(id)deviceChangedHandler;
-(void)setDeviceFilter:(NSSet *)arg1 ;
-(BOOL)targetUserSession;
-(void)setTargetUserSession:(BOOL)arg1 ;
-(void)setScanCache:(BOOL)arg1 ;
-(BOOL)scanCache;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
-(void)setOverrideScreenOff:(BOOL)arg1 ;
-(long long)scanState;
-(NSSet *)deviceFilter;
-(void)deviceDiscoveryFoundDevice:(id)arg1 ;
-(void)deviceDiscoveryLostDevice:(id)arg1 ;
-(void)deviceDiscoveryDeviceChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)deviceDiscoveryScanStateChanged:(long long)arg1 ;
-(void)_invokeBlockActivateSafe:(/*^block*/id)arg1 ;
-(void)setFastScanMode:(long long)arg1 ;
-(void)_startTimeoutIfNeeded;
-(void)_timeoutTimerFired;
-(id)scanStateChangedHandler;
-(void)setScanStateChangedHandler:(id)arg1 ;
-(void)setTrackPeers:(BOOL)arg1 ;
-(void)fastScanTrigger:(id)arg1 ;
-(void)fastScanCancel:(id)arg1 ;
-(void)_retryConsole;
-(long long)fastScanMode;
-(BOOL)overrideScreenOff;
-(BOOL)trackPeers;
@end

