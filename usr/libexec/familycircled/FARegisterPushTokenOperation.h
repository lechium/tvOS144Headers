//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FAFamilyCircleOperation.h"

@class NSData;

@interface FARegisterPushTokenOperation : FAFamilyCircleOperation
{
    NSData *_pushToken;	// 8 = 0x8
    CDUnknownBlockType _registerTokenCompletionHandler;	// 16 = 0x10
}

+ (id)urlEndpoint;	// IMP=0x000000010000c354
- (void).cxx_destruct;	// IMP=0x000000010000c870
@property(copy) CDUnknownBlockType registerTokenCompletionHandler; // @synthesize registerTokenCompletionHandler=_registerTokenCompletionHandler;
@property(readonly) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)didFailWithError:(id)arg1;	// IMP=0x000000010000c7bc
- (void)didReceivePropertyListResponse:(id)arg1;	// IMP=0x000000010000c73c
- (id)urlRequest;	// IMP=0x000000010000c544
- (id)pushTokenString;	// IMP=0x000000010000c448
- (id)initWithAccount:(id)arg1 pushToken:(id)arg2;	// IMP=0x000000010000c360

@end
