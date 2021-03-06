//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDXPCDaemon.h"

#import "SDAirDropAlertManager-Protocol.h"
#import "SDAirDropTransferManagerProtocol-Protocol.h"

@class NSArray, NSMutableDictionary, NSObject, NSString;
@protocol SDAirDropAlertManagerDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropTransferManager : SDXPCDaemon <SDAirDropTransferManagerProtocol, SDAirDropAlertManager>
{
    NSObject<SDAirDropAlertManagerDelegate> *delegate;	// 8 = 0x8
    NSObject<SDAirDropAlertManagerDelegate> *_classroomDelegate;	// 16 = 0x10
    NSMutableDictionary *_transferIdentifierToTransfer;	// 24 = 0x18
    NSMutableDictionary *_transferIdentifierToHandler;	// 32 = 0x20
    NSArray *_kvoObservingKeys;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000813d4
@property(retain) NSArray *kvoObservingKeys; // @synthesize kvoObservingKeys=_kvoObservingKeys;
@property(retain) NSMutableDictionary *transferIdentifierToHandler; // @synthesize transferIdentifierToHandler=_transferIdentifierToHandler;
@property(retain) NSMutableDictionary *transferIdentifierToTransfer; // @synthesize transferIdentifierToTransfer=_transferIdentifierToTransfer;
@property(nonatomic) __weak NSObject<SDAirDropAlertManagerDelegate> *classroomDelegate; // @synthesize classroomDelegate=_classroomDelegate;
@property(nonatomic) __weak NSObject<SDAirDropAlertManagerDelegate> *delegate; // @synthesize delegate;
- (id)itemTypesForTransfer:(id)arg1;	// IMP=0x0000000100080d34
- (void)loadAllPersistedTransfers;	// IMP=0x00000001000809d8
- (void)cleanUpURL:(id)arg1;	// IMP=0x0000000100080860
- (id)transferURLForTransfer:(id)arg1;	// IMP=0x0000000100080778
- (id)persistedTransfersBaseURL;	// IMP=0x0000000100080720
- (void)setTransferState:(unsigned long long)arg1 forTransfer:(id)arg2 shouldNotify:(_Bool)arg3 shouldCleanup:(_Bool)arg4;	// IMP=0x00000001000805bc
- (void)setTransferState:(unsigned long long)arg1 forTransfer:(id)arg2 shouldNotify:(_Bool)arg3;	// IMP=0x00000001000805ac
- (void)failTransfer:(id)arg1 withState:(unsigned long long)arg2 failureReason:(unsigned long long)arg3;	// IMP=0x00000001000803f4
- (void)handlerFailedForTransfer:(id)arg1;	// IMP=0x00000001000801e4
- (void)setHandler:(id)arg1 forTransfer:(id)arg2;	// IMP=0x000000010007febc
- (id)determineHandlerForTransfer:(id)arg1;	// IMP=0x000000010007fa80
- (void)connectionInvalidated:(id)arg1;	// IMP=0x000000010007f99c
- (void)connectionEstablished:(id)arg1;	// IMP=0x000000010007f704
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x000000010007f6fc
- (id)remoteObjectInterface;	// IMP=0x000000010007f6e0
- (id)exportedInterface;	// IMP=0x000000010007f6c4
- (id)machServiceName;	// IMP=0x000000010007f6b8
- (void)transfer:(id)arg1 actionTriggeredForAction:(id)arg2;	// IMP=0x000000010007f594
- (void)transferUserResponseUpdated:(id)arg1;	// IMP=0x000000010007f06c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010007ef0c
- (void)finishedEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x000000010007ee00
- (void)errorEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x000000010007eccc
- (void)cancelEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x000000010007ebc0
- (void)progressEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x000000010007ea9c
- (void)askEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x000000010007e660
- (void)cleanUpTransfer:(id)arg1;	// IMP=0x000000010007e53c
- (void)removeTransfer:(id)arg1 shouldCleanup:(_Bool)arg2;	// IMP=0x000000010007e308
- (void)notifyObserversOfRemovedTransfer:(id)arg1;	// IMP=0x000000010007e254
- (void)notifyObserversOfUpdatedTransfer:(id)arg1;	// IMP=0x000000010007e1ac
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010007e1a0
- (void)_remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010007e150
- (void)invalidate;	// IMP=0x000000010007e11c
- (void)activate;	// IMP=0x000000010007e0e8
- (id)init;	// IMP=0x000000010007df94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

