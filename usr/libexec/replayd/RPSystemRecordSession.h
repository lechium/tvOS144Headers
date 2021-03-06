//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RPSession.h"

#import "RPCaptureManagerProtocol-Protocol.h"

@class RPMovieWriter;

@interface RPSystemRecordSession : RPSession <RPCaptureManagerProtocol>
{
    RPMovieWriter *_movieWriter;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010003176c
- (void)handleResumeContextIDFailure;	// IMP=0x0000000100031558
- (void)handleResumeCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000311d4
- (void)handleTimerDidUpdate:(id)arg1;	// IMP=0x00000001000310a0
- (void)handleDeviceRestrictionWarning;	// IMP=0x0000000100030e8c
- (void)handleDeviceLockedWarning;	// IMP=0x0000000100030c78
- (void)handleIncomingCallWarning;	// IMP=0x0000000100030a64
- (void)handleMemoryWarning;	// IMP=0x00000001000302f0
- (void)handleSystemAlertStop;	// IMP=0x00000001000300dc
- (id)dispatchCaptureQueue;	// IMP=0x000000010003006c
- (void)captureDidFailWithError:(id)arg1;	// IMP=0x000000010002fff8
- (void)didCaptureSampleWithType:(int)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withTransformFlags:(unsigned long long)arg3;	// IMP=0x000000010002fe70
- (struct CGSize)adjustedWindowSizeForSystemRecording;	// IMP=0x000000010002fd44
- (void)setCaptureMicrophoneEnabled:(_Bool)arg1;	// IMP=0x000000010002fcc0
- (void)pauseSession;	// IMP=0x000000010002fb38
- (void)stopSystemRecordingWithURLHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f72c
- (void)stopSystemRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f304
- (void)startSystemRecordingWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 contextID:(id)arg3 windowSize:(struct CGSize)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010002ebf4
- (id)outputPath;	// IMP=0x000000010002eb5c

@end

