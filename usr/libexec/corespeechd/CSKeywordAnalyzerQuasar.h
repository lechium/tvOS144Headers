//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_EARSpeechRecognitionResultStream-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, _EARSpeechRecognitionAudioBuffer, _EARSpeechRecognizer;
@protocol CSKeywordAnalyzerQuasarScoreDelegate, OS_dispatch_queue;

@interface CSKeywordAnalyzerQuasar : NSObject <_EARSpeechRecognitionResultStream>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_previousUtteranceTokens;	// 16 = 0x10
    NSArray *_triggerTokenList;	// 24 = 0x18
    _EARSpeechRecognizer *_recognizer;	// 32 = 0x20
    _EARSpeechRecognitionAudioBuffer *_recognizerBuffer;	// 40 = 0x28
    _Bool _useKeywordSpotting;	// 48 = 0x30
    NSDictionary *_ctcKwdToPhraseIdMap;	// 56 = 0x38
    double _triggerConfidence;	// 64 = 0x40
    unsigned long long _activeChannel;	// 72 = 0x48
    id <CSKeywordAnalyzerQuasarScoreDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100022e34
@property(nonatomic) __weak id <CSKeywordAnalyzerQuasarScoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(readonly, nonatomic) double triggerConfidence; // @synthesize triggerConfidence=_triggerConfidence;
@property(retain, nonatomic) NSDictionary *ctcKwdToPhraseIdMap; // @synthesize ctcKwdToPhraseIdMap=_ctcKwdToPhraseIdMap;
- (double)_getConfidence:(id)arg1;	// IMP=0x0000000100022ac0
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;	// IMP=0x00000001000225cc
- (id)_phraseIdToCtcScoreMap;	// IMP=0x000000010002212c
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;	// IMP=0x0000000100021d1c
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;	// IMP=0x0000000100021ad4
- (void)_recognizeWavData:(const short *)arg1 length:(int)arg2;	// IMP=0x0000000100021a74
- (void)processAudioChunk:(id)arg1;	// IMP=0x00000001000217c4
- (void)endAudio;	// IMP=0x0000000100021660
- (void)runRecognition;	// IMP=0x00000001000214f8
- (void)dealloc;	// IMP=0x0000000100021434
- (void)reset;	// IMP=0x000000010002131c
- (id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(_Bool)arg3;	// IMP=0x0000000100020eac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
