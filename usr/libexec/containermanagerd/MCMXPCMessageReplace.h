//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMXPCMessageBase.h"

@class MCMConcreteContainerIdentity;

@interface MCMXPCMessageReplace : MCMXPCMessageBase
{
    MCMConcreteContainerIdentity *_containerIdentityNew;	// 8 = 0x8
    MCMConcreteContainerIdentity *_containerIdentityOld;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100082238
@property(readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityOld; // @synthesize containerIdentityOld=_containerIdentityOld;
@property(readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityNew; // @synthesize containerIdentityNew=_containerIdentityNew;
- (_Bool)canBeHandledLocally;	// IMP=0x000000010008217c
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000100081fe0

@end

