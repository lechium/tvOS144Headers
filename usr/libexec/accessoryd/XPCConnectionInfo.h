//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface XPCConnectionInfo : NSObject
{
    NSXPCConnection *_XPCConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100092030
@property(readonly, nonatomic) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0000000100091f9c

@end
