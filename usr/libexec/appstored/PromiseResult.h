//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface PromiseResult : NSObject
{
    NSError *_error;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (id)resultWithValue:(id)arg1;	// IMP=0x000000010000909c
+ (id)resultWithError:(id)arg1;	// IMP=0x0000000100009048
- (void).cxx_destruct;	// IMP=0x00000001000091f4
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) NSError *error; // @synthesize error=_error;
- (id)_initWithValue:(id)arg1 error:(id)arg2;	// IMP=0x0000000100009104
- (id)init;	// IMP=0x00000001000090f0

@end

