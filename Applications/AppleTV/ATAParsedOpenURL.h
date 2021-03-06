//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface ATAParsedOpenURL : NSObject
{
    NSURL *_URL;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    NSString *_tabBarItemIdentifier;	// 32 = 0x20
}

+ (id)_logStringForType:(unsigned long long)arg1;	// IMP=0x000000010000ad50
+ (id)parsedOpenURLWithURL:(id)arg1 andOptions:(id)arg2;	// IMP=0x000000010000a458
- (void).cxx_destruct;	// IMP=0x000000010000adb0
@property(retain, nonatomic) NSString *tabBarItemIdentifier; // @synthesize tabBarItemIdentifier=_tabBarItemIdentifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)description;	// IMP=0x000000010000aa88
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000a780
- (unsigned long long)hash;	// IMP=0x000000010000a6a8
- (id)_initWithURL:(id)arg1 options:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x000000010000a5d8
- (id)init;	// IMP=0x000000010000a550

@end

