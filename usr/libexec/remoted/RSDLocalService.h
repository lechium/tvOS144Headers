//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface RSDLocalService : NSObject
{
    _Bool _is_exposed_to_untrusted_devices;	// 8 = 0x8
    _Bool _is_exposed_to_untrusted_devices_presetup;	// 9 = 0x9
    _Bool _is_exposed_to_untrusted_devices_internal;	// 10 = 0xa
    int _legacy_port;	// 12 = 0xc
    unsigned long long _token;	// 16 = 0x10
    char *_name;	// 24 = 0x18
    char *_entitlement;	// 32 = 0x20
    NSObject<OS_xpc_object> *_properties;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100003740
@property(nonatomic) _Bool is_exposed_to_untrusted_devices_internal; // @synthesize is_exposed_to_untrusted_devices_internal=_is_exposed_to_untrusted_devices_internal;
@property(nonatomic) _Bool is_exposed_to_untrusted_devices_presetup; // @synthesize is_exposed_to_untrusted_devices_presetup=_is_exposed_to_untrusted_devices_presetup;
@property(nonatomic) _Bool is_exposed_to_untrusted_devices; // @synthesize is_exposed_to_untrusted_devices=_is_exposed_to_untrusted_devices;
@property(retain, nonatomic) NSObject<OS_xpc_object> *properties; // @synthesize properties=_properties;
@property(nonatomic) char *entitlement; // @synthesize entitlement=_entitlement;
@property(nonatomic) char *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long token; // @synthesize token=_token;
@property(nonatomic) int legacy_port; // @synthesize legacy_port=_legacy_port;
- (void)dealloc;	// IMP=0x000000010000366c
- (void)set_expose_policy:(id)arg1;	// IMP=0x0000000100003458
- (id)copyServiceDescription;	// IMP=0x00000001000032bc
- (_Bool)shouldBeExposedToDevice:(id)arg1;	// IMP=0x00000001000031b8
- (void)fireDevice:(id)arg1 fd:(int)arg2;	// IMP=0x0000000100003044
- (id)initWithServiceEntryNamed:(const char *)arg1;	// IMP=0x0000000100002f04
- (id)initWithToken:(unsigned long long)arg1 name:(char *)arg2 event:(id)arg3;	// IMP=0x0000000100002da0

@end

