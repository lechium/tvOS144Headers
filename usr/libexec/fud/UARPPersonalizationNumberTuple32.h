//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UARPPersonalizationNumberTuple32 : NSObject
{
    unsigned int _value;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
}

@property(readonly) unsigned int value; // @synthesize value=_value;
@property(readonly) NSString *key; // @synthesize key=_key;
- (id)description;	// IMP=0x000000010002a628
- (void)dealloc;	// IMP=0x000000010002a5e0
- (id)initWithKey:(id)arg1 value:(unsigned int)arg2;	// IMP=0x000000010002a570

@end
