//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMManagedPathRegistry.h"

@class MCMManagedPath, MCMUserIdentity;

@interface MCMManagedUserPathRegistry : MCMManagedPathRegistry
{
    MCMUserIdentity *_userIdentity;	// 104 = 0x68
    MCMManagedPath *_userHome;	// 112 = 0x70
    MCMManagedPath *_userLibrary;	// 120 = 0x78
    MCMManagedPath *_containermanagerUserLibrary;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000100063d24
@property(readonly, nonatomic) MCMManagedPath *containermanagerUserLibrary; // @synthesize containermanagerUserLibrary=_containermanagerUserLibrary;
@property(readonly, nonatomic) MCMManagedPath *userLibrary; // @synthesize userLibrary=_userLibrary;
@property(readonly, nonatomic) MCMManagedPath *userHome; // @synthesize userHome=_userHome;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (void)_initPathPropertiesWithUserHomeDirectoryURL:(id)arg1 clientUser:(id)arg2;	// IMP=0x0000000100063ba8
- (id)initWithUserIdentity:(id)arg1 daemonUser:(id)arg2;	// IMP=0x0000000100063a20

@end

