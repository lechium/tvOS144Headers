//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RPSession.h"

#import "RPCaptureManagerProtocol-Protocol.h"

@interface RPCaptureSession : RPSession <RPCaptureManagerProtocol>
{
}

- (void)handleClientApplicationDidEnterForeground;	// IMP=0x0000000100034acc
- (void)handleClientApplicationDidEnterBackground;	// IMP=0x00000001000349dc
- (void)handleResumeCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100034660
- (void)handleResumeContextIDFailure;	// IMP=0x0000000100034438
- (void)handleDeviceRestrictionWarning;	// IMP=0x0000000100034210
- (void)handleDeviceLockedWarning;	// IMP=0x0000000100034130
- (void)handleDisplayWarning;	// IMP=0x0000000100033f08
- (void)packageAudioSampleBufferForCapture:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;	// IMP=0x0000000100033ea0
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000100033d60
- (void)captureDidFailWithError:(id)arg1;	// IMP=0x0000000100033c3c
- (void)didCaptureSampleWithType:(int)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withTransformFlags:(unsigned long long)arg3;	// IMP=0x0000000100033b54
- (id)dispatchCaptureQueue;	// IMP=0x0000000100033ae4
- (void)pauseSession;	// IMP=0x0000000100033974
- (void)stopCaptureWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100033748
- (void)presentAcknowledgmentWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100033414
- (void)startCaptureWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 contextID:(id)arg3 windowSize:(struct CGSize)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100033168

@end

