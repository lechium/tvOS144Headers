//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RPReportingAgent : NSObject
{
    _Bool _frontCameraUsed;	// 8 = 0x8
    _Bool _backCameraUsed;	// 9 = 0x9
    NSString *_serviceName;	// 16 = 0x10
    double _activeDuration;	// 24 = 0x18
    long long _videoCaptureRate;	// 32 = 0x20
    long long _videoFrameCount;	// 40 = 0x28
    long long _appAudioFrameCount;	// 48 = 0x30
    long long _micFrameCount;	// 56 = 0x38
    unsigned long long _recordedFileSize;	// 64 = 0x40
    long long _endReason;	// 72 = 0x48
    struct CGSize _videoCaptureSize;	// 80 = 0x50
}

+ (void)reportSessionEnded:(unsigned short)arg1 endReason:(id)arg2 withServiceName:(id)arg3 clientBundleId:(id)arg4;	// IMP=0x0000000100018fec
- (void).cxx_destruct;	// IMP=0x0000000100019474
@property(nonatomic) long long endReason; // @synthesize endReason=_endReason;
@property(nonatomic) unsigned long long recordedFileSize; // @synthesize recordedFileSize=_recordedFileSize;
@property(nonatomic) _Bool backCameraUsed; // @synthesize backCameraUsed=_backCameraUsed;
@property(nonatomic) _Bool frontCameraUsed; // @synthesize frontCameraUsed=_frontCameraUsed;
@property(nonatomic) long long micFrameCount; // @synthesize micFrameCount=_micFrameCount;
@property(nonatomic) long long appAudioFrameCount; // @synthesize appAudioFrameCount=_appAudioFrameCount;
@property(nonatomic) long long videoFrameCount; // @synthesize videoFrameCount=_videoFrameCount;
@property(nonatomic) long long videoCaptureRate; // @synthesize videoCaptureRate=_videoCaptureRate;
@property(nonatomic) struct CGSize videoCaptureSize; // @synthesize videoCaptureSize=_videoCaptureSize;
@property(nonatomic) double activeDuration; // @synthesize activeDuration=_activeDuration;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)reportEventWithType:(unsigned short)arg1 dictionary:(id)arg2 clientBundleId:(id)arg3;	// IMP=0x0000000100018ce8
- (id)collectSummaryEventMetrics;	// IMP=0x00000001000188d0
- (id)initWithServiceName:(id)arg1;	// IMP=0x00000001000187ac

@end

