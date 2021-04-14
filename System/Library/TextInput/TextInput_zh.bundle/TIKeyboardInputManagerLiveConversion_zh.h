/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInputChinese/TIKeyboardInputManagerChinesePhonetic.h>

@class TIKeyboardCandidate, NSArray, NSString, TIZhuyinInputManager;

@interface TIKeyboardInputManagerLiveConversion_zh : TIKeyboardInputManagerChinesePhonetic {

	BOOL _revertTonlessZhuyin;
	TIKeyboardCandidate* _topCandidate;
	TIKeyboardCandidate* _currentCandidate;
	NSArray* _segments;
	NSString* _remainingInput;
	TIZhuyinInputManager* _zhuyinInputManager;
	NSString* _cachedInputString;

}

@property (nonatomic,copy) TIKeyboardCandidate * topCandidate;                     //@synthesize topCandidate=_topCandidate - In the implementation block
@property (nonatomic,copy) TIKeyboardCandidate * currentCandidate;                 //@synthesize currentCandidate=_currentCandidate - In the implementation block
@property (nonatomic,copy) NSArray * segments;                                     //@synthesize segments=_segments - In the implementation block
@property (nonatomic,copy) NSString * remainingInput;                              //@synthesize remainingInput=_remainingInput - In the implementation block
@property (nonatomic,copy) TIZhuyinInputManager * zhuyinInputManager;              //@synthesize zhuyinInputManager=_zhuyinInputManager - In the implementation block
@property (nonatomic,copy) NSString * cachedInputString;                           //@synthesize cachedInputString=_cachedInputString - In the implementation block
@property (assign,nonatomic) BOOL revertTonlessZhuyin;                             //@synthesize revertTonlessZhuyin=_revertTonlessZhuyin - In the implementation block
-(unsigned)inputCount;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
-(id)markedText;
-(id)keyBehaviorsForState:(id)arg1 ;
-(unsigned long long)initialSelectedIndex;
-(BOOL)commitsAcceptedCandidate;
-(BOOL)supportsNumberKeySelection;
-(BOOL)usesLiveConversion;
-(BOOL)delayedCandidateList;
-(unsigned)inputIndex;
-(id)inputString;
-(id)keyboardBehaviors;
-(id)keyEventMap;
-(id)wordCharacters;
-(TIKeyboardCandidate *)currentCandidate;
-(void)setCurrentCandidate:(TIKeyboardCandidate *)arg1 ;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(BOOL)shouldClearInputOnMarkedTextOutOfSync;
-(id)validCharacterSetForAutocorrection;
-(void)saveGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)restoreGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)clearInput;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(void)commitComposition;
-(BOOL)closeCandidateGenerationContextWithResults:(id)arg1 ;
-(id)rawInputString;
-(id)didAcceptCandidate:(id)arg1 ;
-(NSString *)remainingInput;
-(TIInputManager*)initImplementation;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(int)inputMethodType;
-(TIKeyboardCandidate *)topCandidate;
-(void)setTopCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)_notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(void)setRemainingInput:(NSString *)arg1 ;
-(BOOL)shouldSearchCompletionForSubstrings;
-(id)phoneticSortingMethod;
-(void)setCachedInputString:(NSString *)arg1 ;
-(TIZhuyinInputManager *)zhuyinInputManager;
-(void)addInputToInternal:(id)arg1 ;
-(void)setRevertTonlessZhuyin:(BOOL)arg1 ;
-(void)presetSegmentPickerForLastSegment;
-(BOOL)updateCandidatesByWaitingForResults:(BOOL)arg1 ;
-(void)presentSegmentAdjuster;
-(BOOL)_shouldCommitInputDirectly:(id)arg1 ;
-(void)_addInputToInternal:(id)arg1 ;
-(id)internalInputString;
-(NSString *)cachedInputString;
-(BOOL)revertTonlessZhuyin;
-(BOOL)skipSetMarkedTextDuringInput;
-(BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1 ;
-(id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2 ;
-(void)setZhuyinInputManager:(TIZhuyinInputManager *)arg1 ;
@end

