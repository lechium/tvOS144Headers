//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GestaltHlpr : NSObject
{
}

+ (id)getSharedInstance;	// IMP=0x00000001000101e8
- (void)updateRecertInfo:(id)arg1 errors:(id *)arg2;	// IMP=0x0000000100010808
- (id)copyRegulatoryImagesInfo:(id *)arg1;	// IMP=0x000000010001076c
- (id)copyDeviceInfo:(id *)arg1;	// IMP=0x00000001000104c4
- (id)copyDeviceIDInfo:(id *)arg1;	// IMP=0x00000001000103fc
- (void)addAGestaltKey:(struct __CFString *)arg1 toDictionary:(id)arg2 required:(_Bool)arg3 errors:(id)arg4;	// IMP=0x00000001000102cc
- (_Bool)getBoolAnswer:(struct __CFString *)arg1;	// IMP=0x000000010001026c
- (id)copyAnswer:(struct __CFString *)arg1;	// IMP=0x0000000100010254

@end
