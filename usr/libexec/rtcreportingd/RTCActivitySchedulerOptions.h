//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RTCActivitySchedulerOptions : NSObject
{
    unsigned int _initialRandomizationInterval;	// 8 = 0x8
    unsigned int _sequentialRandomizationInterval;	// 12 = 0xc
    unsigned int _sequentialRandomizationIntervalAfterSendError;	// 16 = 0x10
    unsigned int _sendInterval;	// 20 = 0x14
    unsigned int _activityDuration;	// 24 = 0x18
    _Bool _requiresUserIdle;	// 28 = 0x1c
    _Bool _requiresPowerPlugIn;	// 29 = 0x1d
    _Bool _requiresWiFi;	// 30 = 0x1e
    unsigned long long _fileSizeLimit;	// 32 = 0x20
    int _fileExpirationInterval;	// 40 = 0x28
    int _fileUpdateInterval;	// 44 = 0x2c
    NSString *_filePrefix;	// 48 = 0x30
}

@property(nonatomic) _Bool requiresWiFi; // @synthesize requiresWiFi=_requiresWiFi;
@property(nonatomic) _Bool requiresPowerPlugIn; // @synthesize requiresPowerPlugIn=_requiresPowerPlugIn;
@property(nonatomic) _Bool requiresUserIdle; // @synthesize requiresUserIdle=_requiresUserIdle;
@property(copy, nonatomic) NSString *filePrefix; // @synthesize filePrefix=_filePrefix;
@property(nonatomic) int fileUpdateInterval; // @synthesize fileUpdateInterval=_fileUpdateInterval;
@property(nonatomic) int fileExpirationInterval; // @synthesize fileExpirationInterval=_fileExpirationInterval;
@property(nonatomic) unsigned long long fileSizeLimit; // @synthesize fileSizeLimit=_fileSizeLimit;
@property(nonatomic) unsigned int sendInterval; // @synthesize sendInterval=_sendInterval;
@property(nonatomic) unsigned int activityDuration; // @synthesize activityDuration=_activityDuration;
@property(nonatomic) unsigned int sequentialRandomizationIntervalAfterSendError; // @synthesize sequentialRandomizationIntervalAfterSendError=_sequentialRandomizationIntervalAfterSendError;
@property(nonatomic) unsigned int sequentialRandomizationInterval; // @synthesize sequentialRandomizationInterval=_sequentialRandomizationInterval;
@property(nonatomic) unsigned int initialRandomizationInterval; // @synthesize initialRandomizationInterval=_initialRandomizationInterval;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002a274
- (id)initForSchedulingMode:(int)arg1;	// IMP=0x000000010002a124
- (void)dealloc;	// IMP=0x000000010002a0dc

@end

