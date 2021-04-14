/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class _UIKeyboardTextSelectionController, UITextCursorAssertionController;


@protocol UITextInteraction_AssistantDelegate <UITextAutoscrolling,NSObject>
@property (assign,nonatomic) BOOL autoscrolled; 
@property (assign,nonatomic) CGPoint loupeGestureEndPoint; 
@property (assign,nonatomic) BOOL needsGestureUpdate; 
@property (nonatomic,readonly) BOOL willHandoffLoupeMagnifier; 
@property (assign,nonatomic) BOOL expectingCommit; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * activeSelectionController; 
@property (nonatomic,readonly) UITextCursorAssertionController * _assertionController; 
@property (nonatomic,retain) id grabberSuppressionAssertion; 
@property (nonatomic,retain) id keyboardSuppressionAssertion; 
@optional
-(BOOL)overrideGestureRecognizerShouldBegin:(id)arg1;
-(BOOL)overrideGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

@required
-(id)view;
-(id)selectionView;
-(void)setGestureRecognizers;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1;
-(void)endFloatingCursor;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 velocity:(CGPoint)arg2;
-(void)stashCurrentSelection;
-(void)setAutoscrolled:(BOOL)arg1;
-(void)setGrabberSuppressionAssertion:(id)arg1;
-(void)setKeyboardSuppressionAssertion:(id)arg1;
-(void)setLoupeGestureEndPoint:(CGPoint)arg1;
-(void)setNeedsGestureUpdate:(BOOL)arg1;
-(void)setFirstResponderIfNecessary;
-(_UIKeyboardTextSelectionController *)activeSelectionController;
-(void)willBeginSelectionInteraction;
-(void)willBeginFloatingCursor:(BOOL)arg1;
-(void)resetWillHandoffLoupeMagnifier;
-(BOOL)autoscrolled;
-(void)didEndSelectionInteraction;
-(BOOL)needsGestureUpdate;
-(BOOL)willHandoffLoupeMagnifier;
-(void)clearStashedSelection;
-(void)setSelectionWithPoint:(CGPoint)arg1;
-(void)scrollSelectionToVisible;
-(UITextCursorAssertionController *)_assertionController;
-(void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
-(void)checkEditabilityAndSetFirstResponderIfNecessary;
-(void)setSuppressSystemUI:(BOOL)arg1;
-(BOOL)supportsIndirectInteractions;
-(void)canBeginDragCursor:(id)arg1;
-(void)lollipopGestureWithState:(long long)arg1 location:(CGPoint)arg2 locationOfFirstTouch:(CGPoint)arg3 forTouchType:(long long)arg4;
-(BOOL)viewCouldBecomeEditable:(id)arg1;
-(void)setFirstResponderIfNecessaryActivatingSelection:(BOOL)arg1;
-(void)notifyKeyboardSelectionChanged;
-(BOOL)containerAllowsSelectionTintOnly;
-(BOOL)useGesturesForEditableContent;
-(id)rangeForTextReplacement:(id)arg1;
-(BOOL)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2;
-(BOOL)didPerformLoupeSelectionHandoff;
-(void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
-(void)setExpectingCommit:(BOOL)arg1;
-(BOOL)containerIsTextField;
-(BOOL)usesAsynchronousSelectionController;
-(void)extendSelectionToPoint:(CGPoint)arg1;
-(id)grabberSuppressionAssertion;
-(id)keyboardSuppressionAssertion;
-(CGPoint)loupeGestureEndPoint;
-(BOOL)expectingCommit;
-(void)extendSelectionToLoupeOrSetToPoint:(CGPoint)arg1;
-(void)selectWordWithoutShowingCommands;
-(BOOL)didUseStashedSelection;
-(BOOL)hasActiveSelectionInteraction;

@end

