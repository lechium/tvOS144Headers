//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRBabelInterface.h"

@class NSObject, NSString;
@protocol OS_dispatch_source, OS_nw_interface, OS_nw_path_evaluator;

@interface NRBabelInterfaceSocket : NRBabelInterface
{
    unsigned int _ifIndex;	// 48 = 0x30
    int _fd;	// 52 = 0x34
    NSString *_ifName;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_socketReadSource;	// 64 = 0x40
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;	// 72 = 0x48
    NSObject<OS_nw_interface> *_nwIf;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000709a4
@property(retain, nonatomic) NSObject<OS_nw_interface> *nwIf; // @synthesize nwIf=_nwIf;
@property(retain, nonatomic) NSObject<OS_nw_path_evaluator> *pathEvaluator; // @synthesize pathEvaluator=_pathEvaluator;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *socketReadSource; // @synthesize socketReadSource=_socketReadSource;
@property(nonatomic) int fd; // @synthesize fd=_fd;
@property(retain, nonatomic) NSString *ifName; // @synthesize ifName=_ifName;
@property(nonatomic) unsigned int ifIndex; // @synthesize ifIndex=_ifIndex;
- (void)addToProhibited:(id)arg1;	// IMP=0x0000000100070720
- (_Bool)handlePathUpdate:(id)arg1;	// IMP=0x000000010007043c
- (id)initWithInstance:(id)arg1 interface:(unsigned int)arg2;	// IMP=0x000000010006fa80
- (_Bool)setupLocalAddress;	// IMP=0x000000010006fa70
- (_Bool)setupLocalAddressCheckAgainst:(const struct in6_addr *)arg1;	// IMP=0x000000010006f3d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010006f358
- (id)description;	// IMP=0x000000010006f2cc
- (void)readPackets;	// IMP=0x000000010006e75c
- (void)dealloc;	// IMP=0x000000010006e6e0
- (void)sendPacket:(struct iovec *)arg1 iovLen:(unsigned int)arg2 toAddr:(const struct in6_addr *)arg3;	// IMP=0x000000010006e4b8

@end

