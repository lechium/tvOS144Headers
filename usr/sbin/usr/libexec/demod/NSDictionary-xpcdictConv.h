//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (xpcdictConv)
+ (id)dictionaryFromXPCDictionary:(id)arg1 withDataFromKey:(const char *)arg2;	// IMP=0x0000000100021d18
+ (id)dictionaryFromJsonData:(id)arg1;	// IMP=0x0000000100021ba4
+ (id)dictionaryWithXPCDictionary:(id)arg1;	// IMP=0x00000001000213f8
- (id)convertToNSData;	// IMP=0x0000000100021f2c
- (_Bool)saveAsDataInXPCDictionary:(id)arg1 forKey:(const char *)arg2;	// IMP=0x0000000100021e70
- (id)createXPCDictionary;	// IMP=0x0000000100021b9c
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000010002144c
@end

