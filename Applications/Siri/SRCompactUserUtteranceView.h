//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SRSpeechRecognitionHypothesis, SUICStreamingTextView, UIVisualEffectView;
@protocol SRCompactUserUtteranceViewDelegate;

@interface SRCompactUserUtteranceView : UIView
{
    struct UIEdgeInsets _contentInsets;	// 8 = 0x8
    SRSpeechRecognitionHypothesis *_speechRecognitionHypothesis;	// 40 = 0x28
    id <SRCompactUserUtteranceViewDelegate> _delegate;	// 48 = 0x30
    SUICStreamingTextView *_streamingTextView;	// 56 = 0x38
    SUICStreamingTextView *_emojiMaskStreamingTextView;	// 64 = 0x40
    UIVisualEffectView *_backgroundView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010003cddc
@property(retain, nonatomic, getter=_backgroundView, setter=_setBackgroundView:) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic, getter=_emojiMaskStreamingTextView, setter=_setEmojiMaskStreamingTextView:) SUICStreamingTextView *emojiMaskStreamingTextView; // @synthesize emojiMaskStreamingTextView=_emojiMaskStreamingTextView;
@property(retain, nonatomic, getter=_streamingTextView, setter=_setStreamingTextView:) SUICStreamingTextView *streamingTextView; // @synthesize streamingTextView=_streamingTextView;
@property(nonatomic) __weak id <SRCompactUserUtteranceViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setStreamingText:(id)arg1;	// IMP=0x000000010003c7d0
- (void)_handleTap:(id)arg1;	// IMP=0x000000010003c6dc
- (id)_createStreamingTextViewForEmojisOnly:(_Bool)arg1;	// IMP=0x000000010003c5a0
- (void)layoutSubviews;	// IMP=0x000000010003c404
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010003c2e8
- (void)setSpeechRecognitionHypothesis:(id)arg1;	// IMP=0x000000010003c17c
- (id)initWithContentInsets:(struct UIEdgeInsets)arg1 cornerRadius:(double)arg2;	// IMP=0x000000010003be84

@end
