//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDNetworkOperationDelegate-Protocol.h"

@class NSString, SDNetworkOperation;
@protocol SDAirDropListenerDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropListener : NSObject <SDNetworkOperationDelegate>
{
    SDNetworkOperation *_listener;	// 8 = 0x8
    _Bool _contactsOnly;	// 16 = 0x10
    id <SDAirDropListenerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000b67ac
@property __weak id <SDAirDropListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool contactsOnly; // @synthesize contactsOnly=_contactsOnly;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000001000b66b0
- (void)stop;	// IMP=0x00000001000b6658
- (void)start;	// IMP=0x00000001000b65d4
- (void)networkOperation:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x00000001000b62dc
- (id)init;	// IMP=0x00000001000b6288

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

