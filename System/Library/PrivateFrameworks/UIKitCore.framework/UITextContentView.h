/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WebPolicyDelegate.h>
#import <libobjc.A.dylib/WebEditingDelegate.h>
#import <UIKit/UITextInput.h>
#import <UIKit/UITextLinkInteraction.h>
#import <UIKit/UITextInputTraits.h>

@class WebFrame, DOMHTMLElement, UITextInteractionAssistant, UIWebDocumentView, UIFont, UIColor, NSString, NSAttributedString, UITextRange, NSDictionary, UITextPosition, UIView, UITextInputPasswordRules;

@interface UITextContentView : UIView <WebPolicyDelegate, WebEditingDelegate, UITextInput, UITextLinkInteraction, UITextInputTraits> {

	id m_delegate;
	WebFrame* m_frame;
	DOMHTMLElement* m_body;
	int m_marginTop;
	UIEdgeInsets m_selectionInset;
	double m_bottomBufferHeight;
	BOOL m_editable;
	BOOL m_editing;
	BOOL m_becomesEditableWithGestures;
	BOOL m_becomingFirstResponder;
	BOOL m_reentrancyGuard;
	BOOL m_scrollsSelectionOnWebDocumentChanges;
	BOOL m_hasExplicitTextAlignment;
	BOOL m_allowsEditingTextAttributes;
	BOOL m_usesAttributedText;
	UITextInteractionAssistant* m_interactionAssistant;
	UIWebDocumentView* m_webView;
	UIFont* m_font;
	UIColor* m_textColor;
	long long m_textAlignment;

}

@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (assign,nonatomic,__weak) id<UITextContentViewDelegate> delegate; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,nonatomic) UIEdgeInsets selectionInset; 
@property (assign,nonatomic) BOOL scrollsSelectionOnWebDocumentChanges; 
@property (assign,nonatomic) BOOL allowsEditingTextAttributes; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
+(id)excludedElementsForHTML;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<UITextContentViewDelegate>)delegate;
-(void)setDelegate:(id<UITextContentViewDelegate>)arg1 ;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)isEditable;
-(BOOL)isEditing;
-(id)undoManager;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)visibleRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)hasText;
-(id)selectedText;
-(NSRange)selectedRange;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(id)textInputTraits;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(void)removeFromSuperview;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(int)marginTop;
-(void)setMarginTop:(int)arg1 ;
-(id)webView;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)selectAll;
-(void)setSelectionChangeCallbacksDisabled:(BOOL)arg1 ;
-(CGRect)rectForScrollToVisible;
-(long long)selectionAffinity;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)makeTextWritingDirectionNatural:(id)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(BOOL)hasMarkedText;
-(void)unmarkText;
-(id)selectionView;
-(id)undoManagerForWebView:(id)arg1 ;
-(void)webViewDidChange:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(long long)arg1 ;
-(BOOL)hasSelection;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(void)setSelectionGranularity:(long long)arg1 ;
-(NSDictionary *)markedTextStyle;
-(BOOL)isFirstResponder;
-(void)setEditing:(BOOL)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(id)styleString;
-(NSRange)selectionRange;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setContentToHTMLString:(id)arg1 ;
-(id)contentAsHTMLString;
-(BOOL)canResignFirstResponder;
-(long long)textAlignment;
-(void)_didScroll;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(UITextRange *)markedTextRange;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)select:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)increaseSize:(id)arg1 ;
-(void)decreaseSize:(id)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(long long)selectionGranularity;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(void)pasteAndMatchStyle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 webView:(id)arg2 ;
-(id<UITextInputDelegate>)inputDelegate;
-(void)beginSelectionChange;
-(id)interactionAssistant;
-(UITextRange *)selectedTextRange;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)cancelAutoscroll;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(CGRect)_selectionClipRect;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)endSelectionChange;
-(id)textInRange:(id)arg1 ;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(void)setBottomBufferHeight:(double)arg1 ;
-(id)automaticallySelectedOverlay;
-(id)metadataDictionariesForDictationResults;
-(id)fontForCaretSelection;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)insertTextPlaceholderWithSize:(CGSize)arg1 ;
-(void)removeTextPlaceholder:(id)arg1 ;
-(void)setSelectionAffinity:(long long)arg1 ;
-(id)insertDictationResultPlaceholder;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1 ;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDecelerating;
-(id)_keyboardResponder;
-(BOOL)_restoreFirstResponder;
-(CGRect)visibleTextRect;
-(id)_proxyTextInput;
-(void)keyboardDidShow:(id)arg1 ;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(void)updateSelection;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)arg1 ;
-(void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(BOOL)arg2 ;
-(void)setScrollsSelectionOnWebDocumentChanges:(BOOL)arg1 ;
-(void)updateContentEditableAttribute:(BOOL)arg1 ;
-(void)performBecomeEditableTasks;
-(void)setSelectionToEnd;
-(CGRect)caretRectForVisiblePosition:(id)arg1 ;
-(unsigned long long)offsetInMarkedTextForSelection:(id)arg1 ;
-(BOOL)allowsEditingTextAttributes;
-(UIEdgeInsets)selectionInset;
-(BOOL)scrollsSelectionOnWebDocumentChanges;
-(void)ensureSelection;
-(void)_sizeChanged;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(void)performScrollSelectionToVisible:(BOOL)arg1 ;
-(BOOL)shouldStartDataDetectors;
-(void)startDataDetectorsWithWebLock;
-(void)_removeAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4 ;
-(void)_removeTextViewPropertiesFromText:(id)arg1 ;
-(void)recalculateStyle;
-(void)cancelDataDetectorsWithWebLock;
-(void)resetDataDetectorsResultsWithWebLock;
-(unsigned long long)_allowedLinkTypes;
-(BOOL)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)isInteractingWithLink;
-(void)cancelInteractionWithLink;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(void)_hideSelectionCommands;
-(void)setSelectionToStart;
-(CGRect)rectForSelection:(NSRange)arg1 ;
-(void)setContentToAttributedString:(id)arg1 ;
-(id)contentAsAttributedString;
-(void)setAllowsEditingTextAttributes:(BOOL)arg1 ;
-(double)bottomBufferHeight;
-(void)displayScrollerIndicators;
-(void)setSelectionInset:(UIEdgeInsets)arg1 ;
@end

