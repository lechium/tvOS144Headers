//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol NSSecureCoding;

@interface PBSystemOverlaySessionDismissalContext : NSObject
{
    _Bool _dismissedByClient;	// 8 = 0x8
    id <NSSecureCoding> _result;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100024830
@property(readonly, nonatomic) _Bool dismissedByClient; // @synthesize dismissedByClient=_dismissedByClient;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id <NSSecureCoding> result; // @synthesize result=_result;
- (id)initWithResult:(id)arg1 error:(id)arg2 dismissedByClient:(_Bool)arg3;	// IMP=0x0000000100024698

@end

