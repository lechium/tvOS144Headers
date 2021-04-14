//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ADRecordingInfo, CSEndpointerMetrics, NSArray, NSData, NSDictionary, NSError, NSFileHandle, NSString;
@protocol ADSpeechCapturing;

@protocol ADSpeechCapturingDelegate <NSObject>
- (void)speechCapturingDidProvideConfidenceScores:(NSDictionary *)arg1 classification:(unsigned long long)arg2 classifiedUser:(NSString *)arg3 unknownUserScore:(long long)arg4 duration:(long long)arg5 version:(long long)arg6 thresholdingType:(NSString *)arg7 assetVersion:(NSString *)arg8;
- (void)speechCapturing:(id <ADSpeechCapturing>)arg1 languageDetectorDidFail:(NSError *)arg2;
- (void)speechCapturing:(id <ADSpeechCapturing>)arg1 didDetectLanguage:(NSString *)arg2 confidenceScores:(NSDictionary *)arg3 isConfident:(_Bool)arg4;
- (void)speechCapturing:(id <ADSpeechCapturing>)arg1 didLoseAudioSessionOwnerOrMediaServices:(NSDictionary *)arg2;
- (void)speechCapturing:(id <ADSpeechCapturing>)arg1 didInterruptAudioSession:(NSDictionary *)arg2;
- (void)speechCapturing:(id <ADSpeechCapturing>)arg1 didSetAudioSessionActive:(_Bool)arg2;
- (void)speechCapturing:(id <ADSpeechCapturing>)arg1 willSetAudioSessionActive:(_Bool)arg2;
- (void)speechCapturingDidRequestUpdateSiriOutputVolume:(id <ADSpeechCapturing>)arg1;
- (void)speechCapturingDidRequestShutdownUI:(id <ADSpeechCapturing>)arg1;
- (void)speechCapturingDidRequestQuickStop:(id <ADSpeechCapturing>)arg1;
- (void)speechCapturing:(id <ADSpeechCapturing>)arg1 performTwoShotPromptWithType:(long long)arg2 completion:(void (^)(double, double, NSError *))arg3;
- (void)speechCapturing:(id <ADSpeechCapturing>)arg1 didDetectEndpointAtTime:(double)arg2;
- (void)speechCapturing:(id <ADSpeechCapturing>)arg1 didDetectStartpointAtTime:(double)arg2;
- (void)speechCapturing:(id <ADSpeechCapturing>)arg1 didFinishWritingAudioFile:(NSFileHandle *)arg2 error:(NSError *)arg3;
- (void)speechCapturingDidDelayEndpointForMusic:(id <ADSpeechCapturing>)arg1;
- (void)speechCapturingDidDetectMusic:(id <ADSpeechCapturing>)arg1;
- (void)speechCapturing:(id <ADSpeechCapturing>)arg1 didReceiveFingerprint:(NSData *)arg2 duration:(double)arg3;
- (void)speechCapturingDidStopRecordingWithError:(NSError *)arg1 endpointMode:(long long)arg2 totalPacketCount:(long long)arg3 endpointerMetrics:(CSEndpointerMetrics *)arg4;
- (void)speechCapturingWillStopRecording;
- (void)speechCapturingDidReceiveLastAudioBufferWithEndpointMode:(long long)arg1 totalPacketCount:(long long)arg2 endpointerMetrics:(CSEndpointerMetrics *)arg3;
- (void)speechCapturingDidRecordPCMAudioData:(NSData *)arg1;
- (void)speechCapturingDidRecordSpeechPackets:(NSArray *)arg1 atTimestamp:(double)arg2 totalPacketCount:(long long)arg3;
- (void)speechCapturingDidUpdateRecordingInfo:(ADRecordingInfo *)arg1;
- (void)speechCapturingDidStartRecordingSuccessfully:(_Bool)arg1 error:(NSError *)arg2 withInfo:(ADRecordingInfo *)arg3;
@end
