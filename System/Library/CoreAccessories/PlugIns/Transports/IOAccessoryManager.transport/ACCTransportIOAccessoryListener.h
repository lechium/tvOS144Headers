/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, ACCTransportIOAccessoryListenerProtocol;
#import <IOAccessoryManager/IOAccessoryManager-Structs.h>
@class NSObject;

@interface ACCTransportIOAccessoryListener : NSObject {

	IONotificationPortRef _ioAccessoryManagerClassNotify;
	unsigned _ioAccessoryManagerClassIteratorArrived;
	unsigned _ioAccessoryManagerClassIteratorTerminated;
	IONotificationPortRef _ioAccessoryPortClassNotify;
	unsigned _ioAccessoryPortClassIteratorArrived;
	unsigned _ioAccessoryPortClassIteratorTerminated;
	IONotificationPortRef _ioAccessoryAuthCPClassNotify;
	unsigned _ioAccessoryAuthCPClassIteratorArrived;
	unsigned _ioAccessoryAuthCPClassIteratorTerminated;
	IONotificationPortRef _ioAccessoryEAClassNotify;
	unsigned _ioAccessoryEAClassIteratorArrived;
	unsigned _ioAccessoryEAClassIteratorTerminated;
	IONotificationPortRef _ioAccessoryOOBPairingClassNotify;
	unsigned _ioAccessoryOOBPairingClassIteratorArrived;
	unsigned _ioAccessoryOOBPairingClassIteratorTerminated;
	NSObject*<OS_dispatch_queue> _ioAccessoryListenerQueue;
	id<ACCTransportIOAccessoryListenerProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<ACCTransportIOAccessoryListenerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<ACCTransportIOAccessoryListenerProtocol>)delegate;
-(void)setDelegate:(id<ACCTransportIOAccessoryListenerProtocol>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)startListening;
-(void)stopListening;
-(void)_startListeningForIOAccessoryManagerClass;
-(void)_startListeningForIOAccessoryPortClass;
-(void)_startListeningForIOAccessoryAuthCPClass;
-(void)_startListeningForIOAccessoryEAClass;
-(void)_startListeningForIOAccessoryOOBPairingClass;
-(void)_stopListeningForIOAccessoryOOBPairingClass;
-(void)_stopListeningForIOAccessoryEAClass;
-(void)_stopListeningForIOAccessoryAuthCPClass;
-(void)_stopListeningForIOAccessoryPortClass;
-(void)_stopListeningForIOAccessoryManagerClass;
-(void)_ioAccessoryManagerAttached:(unsigned)arg1 ;
-(void)_ioAccessoryManagerTerminated:(unsigned)arg1 ;
-(void)_ioAccessoryPortAttached:(unsigned)arg1 ;
-(void)_ioAccessoryPortTerminated:(unsigned)arg1 ;
-(void)_ioAccessoryAuthCPAttached:(unsigned)arg1 ;
-(void)_ioAccessoryAuthCPTerminated:(unsigned)arg1 ;
-(void)_ioAccessoryEAAttached:(unsigned)arg1 ;
-(void)_ioAccessoryEATerminated:(unsigned)arg1 ;
-(void)_ioAccessoryOOBPairingAttached:(unsigned)arg1 ;
-(void)_ioAccessoryOOBPairingTerminated:(unsigned)arg1 ;
@end

