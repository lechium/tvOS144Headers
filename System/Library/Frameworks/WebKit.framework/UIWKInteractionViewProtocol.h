/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIWKInteractionViewProtocol
@optional
-(CGRect*)unobscuredContentRect;
-(void)clearSelection;
-(id)unscaledView;
-(void)willFinishIgnoringCalloutBarFadeAfterPerformingAction;
-(double)inverseScale;
-(BOOL)pointIsNearMarkedText:(CGPoint)arg1;
-(void)pasteWithCompletionHandler:(/*^block*/id)arg1;
-(id)alternativesForSelectedText;
-(BOOL)isReplaceAllowed;
-(void)replaceText:(id)arg1 withText:(id)arg2;
-(void)selectWordBackward;
-(void)changeSelectionWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 baseIsStart:(BOOL)arg3 withFlags:(long long)arg4;
-(void)moveByOffset:(long long)arg1;
-(void)requestRectsToEvadeForSelectionCommandsWithCompletionHandler:(/*^block*/id)arg1;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 fromPoint:(CGPoint)arg3 completionHandler:(/*^block*/id)arg4;
-(void)moveSelectionAtBoundary:(id)arg1 inDirection:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)replaceDictatedText:(id)arg1 withText:(id)arg2;
-(void)requestDictationContext:(/*^block*/id)arg1;
-(BOOL)shouldAllowHidingSelectionCommands;
-(BOOL)supportsTextSelectionWithCharacterGranularity;
-(id)attributedMarkedText;
-(BOOL)shouldSuppressUpdateCandidateView;
-(void)adjustSelectionWithDelta:(NSRange)arg1 completionHandler:(/*^block*/id)arg2;
-(void)requestDocumentContext:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)selectPositionAtPoint:(CGPoint)arg1 withContextRequest:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)insertTextPlaceholderWithSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeTextPlaceholder:(id)arg1 willInsertText:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)replaceSelectionOffset:(long long)arg1 length:(unsigned long long)arg2 withAnnotatedString:(id)arg3 relativeReplacementRange:(NSRange)arg4;
-(void)removeAnnotation:(id)arg1 forSelectionOffset:(long long)arg2 length:(unsigned long long)arg3;

@required
-(id)markedText;
-(id)selectedText;
-(BOOL)hasMarkedText;
-(void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)_cancelLongPressGestureRecognizer;
-(BOOL)hasSelectablePositionAtPoint:(CGPoint)arg1;
-(BOOL)textInteractionGesture:(long long)arg1 shouldBeginAtPoint:(CGPoint)arg2;
-(id)webSelectionRects;
-(void)changeSelectionWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;
-(void)changeSelectionWithTouchesFrom:(CGPoint)arg1 to:(CGPoint)arg2 withGesture:(long long)arg3 withState:(long long)arg4;
-(void)requestAutocorrectionRectsForString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)selectPositionAtPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3;
-(void)beginSelectionInDirection:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(CGRect*)textFirstRect;
-(CGRect*)textLastRect;
-(void)requestAutocorrectionContextWithCompletionHandler:(/*^block*/id)arg1;
-(void)selectWordForReplacement;

@end

