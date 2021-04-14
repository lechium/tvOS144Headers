//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IAPInfoUpdateRequestContext, NSData;
@protocol IAPInfoBagContract;

@interface IAPInfoUpdateRequest : NSObject
{
    id <IAPInfoBagContract> _bagContract;	// 8 = 0x8
    IAPInfoUpdateRequestContext *_context;	// 16 = 0x10
    NSData *_responseData;	// 24 = 0x18
    unsigned int _status;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001001d0110
- (id)_parseResponseData:(id)arg1;	// IMP=0x00000001001d0088
- (id)_requestURLWithError:(id *)arg1;	// IMP=0x00000001001cfdf8
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001cf9b0
- (id)initWithBagContract:(id)arg1 context:(id)arg2;	// IMP=0x00000001001cf90c

@end

