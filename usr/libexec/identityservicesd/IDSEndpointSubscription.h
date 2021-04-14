//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSURI, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IDSEndpointSubscription : NSObject
{
    NSString *_serviceIdentifier;	// 8 = 0x8
    IDSURI *_localURI;	// 16 = 0x10
    NSArray *_subscribedURIs;	// 24 = 0x18
    CDUnknownBlockType _resolvedEndpointsDidUpdateHandler;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableDictionary *_endpointMap;	// 48 = 0x30
    NSString *_peerIDManagerToken;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100018030
@property(readonly, nonatomic) NSString *peerIDManagerToken; // @synthesize peerIDManagerToken=_peerIDManagerToken;
@property(retain, nonatomic) NSMutableDictionary *endpointMap; // @synthesize endpointMap=_endpointMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType resolvedEndpointsDidUpdateHandler; // @synthesize resolvedEndpointsDidUpdateHandler=_resolvedEndpointsDidUpdateHandler;
@property(readonly, nonatomic) NSArray *subscribedURIs; // @synthesize subscribedURIs=_subscribedURIs;
@property(readonly, nonatomic) IDSURI *localURI; // @synthesize localURI=_localURI;
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void)_signalDidUpdateEndpoints;	// IMP=0x0000000100017e14
- (void)_noteSourceDidDiscoverEndpointMap:(id)arg1 forLocalURI:(id)arg2;	// IMP=0x0000000100017938
- (void)_registerEndpointQueryCompletionBlock;	// IMP=0x0000000100017600
- (id)resolvedEndpoints;	// IMP=0x00000001000173b0
- (void)initializeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016cfc
- (id)peerIDManager;	// IMP=0x0000000100016cc0
- (id)description;	// IMP=0x0000000100016b94
- (void)dealloc;	// IMP=0x0000000100016afc
- (id)initWithServiceIdentifier:(id)arg1 localURI:(id)arg2 subscribedURIs:(id)arg3 queue:(id)arg4;	// IMP=0x000000010001691c

@end
