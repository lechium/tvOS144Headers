//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface KeychainWrapper : NSObject
{
    NSMutableDictionary *keychainData;	// 8 = 0x8
    NSMutableDictionary *genericPasswordQuery;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000fc05c
@property(retain, nonatomic) NSMutableDictionary *genericPasswordQuery; // @synthesize genericPasswordQuery;
@property(retain, nonatomic) NSMutableDictionary *keychainData; // @synthesize keychainData;
- (void)writeToKeychain;	// IMP=0x00000001000fbe20
- (id)secItemFormatToDictionary:(id)arg1;	// IMP=0x00000001000fbcb0
- (id)dictionaryToSecItemFormat:(id)arg1;	// IMP=0x00000001000fbb38
- (void)resetKeychainItem;	// IMP=0x00000001000fb944
@property(retain, nonatomic) NSString *personId;
- (id)myObjectForKey:(id)arg1;	// IMP=0x00000001000fb8bc
- (void)mySetObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000fb808
- (id)init;	// IMP=0x00000001000fb630

@end

