//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSServerBag;

@interface IDSQuickRelayAllocatorQueryPolicy : NSObject
{
    IDSServerBag *_serverBag;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001a35c4
@property(readonly, nonatomic) IDSServerBag *serverBag; // @synthesize serverBag=_serverBag;
- (_Bool)_serverBagBoolForKey:(id)arg1 withDefaultValue:(_Bool)arg2;	// IMP=0x00000001001a3468
- (_Bool)shouldQueryOnEveryQRAllocationForServiceIdentifier:(id)arg1;	// IMP=0x00000001001a2fb8
- (id)initWithServerBag:(id)arg1;	// IMP=0x00000001001a2ed0

@end

