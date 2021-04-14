//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString, VSInstrumentMetrics, VSSpeechRequest;

@protocol VSSpeechServiceDelegate <NSObject>
- (oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(VSInstrumentMetrics *)arg1 error:(NSError *)arg2;
- (oneway void)presynthesizedAudioRequestDidStopAtEnd:(_Bool)arg1 error:(NSError *)arg2;
- (oneway void)presynthesizedAudioRequestDidStart;
- (oneway void)synthesisRequest:(VSSpeechRequest *)arg1 didFinishWithInstrumentMetrics:(VSInstrumentMetrics *)arg2 error:(NSError *)arg3;
- (oneway void)synthesisRequest:(VSSpeechRequest *)arg1 didReceiveTimingInfo:(NSArray *)arg2;
- (oneway void)speechRequestDidReceiveTimingInfo:(NSArray *)arg1;
- (oneway void)speechRequestSuccessWithInstrumentMetrics:(VSInstrumentMetrics *)arg1;
- (oneway void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(NSString *)arg2 error:(NSError *)arg3;
- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidStart;
@end

