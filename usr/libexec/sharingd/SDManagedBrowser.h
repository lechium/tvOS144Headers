//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface SDManagedBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    _Bool _sendNotification;	// 12 = 0xc
    NSDictionary *_servers;	// 16 = 0x10
}

+ (id)sharedBrowser;	// IMP=0x000000010015f3c4
- (void).cxx_destruct;	// IMP=0x000000010015f59c
- (void)stop;	// IMP=0x000000010015f578
- (void)start;	// IMP=0x000000010015f500
- (void)buildNodesAndNotify;	// IMP=0x000000010015f4fc
@property(readonly, copy) NSArray *nodes;
- (void)setServers:(id)arg1;	// IMP=0x000000010015f48c
- (id)init;	// IMP=0x000000010015f430

@end

