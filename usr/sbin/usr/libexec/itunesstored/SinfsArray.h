//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SinfsArray : NSObject
{
    NSArray *_sinfs;	// 8 = 0x8
}

- (_Bool)_isRecognizedProperty:(id)arg1;	// IMP=0x000000010002ccf4
- (id)_copyValueForSINF:(id)arg1 property:(id)arg2 error:(id *)arg3;	// IMP=0x000000010002cb34
@property(readonly) NSArray *sinfs;
- (id)copyValueForProperty:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002c978
- (id)copyValueForField:(long long)arg1 error:(id *)arg2;	// IMP=0x000000010002c810
- (void)dealloc;	// IMP=0x000000010002c7c8
- (id)initWithSINFs:(id)arg1;	// IMP=0x000000010002c704
- (id)init;	// IMP=0x000000010002c6f4

@end
