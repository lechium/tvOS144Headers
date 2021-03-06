//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RPSession.h"

#import "RPCaptureManagerProtocol-Protocol.h"

@class NSURL, RPMovieWriter;

@interface RPRecordSession : RPSession <RPCaptureManagerProtocol>
{
    RPMovieWriter *_movieWriter;	// 88 = 0x58
    NSURL *_currentRecordingURL;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100039abc
- (void)handleResumeContextIDFailure;	// IMP=0x0000000100039874
- (void)handleDeviceRestrictionWarning;	// IMP=0x000000010003962c
- (void)handleDeviceLockedWarning;	// IMP=0x000000010003954c
- (void)handleDisplayWarning;	// IMP=0x0000000100039304
- (void)handleClientApplicationDidEnterForeground;	// IMP=0x00000001000391ec
- (void)handleClientApplicationDidEnterBackground;	// IMP=0x00000001000390fc
- (void)handleResumeCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100038d68
- (void)captureDidFailWithError:(id)arg1;	// IMP=0x0000000100038c24
- (void)didCaptureSampleWithType:(int)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withTransformFlags:(unsigned long long)arg3;	// IMP=0x0000000100038a9c
- (void)presentAcknowledgmentWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038580
- (id)dispatchCaptureQueue;	// IMP=0x0000000100038510
- (void)discardInAppRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100038394
- (void)pauseSession;	// IMP=0x000000010003820c
- (void)stopRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100037d44
- (void)startRecordingWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 contextID:(id)arg3 windowSize:(struct CGSize)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100037a98
- (id)outputPath;	// IMP=0x0000000100037a00

@end

