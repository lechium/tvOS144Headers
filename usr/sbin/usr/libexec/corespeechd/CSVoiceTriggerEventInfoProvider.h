//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CSVoiceTriggerEventInfoProvider : NSObject
{
    NSDictionary *_voiceTriggerInfo;	// 8 = 0x8
    NSDictionary *_rtsTriggerInfo;	// 16 = 0x10
    unsigned long long _triggerNotifiedMachTime;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001000adad8
- (void).cxx_destruct;	// IMP=0x00000001000adb7c
@property(nonatomic) unsigned long long triggerNotifiedMachTime; // @synthesize triggerNotifiedMachTime=_triggerNotifiedMachTime;
@property(copy, nonatomic) NSDictionary *rtsTriggerInfo; // @synthesize rtsTriggerInfo=_rtsTriggerInfo;
@property(copy, nonatomic) NSDictionary *voiceTriggerInfo; // @synthesize voiceTriggerInfo=_voiceTriggerInfo;

@end

