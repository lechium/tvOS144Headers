/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/TextInput/TextInput_intl.bundle/TextInput_intl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TIKeyboardInputManager.h>

@class TIHandwritingStrokes, NSArray, CHRecognizer;

@interface TIKeyboardInputManager_intl_HWR : TIKeyboardInputManager {

	TIHandwritingStrokes* _userDrawing;
	NSArray* _candidates;

}

@property (nonatomic,readonly) CHRecognizer * recognizer; 
@property (nonatomic,retain) TIHandwritingStrokes * userDrawing;              //@synthesize userDrawing=_userDrawing - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                            //@synthesize candidates=_candidates - In the implementation block
-(unsigned)inputCount;
-(NSArray *)candidates;
-(void)setCandidates:(NSArray *)arg1 ;
-(unsigned long long)initialSelectedIndex;
-(id)defaultCandidate;
-(id)candidateResultSet;
-(BOOL)canHandleKeyHitTest;
-(BOOL)shouldExtendPriorWord;
-(BOOL)suppliesCompletions;
-(BOOL)usesAutoDeleteWord;
-(BOOL)usesCandidateSelection;
-(id)keyboardBehaviors;
-(CHRecognizer *)recognizer;
-(void)clearInput;
-(id)handleKeyboardInput:(id)arg1 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(void)loadDictionaries;
-(BOOL)supportsLearning;
-(void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(TIHandwritingStrokes *)userDrawing;
-(id)recognitionResultsForStrokes:(id)arg1 context:(id)arg2 ;
-(BOOL)isDummyCandidate:(id)arg1 ;
-(id)addInputObject:(id)arg1 withContext:(id)arg2 ;
-(void)setUserDrawing:(TIHandwritingStrokes *)arg1 ;
-(void)updateCandidates;
@end

