//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSString, OS_dispatch_queue;

@interface _TtC10cloudpaird20MockCloudCoordinator : _TtCs12_SwiftObject
{
    MISSING_TYPE *isSignedIn;	// 16 = 0x10
    MISSING_TYPE *pushDelegateQueue;	// 24 = 0x18
}

- (void)didReceiveWithMessage:(id)arg1;	// IMP=0x0000000100092970
- (void)didReceiveWithToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;	// IMP=0x00000001000928d8
- (void)didReceiveWithPublicToken:(id)arg1;	// IMP=0x0000000100092888
@property(nonatomic, retain) OS_dispatch_queue *pushDelegateQueue; // @synthesize pushDelegateQueue;
@property(nonatomic, readonly) NSString *cloudContainerIdentifier;
@property(nonatomic, readonly) NSString *description;
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000100092cd0
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000100092cc8
- (_Bool)isMemberOfClass:(Class)arg1;	// IMP=0x0000000100092cc0
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000100092cb8
- (_Bool)isProxy;	// IMP=0x0000000100092cb0
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;	// IMP=0x0000000100092bc8
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x0000000100092b2c
- (id *)performSelector:(SEL)arg1;	// IMP=0x0000000100092ad8
- (id)self;	// IMP=0x0000000100092ac4
@property(nonatomic, readonly) Class superclass;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000929e4

@end

