/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UITextInteractionAssistant, RTIInputSystemSourceSession;


@protocol UITextInputPrivate <UITextInput,UITextInputTokenizer,UITextInputTraits_Private>
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) long long selectionGranularity; 
@property (nonatomic,readonly) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate; 
@property (assign,nonatomic) long long _textInputSource; 
@property (nonatomic,readonly) RTIInputSystemSourceSession * _rtiSourceSession; 
@property (nonatomic,readonly) BOOL supportsImagePaste; 
@optional
-(CGRect*)visibleRect;
-(id)_autofillContext;
-(void)insertTextSuggestion:(id)arg1;
-(void)setSelectionGranularity:(long long)arg1;
-(RTIInputSystemSourceSession *)_rtiSourceSession;
-(long long)selectionGranularity;
-(BOOL)_shouldSuppressSelectionCommands;
-(void)handleKeyWebEvent:(id)arg1;
-(id)selectionInteractionAssistant;
-(CGRect*)_selectionClipRect;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
-(BOOL)requiresKeyEvents;
-(void)handleKeyWebEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setBottomBufferHeight:(double)arg1;
-(id)automaticallySelectedOverlay;
-(id)metadataDictionariesForDictationResults;
-(id)textColorForCaretSelection;
-(id)fontForCaretSelection;
-(void)insertAttributedText:(id)arg1;
-(id)attributedTextInRange:(id)arg1;
-(void)replaceRange:(id)arg1 withAttributedText:(id)arg2;
-(void)insertText:(id)arg1 style:(long long)arg2 alternatives:(id)arg3;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 velocity:(CGPoint)arg2;
-(void)modifierFlagsDidChangeFrom:(long long)arg1 to:(long long)arg2;
-(id)selectionContainerView;
-(void)streamingDictationDidBegin;
-(void)streamingDictationDidEnd;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
-(void)acceptedAutoFillWord:(id)arg1;
-(BOOL)isAutoFillMode;
-(double)_delayUntilRepeatInsertText:(id)arg1;
-(BOOL)_shouldRepeatInsertText:(id)arg1;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
-(void)_willShowCorrections;
-(void)_didHideCorrections;
-(SEL)_sendCurrentLocationAction;
-(BOOL)_isInteractiveDespiteResponderStatus;
-(id)annotatedSubstringForRange:(id)arg1;
-(void)replaceRange:(id)arg1 withAnnotatedString:(id)arg2 relativeReplacementRange:(NSRange)arg3;
-(void)removeAnnotation:(id)arg1 forRange:(id)arg2;
-(id<UITextInputSuggestionDelegate>)textInputSuggestionDelegate;
-(long long)_textInputSource;
-(void)set_textInputSource:(long long)arg1;
-(BOOL)supportsImagePaste;

@required
-(BOOL)hasContent;
-(id)textInputTraits;
-(void)selectAll;
-(BOOL)hasSelection;
-(NSRange*)selectionRange;
-(UITextInteractionAssistant *)interactionAssistant;

@end

