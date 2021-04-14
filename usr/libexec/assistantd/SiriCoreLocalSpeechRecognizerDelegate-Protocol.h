//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFSpeechPackage, AFSpeechRecognition, NSArray, NSDictionary, NSError, SiriCoreLocalSpeechRecognizer;

@protocol SiriCoreLocalSpeechRecognizerDelegate <NSObject>
- (void)localSpeechRecognizer:(SiriCoreLocalSpeechRecognizer *)arg1 didCompletionRecognitionWithStatistics:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)localSpeechRecognizer:(SiriCoreLocalSpeechRecognizer *)arg1 didRecognizePackage:(AFSpeechPackage *)arg2;
- (void)localSpeechRecognizer:(SiriCoreLocalSpeechRecognizer *)arg1 didRecognizeRawEagerRecognitionCandidate:(AFSpeechRecognition *)arg2;
- (void)localSpeechRecognizer:(SiriCoreLocalSpeechRecognizer *)arg1 didProcessAudioDuration:(double)arg2;
- (void)localSpeechRecognizer:(SiriCoreLocalSpeechRecognizer *)arg1 didRecognizeTokens:(NSArray *)arg2;
@end

