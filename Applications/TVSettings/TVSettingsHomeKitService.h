//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMService;

@interface TVSettingsHomeKitService : NSObject
{
    _Bool _notificationsEnabled;	// 8 = 0x8
    HMService *_service;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100035f30
@property(nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(readonly, nonatomic) HMService *service; // @synthesize service=_service;
- (id)initWithHMService:(id)arg1;	// IMP=0x0000000100035d78

@end

