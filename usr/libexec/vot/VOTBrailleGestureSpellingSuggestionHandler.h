//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UITextChecker;

@interface VOTBrailleGestureSpellingSuggestionHandler : NSObject
{
    UITextChecker *_textChecker;	// 8 = 0x8
    NSArray *_spellingSuggestions;	// 16 = 0x10
    struct _NSRange _rangeToReplace;	// 24 = 0x18
    long long _spellingSuggestionIndex;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100041fc0
- (void)clearSpellingSuggestions;	// IMP=0x0000000100041f84
- (id)applySpellingSuggestionForResponder:(id)arg1 languageCode:(id)arg2;	// IMP=0x0000000100041e44
- (id)currentSpellingSuggestion;	// IMP=0x0000000100041de4
- (void)selectNextSpellingSuggestionInDirection:(long long)arg1 responder:(id)arg2 languageCode:(id)arg3;	// IMP=0x0000000100041cfc
- (id)_generateSpellingSuggestionsForResponder:(id)arg1 languageCode:(id)arg2;	// IMP=0x0000000100041af4
- (id)_spellingSuggestionsForWord:(id)arg1 languageCode:(id)arg2;	// IMP=0x0000000100041998
- (id)_updateRangeToReplaceInContext:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000100041798

@end

